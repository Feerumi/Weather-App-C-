/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *CurrentWeatherTab;
    QLineEdit *city;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *temperature;
    QLabel *cityName;
    QLabel *myLabel;
    QLabel *weather;
    QLineEdit *countryCode;
    QLabel *label_2;
    QWidget *fiveDaysForecastTab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *date1Icon;
    QLabel *date4icon;
    QLabel *date2icon;
    QSpacerItem *horizontalSpacer_4;
    QLabel *date3icon;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *date5icon;
    QSpacerItem *horizontalSpacer;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_5;
    QLabel *date2label;
    QLabel *date1label;
    QLabel *date3label;
    QLabel *date4label;
    QLabel *date5label;
    QLineEdit *fiveDaysCity;
    QLabel *label_3;
    QWidget *tab;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(512, 414);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 501, 371));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedKingdom));
        tabWidget->setTabPosition(QTabWidget::North);
        CurrentWeatherTab = new QWidget();
        CurrentWeatherTab->setObjectName(QStringLiteral("CurrentWeatherTab"));
        city = new QLineEdit(CurrentWeatherTab);
        city->setObjectName(QStringLiteral("city"));
        city->setGeometry(QRect(80, 250, 113, 20));
        label = new QLabel(CurrentWeatherTab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 250, 21, 16));
        pushButton = new QPushButton(CurrentWeatherTab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 250, 171, 23));
        temperature = new QLabel(CurrentWeatherTab);
        temperature->setObjectName(QStringLiteral("temperature"));
        temperature->setGeometry(QRect(120, 40, 171, 16));
        QFont font;
        font.setPointSize(12);
        temperature->setFont(font);
        cityName = new QLabel(CurrentWeatherTab);
        cityName->setObjectName(QStringLiteral("cityName"));
        cityName->setGeometry(QRect(120, 20, 201, 16));
        QFont font1;
        font1.setPointSize(11);
        cityName->setFont(font1);
        myLabel = new QLabel(CurrentWeatherTab);
        myLabel->setObjectName(QStringLiteral("myLabel"));
        myLabel->setGeometry(QRect(10, 10, 101, 111));
        weather = new QLabel(CurrentWeatherTab);
        weather->setObjectName(QStringLiteral("weather"));
        weather->setGeometry(QRect(10, 110, 111, 16));
        countryCode = new QLineEdit(CurrentWeatherTab);
        countryCode->setObjectName(QStringLiteral("countryCode"));
        countryCode->setGeometry(QRect(80, 220, 113, 20));
        label_2 = new QLabel(CurrentWeatherTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 220, 71, 16));
        tabWidget->addTab(CurrentWeatherTab, QString());
        fiveDaysForecastTab = new QWidget();
        fiveDaysForecastTab->setObjectName(QStringLiteral("fiveDaysForecastTab"));
        gridLayoutWidget = new QWidget(fiveDaysForecastTab);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(70, 70, 411, 80));
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        date1Icon = new QLabel(gridLayoutWidget);
        date1Icon->setObjectName(QStringLiteral("date1Icon"));

        gridLayout_3->addWidget(date1Icon, 0, 0, 1, 1);

        date4icon = new QLabel(gridLayoutWidget);
        date4icon->setObjectName(QStringLiteral("date4icon"));

        gridLayout_3->addWidget(date4icon, 0, 6, 1, 1);

        date2icon = new QLabel(gridLayoutWidget);
        date2icon->setObjectName(QStringLiteral("date2icon"));

        gridLayout_3->addWidget(date2icon, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 7, 1, 1);

        date3icon = new QLabel(gridLayoutWidget);
        date3icon->setObjectName(QStringLiteral("date3icon"));

        gridLayout_3->addWidget(date3icon, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 5, 1, 1);

        date5icon = new QLabel(gridLayoutWidget);
        date5icon->setObjectName(QStringLiteral("date5icon"));

        gridLayout_3->addWidget(date5icon, 0, 8, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(fiveDaysForecastTab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(80, 150, 411, 80));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        date2label = new QLabel(gridLayoutWidget_2);
        date2label->setObjectName(QStringLiteral("date2label"));

        gridLayout_5->addWidget(date2label, 0, 1, 1, 1);

        date1label = new QLabel(gridLayoutWidget_2);
        date1label->setObjectName(QStringLiteral("date1label"));

        gridLayout_5->addWidget(date1label, 0, 0, 1, 1);

        date3label = new QLabel(gridLayoutWidget_2);
        date3label->setObjectName(QStringLiteral("date3label"));

        gridLayout_5->addWidget(date3label, 0, 2, 1, 1);

        date4label = new QLabel(gridLayoutWidget_2);
        date4label->setObjectName(QStringLiteral("date4label"));

        gridLayout_5->addWidget(date4label, 0, 3, 1, 1);

        date5label = new QLabel(gridLayoutWidget_2);
        date5label->setObjectName(QStringLiteral("date5label"));

        gridLayout_5->addWidget(date5label, 0, 4, 1, 1);

        fiveDaysCity = new QLineEdit(fiveDaysForecastTab);
        fiveDaysCity->setObjectName(QStringLiteral("fiveDaysCity"));
        fiveDaysCity->setGeometry(QRect(200, 30, 171, 20));
        label_3 = new QLabel(fiveDaysForecastTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 30, 161, 16));
        tabWidget->addTab(fiveDaysForecastTab, QString());
        gridLayoutWidget->raise();
        gridLayoutWidget_2->raise();
        fiveDaysCity->raise();
        label_3->raise();
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 512, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Weather App", 0));
        label->setText(QApplication::translate("MainWindow", "City:", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Press to get current weather", 0));
        temperature->setText(QString());
        cityName->setText(QString());
        myLabel->setText(QString());
        weather->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Country code:", 0));
        tabWidget->setTabText(tabWidget->indexOf(CurrentWeatherTab), QApplication::translate("MainWindow", "Current weather on any city", 0));
        date1Icon->setText(QString());
        date4icon->setText(QString());
        date2icon->setText(QString());
        date3icon->setText(QString());
        date5icon->setText(QString());
        date2label->setText(QString());
        date1label->setText(QString());
        date3label->setText(QString());
        date4label->setText(QString());
        date5label->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Type a city name and press enter", 0));
        tabWidget->setTabText(tabWidget->indexOf(fiveDaysForecastTab), QApplication::translate("MainWindow", "5 days weather forecast", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Compare weathers", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
