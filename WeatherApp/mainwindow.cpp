#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "urldatafetcher.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(getJSON()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadImage() {
    QPixmap buttonImage;
    buttonImage.loadFromData(f->downloadedData());
    ui->myLabel->setPixmap(buttonImage);
}

void MainWindow::getJSON() {
    qDebug() << "derp";
    QString city = ui->city->text();
    QString country = ui->countryCode->text();

    nam = new QNetworkAccessManager(this);
    QObject::connect(nam, SIGNAL(finished(QNetworkReply*)),
                 this, SLOT(serviceRequestFinished(QNetworkReply*)));

    QString urlString = "http://api.openweathermap.org/data/2.5/weather?q=" + city + "," + country + "&units=metric"+ "&appid=c3bac7f592e4b4211b21b19987b06616";
    QUrl url(urlString);
    qDebug() << urlString;

    QNetworkReply* reply = nam->get(QNetworkRequest(url));
}

void MainWindow::serviceRequestFinished(QNetworkReply* reply)
{
    if(reply->error() == QNetworkReply::NoError) {


        QString strReply = (QString)reply->readAll();

        //qDebug() << strReply;


        QJsonDocument document = QJsonDocument::fromJson(strReply.toUtf8());

        if(document.isObject()) {
            QJsonObject temp;
            QJsonValue value;
            QJsonObject jo = document.object();

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
            connect(f, SIGNAL (downloaded()), this, SLOT (loadImage()));

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
