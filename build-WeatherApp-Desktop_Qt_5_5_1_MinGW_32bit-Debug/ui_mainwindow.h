/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *myLabel;
    QPushButton *pushButton;
    QLineEdit *city;
    QLabel *label;
    QLineEdit *countryCode;
    QLabel *label_2;
    QLabel *cityName;
    QLabel *temperature;
    QLabel *weather;
    QMenuBar *menuBar;
    QMenu *menuCurrent_weather;
    QMenu *menuWeekly_weather;
    QMenu *menuCompare_weathers;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        myLabel = new QLabel(centralWidget);
        myLabel->setObjectName(QStringLiteral("myLabel"));
        myLabel->setGeometry(QRect(10, 20, 51, 51));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 210, 171, 23));
        city = new QLineEdit(centralWidget);
        city->setObjectName(QStringLiteral("city"));
        city->setGeometry(QRect(110, 160, 113, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 160, 21, 16));
        countryCode = new QLineEdit(centralWidget);
        countryCode->setObjectName(QStringLiteral("countryCode"));
        countryCode->setGeometry(QRect(110, 180, 113, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 180, 71, 16));
        cityName = new QLabel(centralWidget);
        cityName->setObjectName(QStringLiteral("cityName"));
        cityName->setGeometry(QRect(80, 30, 201, 16));
        QFont font;
        font.setPointSize(11);
        cityName->setFont(font);
        temperature = new QLabel(centralWidget);
        temperature->setObjectName(QStringLiteral("temperature"));
        temperature->setGeometry(QRect(80, 50, 171, 16));
        QFont font1;
        font1.setPointSize(12);
        temperature->setFont(font1);
        weather = new QLabel(centralWidget);
        weather->setObjectName(QStringLiteral("weather"));
        weather->setGeometry(QRect(20, 90, 111, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuCurrent_weather = new QMenu(menuBar);
        menuCurrent_weather->setObjectName(QStringLiteral("menuCurrent_weather"));
        menuWeekly_weather = new QMenu(menuBar);
        menuWeekly_weather->setObjectName(QStringLiteral("menuWeekly_weather"));
        menuCompare_weathers = new QMenu(menuBar);
        menuCompare_weathers->setObjectName(QStringLiteral("menuCompare_weathers"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuCurrent_weather->menuAction());
        menuBar->addAction(menuWeekly_weather->menuAction());
        menuBar->addAction(menuCompare_weathers->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Weather App", 0));
        myLabel->setText(QApplication::translate("MainWindow", "Image", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Press to get current weather", 0));
        label->setText(QApplication::translate("MainWindow", "City:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Country code:", 0));
        cityName->setText(QApplication::translate("MainWindow", "City", 0));
        temperature->setText(QApplication::translate("MainWindow", "Temperature", 0));
        weather->setText(QApplication::translate("MainWindow", "weather", 0));
        menuCurrent_weather->setTitle(QApplication::translate("MainWindow", "Current weather", 0));
        menuWeekly_weather->setTitle(QApplication::translate("MainWindow", "Weekly weather", 0));
        menuCompare_weathers->setTitle(QApplication::translate("MainWindow", "Compare weathers", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
