#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <urldatafetcher.h>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    URLDataFetcher * f;
    QNetworkAccessManager * nam;
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
    void serviceRequestFinished(QNetworkReply* reply);
};

#endif // MAINWINDOW_H
