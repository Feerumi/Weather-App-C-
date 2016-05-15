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

    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(currentWeatherPressed()));
    connect(ui->getWeathers,SIGNAL(clicked(bool)),this,SLOT(compareWeathersPressed()));
    connect(ui->fiveDaysCity,SIGNAL(editingFinished()),this,SLOT(fiveDaysForecastPressed()));

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

void MainWindow::compareWeathersPressed()
{
    firstCity = true;
    compareWeatherQuery = true;
    currentWeatherQuery = false;
    fiveDaysQuery = false;

    getJSON();
}

void MainWindow::currentWeatherPressed()
{
    currentWeatherQuery = true;
    compareWeatherQuery = false;
    fiveDaysQuery = false;
    getJSON();
}

void MainWindow::fiveDaysForecastPressed() {
    currentWeatherQuery = false;
    compareWeatherQuery = false;
    fiveDaysQuery = true;
    getJSON();
}

void MainWindow::getIcon(QString iconID)
{
    QUrl imageUrl("http://openweathermap.org/img/w/"+ iconID + ".png");
    qDebug() << imageUrl.toString();
    f = new URLDataFetcher(imageUrl,this);
    connect(f, SIGNAL (downloaded()), this, SLOT (loadImage()));
}

void MainWindow::currentWeatherHelper(QString cityName) {
    QString urlString = "http://api.openweathermap.org/data/2.5/weather?q=" + cityName + "," + "fi" + "&units=metric"+ "&appid=c3bac7f592e4b4211b21b19987b06616";
    QUrl url(urlString);
    QNetworkReply* reply = nam->get(QNetworkRequest(url));
}

void MainWindow::sleep()
{
    QTime dieTime= QTime::currentTime().addMSecs(1000);
               while (QTime::currentTime() < dieTime)
                   QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void MainWindow::getJSON() {
    QString city;
    QString country;
    QString urlString;

    //One city query.
    if(currentWeatherQuery)
    {
        currentIconLabel = ui->myLabel;
        city = ui->city->text();
        currentWeatherHelper(city);


     //Compare two cities weather.
    } else if(compareWeatherQuery) {

        //Get weather for first city.
        city = ui->firstCompareCity->text();
        currentWeatherHelper(city);

        sleep();

        city = ui->secondCompareCity->text();
        currentWeatherHelper(city);


     //Get fivedays weather forecast.
    } else if(fiveDaysQuery) {

        city = ui->fiveDaysCity->text();
        urlString = "http://api.openweathermap.org/data/2.5/forecast/daily?q=" + city + "&cnt=5" + "&units=metric" + "&appid=c3bac7f592e4b4211b21b19987b06616";
        QUrl url(urlString);
        qDebug() << urlString;
        QNetworkReply* reply = nam->get(QNetworkRequest(url));
    }

}


void MainWindow::parseCurrentWeatherData(QJsonDocument *doc) {

    QJsonObject temp;
    QJsonValue value;
    QJsonObject jo = doc->object();


    if(currentWeatherQuery) {
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
        getIcon(iconID);
        currentWeatherQuery = false;

    } else if(compareWeatherQuery) {



        //Get city name.
        value = jo.value((QStringLiteral("name")));
        cityName = value.toString();
        if(firstCity == true) {
            ui->city1label->setText(cityName);
        } else {
            ui->city2label->setText(cityName);
        }


        //Get temperature
        value = jo.value((QStringLiteral("main")));
        temp = value.toObject();
        value = temp.value((QStringLiteral("temp")));
        qDebug() << value.toDouble();
        temperature = QString::number(value.toDouble());
        qDebug() << temperature;

        if(firstCity == true) {
            ui->city1temp->setText(temperature + "°C");
        } else  {
            ui->city2temp->setText(temperature + "°C");
        }

        //Get weather data.
        value = jo.value((QStringLiteral("weather")));
        QJsonArray iconArray = value.toArray();
        value = iconArray.at(0);
        temp = value.toObject();

        //Get iconID and fetch image.
        iconID = temp.value("icon").toString();
        qDebug() << iconID + "<-";
        if(firstCity == true) {
            currentIconLabel = ui->city1Image;
        } else {
            currentIconLabel = ui->city2Image;
            firstCity = true;
        }

        getIcon(iconID);

        firstCity = false;

    }



}

void MainWindow::parseFiveDaysWeatherData(QJsonDocument * doc) {

    QJsonObject temp;
    QJsonValue value;
    QJsonArray jSArray;
    QString tempString;
    QString maxTempString;
    QString minTempString;
    QJsonObject jo = doc->object();


    for(int i = 0; i < 5; i++) {

        value = jo.value((QStringLiteral("list")));
        jSArray = value.toArray();
        temp = jSArray.at(i).toObject();

        qDebug() << temp.value((QStringLiteral("temp")));
        temp = temp.value((QStringLiteral("temp"))).toObject();
        qDebug() << temp.value((QStringLiteral("max")));
        double tempDouble = temp.value((QStringLiteral("max"))).toDouble();
        maxTempString = QString::number(tempDouble) + "°C";
        qDebug() << maxTempString;
        tempDouble = temp.value((QStringLiteral("min"))).toDouble();
        minTempString = QString::number(tempDouble) + "°C";

        temp = jSArray.at(i).toObject();
        value = temp.value((QStringLiteral("dt")));

        tempString = QString::number(value.toInt());
        int unixTime = tempString.toInt();
        QDateTime timestamp;

        timestamp.setTime_t(unixTime);
        tempString = timestamp.toString("ddd");

        switch(i) {

        case 0:
            ui->date1label->setText(tempString);
            ui->date1minTemp->setText(minTempString);
            ui->date1maxTemp->setText(maxTempString);
            qDebug() << "Set dateIcon to 1";
            currentIconLabel = ui->date1Icon;
            break;
        case 1:
            ui->date2label->setText(tempString);
            ui->date2minTemp->setText(minTempString);
            ui->date2maxTemp->setText(maxTempString);
            qDebug() << "Set dateIcon to 2";
            currentIconLabel = ui->date2icon;
            break;
        case 2:
            ui->date3label->setText(tempString);
            ui->date3minTemp->setText(minTempString);
            ui->date3maxTemp->setText(maxTempString);
            qDebug() << "Set dateIcon to 3";
            currentIconLabel = ui->date3icon;
            break;
        case 3:
            ui->date4label->setText(tempString);
            ui->date4minTemp->setText(minTempString);
            ui->date4maxTemp->setText(maxTempString);
            qDebug() << "Set dateIcon to 4";
            currentIconLabel = ui->date4icon;
            break;
        case 4:
            ui->date5label->setText(tempString);
            ui->date5minTemp->setText(minTempString);
            ui->date5maxTemp->setText(maxTempString);
            qDebug() << "Set dateIcon to 5";
            currentIconLabel = ui->date5icon;
            break;
        }

        //Get iconID and fetch image.
        jSArray = jo.value((QStringLiteral("list"))).toArray();
        temp = jSArray.at(i).toObject();
        jSArray = temp.value((QStringLiteral("weather"))).toArray();
        temp = jSArray.at(0).toObject();

        //Get iconID and fetch image.
        iconID = temp.value("icon").toString();
        qDebug() << iconID;
        getIcon(iconID);
        currentWeatherQuery = false;

        sleep();

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
            } else if(compareWeatherQuery) {
                parseCurrentWeatherData(&document);
            }

        }

    } else {
        qDebug() << "ERROR";
    }

    delete reply;
}
