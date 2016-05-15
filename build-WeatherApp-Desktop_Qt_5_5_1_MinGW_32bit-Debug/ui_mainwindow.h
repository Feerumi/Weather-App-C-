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
    QWidget *fiveDaysForecastTab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *date4icon;
    QLabel *date1Icon;
    QLabel *date3icon;
    QLabel *date2icon;
    QLabel *date5icon;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_5;
    QLabel *date5label;
    QLabel *date1label;
    QLabel *date3label;
    QLabel *date4label;
    QLabel *date2label;
    QLabel *date4minTemp;
    QLabel *date5minTemp;
    QLabel *date3minTemp;
    QLabel *date1minTemp;
    QLabel *date2minTemp;
    QLabel *date1maxTemp;
    QLabel *date2maxTemp;
    QLabel *date3maxTemp;
    QLabel *date4maxTemp;
    QLabel *date5maxTemp;
    QLineEdit *fiveDaysCity;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *compareWeathersTab;
    QLineEdit *firstCompareCity;
    QLineEdit *secondCompareCity;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *getWeathers;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *city2Image;
    QLabel *city1Image;
    QLabel *city1label;
    QLabel *city2label;
    QLabel *city1temp;
    QLabel *city2temp;
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
        label->setGeometry(QRect(20, 250, 51, 20));
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
        tabWidget->addTab(CurrentWeatherTab, QString());
        fiveDaysForecastTab = new QWidget();
        fiveDaysForecastTab->setObjectName(QStringLiteral("fiveDaysForecastTab"));
        gridLayoutWidget = new QWidget(fiveDaysForecastTab);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 70, 411, 80));
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        date4icon = new QLabel(gridLayoutWidget);
        date4icon->setObjectName(QStringLiteral("date4icon"));
        date4icon->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date4icon, 0, 3, 1, 1);

        date1Icon = new QLabel(gridLayoutWidget);
        date1Icon->setObjectName(QStringLiteral("date1Icon"));
        date1Icon->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date1Icon, 0, 0, 1, 1);

        date3icon = new QLabel(gridLayoutWidget);
        date3icon->setObjectName(QStringLiteral("date3icon"));
        date3icon->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date3icon, 0, 2, 1, 1);

        date2icon = new QLabel(gridLayoutWidget);
        date2icon->setObjectName(QStringLiteral("date2icon"));
        date2icon->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date2icon, 0, 1, 1, 1);

        date5icon = new QLabel(gridLayoutWidget);
        date5icon->setObjectName(QStringLiteral("date5icon"));
        date5icon->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date5icon, 0, 4, 1, 1);

        gridLayoutWidget_2 = new QWidget(fiveDaysForecastTab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(40, 150, 411, 80));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        date5label = new QLabel(gridLayoutWidget_2);
        date5label->setObjectName(QStringLiteral("date5label"));
        date5label->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(date5label, 0, 4, 1, 1);

        date1label = new QLabel(gridLayoutWidget_2);
        date1label->setObjectName(QStringLiteral("date1label"));
        date1label->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(date1label, 0, 0, 1, 1);

        date3label = new QLabel(gridLayoutWidget_2);
        date3label->setObjectName(QStringLiteral("date3label"));
        date3label->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(date3label, 0, 2, 1, 1);

        date4label = new QLabel(gridLayoutWidget_2);
        date4label->setObjectName(QStringLiteral("date4label"));
        date4label->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(date4label, 0, 3, 1, 1);

        date2label = new QLabel(gridLayoutWidget_2);
        date2label->setObjectName(QStringLiteral("date2label"));
        date2label->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(date2label, 0, 1, 1, 1);

        date4minTemp = new QLabel(gridLayoutWidget_2);
        date4minTemp->setObjectName(QStringLiteral("date4minTemp"));
        date4minTemp->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(date4minTemp, 1, 3, 1, 1);

        date5minTemp = new QLabel(gridLayoutWidget_2);
        date5minTemp->setObjectName(QStringLiteral("date5minTemp"));
        date5minTemp->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(date5minTemp, 1, 4, 1, 1);

        date3minTemp = new QLabel(gridLayoutWidget_2);
        date3minTemp->setObjectName(QStringLiteral("date3minTemp"));
        date3minTemp->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(date3minTemp, 1, 2, 1, 1);

        date1minTemp = new QLabel(gridLayoutWidget_2);
        date1minTemp->setObjectName(QStringLiteral("date1minTemp"));
        date1minTemp->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(date1minTemp, 1, 0, 1, 1);

        date2minTemp = new QLabel(gridLayoutWidget_2);
        date2minTemp->setObjectName(QStringLiteral("date2minTemp"));
        date2minTemp->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(date2minTemp, 1, 1, 1, 1);

        date1maxTemp = new QLabel(gridLayoutWidget_2);
        date1maxTemp->setObjectName(QStringLiteral("date1maxTemp"));
        date1maxTemp->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(date1maxTemp, 2, 0, 1, 1);

        date2maxTemp = new QLabel(gridLayoutWidget_2);
        date2maxTemp->setObjectName(QStringLiteral("date2maxTemp"));
        date2maxTemp->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(date2maxTemp, 2, 1, 1, 1);

        date3maxTemp = new QLabel(gridLayoutWidget_2);
        date3maxTemp->setObjectName(QStringLiteral("date3maxTemp"));
        date3maxTemp->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(date3maxTemp, 2, 2, 1, 1);

        date4maxTemp = new QLabel(gridLayoutWidget_2);
        date4maxTemp->setObjectName(QStringLiteral("date4maxTemp"));
        date4maxTemp->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(date4maxTemp, 2, 3, 1, 1);

        date5maxTemp = new QLabel(gridLayoutWidget_2);
        date5maxTemp->setObjectName(QStringLiteral("date5maxTemp"));
        date5maxTemp->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(date5maxTemp, 2, 4, 1, 1);

        fiveDaysCity = new QLineEdit(fiveDaysForecastTab);
        fiveDaysCity->setObjectName(QStringLiteral("fiveDaysCity"));
        fiveDaysCity->setGeometry(QRect(200, 30, 171, 20));
        label_3 = new QLabel(fiveDaysForecastTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 30, 161, 16));
        pushButton_2 = new QPushButton(fiveDaysForecastTab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 30, 75, 23));
        label_10 = new QLabel(fiveDaysForecastTab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 180, 21, 16));
        label_11 = new QLabel(fiveDaysForecastTab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 210, 21, 16));
        tabWidget->addTab(fiveDaysForecastTab, QString());
        compareWeathersTab = new QWidget();
        compareWeathersTab->setObjectName(QStringLiteral("compareWeathersTab"));
        firstCompareCity = new QLineEdit(compareWeathersTab);
        firstCompareCity->setObjectName(QStringLiteral("firstCompareCity"));
        firstCompareCity->setGeometry(QRect(120, 30, 113, 20));
        secondCompareCity = new QLineEdit(compareWeathersTab);
        secondCompareCity->setObjectName(QStringLiteral("secondCompareCity"));
        secondCompareCity->setGeometry(QRect(120, 60, 113, 20));
        label_4 = new QLabel(compareWeathersTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 30, 111, 16));
        label_5 = new QLabel(compareWeathersTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 60, 91, 16));
        getWeathers = new QPushButton(compareWeathersTab);
        getWeathers->setObjectName(QStringLiteral("getWeathers"));
        getWeathers->setGeometry(QRect(70, 90, 75, 23));
        gridLayoutWidget_3 = new QWidget(compareWeathersTab);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(70, 170, 311, 80));
        gridLayout = new QGridLayout(gridLayoutWidget_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        city2Image = new QLabel(gridLayoutWidget_3);
        city2Image->setObjectName(QStringLiteral("city2Image"));

        gridLayout->addWidget(city2Image, 0, 2, 1, 1);

        city1Image = new QLabel(gridLayoutWidget_3);
        city1Image->setObjectName(QStringLiteral("city1Image"));

        gridLayout->addWidget(city1Image, 0, 0, 1, 1);

        city1label = new QLabel(compareWeathersTab);
        city1label->setObjectName(QStringLiteral("city1label"));
        city1label->setGeometry(QRect(70, 140, 71, 16));
        city2label = new QLabel(compareWeathersTab);
        city2label->setObjectName(QStringLiteral("city2label"));
        city2label->setGeometry(QRect(340, 140, 81, 16));
        city1temp = new QLabel(compareWeathersTab);
        city1temp->setObjectName(QStringLiteral("city1temp"));
        city1temp->setGeometry(QRect(70, 260, 91, 16));
        city2temp = new QLabel(compareWeathersTab);
        city2temp->setObjectName(QStringLiteral("city2temp"));
        city2temp->setGeometry(QRect(340, 260, 91, 16));
        tabWidget->addTab(compareWeathersTab, QString());
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
        label->setText(QApplication::translate("MainWindow", "Kaupunk:i", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Press to get current weather", 0));
        temperature->setText(QString());
        cityName->setText(QString());
        myLabel->setText(QString());
        weather->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(CurrentWeatherTab), QApplication::translate("MainWindow", "T\303\244m\303\244n hetkinen s\303\244\303\244", 0));
        date4icon->setText(QString());
        date1Icon->setText(QString());
        date3icon->setText(QString());
        date2icon->setText(QString());
        date5icon->setText(QString());
        date5label->setText(QString());
        date1label->setText(QString());
        date3label->setText(QString());
        date4label->setText(QString());
        date2label->setText(QString());
        date4minTemp->setText(QString());
        date5minTemp->setText(QString());
        date3minTemp->setText(QString());
        date1minTemp->setText(QString());
        date2minTemp->setText(QString());
        date1maxTemp->setText(QString());
        date2maxTemp->setText(QString());
        date3maxTemp->setText(QString());
        date4maxTemp->setText(QString());
        date5maxTemp->setText(QString());
        fiveDaysCity->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Hae kaupungin 5 p\303\244iv\303\244n ennuste", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Hae tulokset", 0));
        label_10->setText(QApplication::translate("MainWindow", "min", 0));
        label_11->setText(QApplication::translate("MainWindow", "max", 0));
        tabWidget->setTabText(tabWidget->indexOf(fiveDaysForecastTab), QApplication::translate("MainWindow", "Viiden p\303\244iv\303\244n s\303\244\303\244", 0));
        label_4->setText(QApplication::translate("MainWindow", "Ensimm\303\244inen kaupunki:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Toinen kaupunki:", 0));
        getWeathers->setText(QApplication::translate("MainWindow", "Hae s\303\244\303\244t", 0));
        city2Image->setText(QString());
        city1Image->setText(QString());
        city1label->setText(QString());
        city2label->setText(QString());
        city1temp->setText(QString());
        city2temp->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(compareWeathersTab), QApplication::translate("MainWindow", "Vertaile s\303\244\303\244t\303\244 kahden kaupungin v\303\244lill\303\244", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
