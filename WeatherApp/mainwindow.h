#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <urldatafetcher.h>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QLabel>
#include <QTime>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    URLDataFetcher * f;
    QNetworkAccessManager * nam;
    bool fiveDaysQuery;
    bool currentWeatherQuery;
    bool compareWeatherQuery;
    bool firstCity;
    QLabel * currentIconLabel;
    QString iconID;
    QString description;
    QString cityName;
    QString countryCode;
    QString temperature;
public:
    explicit MainWindow(QWidget *parent = 0);
    void getIcon(QString iconID);
    void sleep();
    void currentWeatherHelper(QString cityName);
    void parseCompareCitys();
    void parseCurrentWeatherData(QJsonDocument* doc);
    void parseFiveDaysWeatherData(QJsonDocument* doc);
    void getJSON();
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:
    void loadImage();
    void compareWeathersPressed();
    void currentWeatherPressed();
    void fiveDaysForecastPressed();
    void serviceRequestFinished(QNetworkReply* reply);
};

#endif // MAINWINDOW_H
