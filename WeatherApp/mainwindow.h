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
    QLabel * currentIconLabel;
    QString iconID;
    QString description;
    QString cityName;
    QString countryCode;
    QString temperature;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:
    void loadImage();
    void getJSON();
    void getFiveDaysJSON();
    void parseCurrentWeatherData(QJsonDocument* doc);
    void parseFiveDaysWeatherData(QJsonDocument* doc);
    void serviceRequestFinished(QNetworkReply* reply);
};

#endif // MAINWINDOW_H
