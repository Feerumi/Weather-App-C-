#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "urldatafetcher.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    currentWeatherQuery = false;
    fiveDaysQuery = false;

    nam = new QNetworkAccessManager(this);
    QObject::connect(nam, SIGNAL(finished(QNetworkReply*)),
                 this, SLOT(serviceRequestFinished(QNetworkReply*)));

    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(getJSON()));
    connect(ui->fiveDaysCity,SIGNAL(editingFinished()),this,SLOT(getFiveDaysJSON()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadImage() {
    qDebug() << "Called";
    QPixmap buttonImage;
    buttonImage.loadFromData(f->downloadedData());
    currentIconLabel->setPixmap(buttonImage);
    qDebug() << "Set image";

}

void MainWindow::getJSON() {
    qDebug() << "current";
    currentWeatherQuery = true;
    QString city = ui->city->text();
    QString country = ui->countryCode->text(); 
    QString urlString = "http://api.openweathermap.org/data/2.5/weather?q=" + city + "," + country + "&units=metric"+ "&appid=c3bac7f592e4b4211b21b19987b06616";   
    QUrl url(urlString);
    QNetworkReply* reply = nam->get(QNetworkRequest(url));
}

void MainWindow::getFiveDaysJSON() {
    fiveDaysQuery = true;
    qDebug() << "five days";
    QString city = ui->fiveDaysCity->text();
    QString urlString = "http://api.openweathermap.org/data/2.5/forecast/daily?q=" + city + "&cnt=5" + "&units=metric" + "&appid=c3bac7f592e4b4211b21b19987b06616";
    QUrl url(urlString);
    qDebug() << urlString;
    QNetworkReply* reply = nam->get(QNetworkRequest(url));
}

void MainWindow::parseCurrentWeatherData(QJsonDocument *doc) {

    QJsonObject temp;
    QJsonValue value;
    QJsonObject jo = doc->object();

    //Get fetched city name and display it on UI.
    value = jo.value((QStringLiteral("name")));
    cityName = value.toString();
    ui->cityName->setText(cityName);

    value = jo.value((QStringLiteral("main")));
    temp = value.toObject();
    value = temp.value((QStringLiteral("temp")));
    qDebug() << value.toDouble();
    temperature = QString::number(value.toDouble());
    qDebug() << temperature;
    ui->temperature->setText(temperature + "°C");

    //Get weather data.
    value = jo.value((QStringLiteral("weather")));
    QJsonArray iconArray = value.toArray();
    value = iconArray.at(0);
    temp = value.toObject();

    //Get weather description.
    description = temp.value("main").toString();
    ui->weather->setText(description);


    //Get iconID and fetch image.
    iconID = temp.value("icon").toString();
    QUrl imageUrl("http://openweathermap.org/img/w/"+ iconID + ".png");

    f = new URLDataFetcher(imageUrl,this);
    currentIconLabel = ui->myLabel;
    connect(f, SIGNAL (downloaded()), this, SLOT (loadImage()));
    currentWeatherQuery = false;

}

void MainWindow::parseFiveDaysWeatherData(QJsonDocument * doc) {

    QJsonObject temp;
    QJsonValue value;
    QJsonArray jSArray;
    QString tempString;
    QJsonObject jo = doc->object();


    for(int i = 0; i < 5; i++) {

        value = jo.value((QStringLiteral("list")));
        jSArray = value.toArray();
        temp = jSArray.at(i).toObject();

        value = temp.value((QStringLiteral("dt")));

        tempString = QString::number(value.toInt());
        int unixTime = tempString.toInt();
        QDateTime timestamp;
        timestamp.setTime_t(unixTime);
        tempString = timestamp.toString("dddd");

        switch(i) {

        case 0:
            ui->date1label->setText(tempString);
            qDebug() << "Set dateIcon to 1";
            currentIconLabel = ui->date1Icon;
            break;
        case 1:
            ui->date2label->setText(tempString);
            qDebug() << "Set dateIcon to 2";
            currentIconLabel = ui->date2icon;
            break;
        case 2:
            ui->date3label->setText(tempString);
            qDebug() << "Set dateIcon to 3";
            currentIconLabel = ui->date3icon;
            break;
        case 3:
            ui->date4label->setText(tempString);
            qDebug() << "Set dateIcon to 4";
            currentIconLabel = ui->date4icon;
            break;
        case 4:
            ui->date5label->setText(tempString);
            qDebug() << "Set dateIcon to 5";
            currentIconLabel = ui->date5icon;
            break;
        }

        //Get iconID and fetch image.
        jSArray = jo.value((QStringLiteral("list"))).toArray();
        temp = jSArray.at(i).toObject();
        jSArray = temp.value((QStringLiteral("weather"))).toArray();
        temp = jSArray.at(0).toObject();
        iconID = temp.value("icon").toString();

        QUrl imageUrl("http://openweathermap.org/img/w/"+ iconID + ".png");
        f = new URLDataFetcher(imageUrl,this);
        connect(f, SIGNAL (downloaded()), this, SLOT (loadImage()));

        QTime dieTime= QTime::currentTime().addMSecs(500);
           while (QTime::currentTime() < dieTime)
               QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
    fiveDaysQuery = false;

}

void MainWindow::serviceRequestFinished(QNetworkReply* reply)
{
    if(reply->error() == QNetworkReply::NoError) {


        QString strReply = (QString)reply->readAll();

        //qDebug() << strReply;


        QJsonDocument document = QJsonDocument::fromJson(strReply.toUtf8());

        if(document.isObject()) {

            if(currentWeatherQuery) {
                parseCurrentWeatherData(&document);
            } else if(fiveDaysQuery) {
                parseFiveDaysWeatherData(&document);
            }

        }
        /*
        QJsonObject wholeJSON = jsonResponse.object();

        QJsonObject jsonObject = wholeJSON["coord"];

        qDebug() << jsonObject["weather"].toString();
        /*
        foreach (const QJsonValue & value, jsonArray)
        {
            QJsonObject obj = value.toObject();
            qDebug() << value.toString();
        }
        */

    } else {
        qDebug() << "ERROR";
    }

    delete reply;
}
