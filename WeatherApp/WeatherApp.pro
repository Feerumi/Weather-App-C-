#-------------------------------------------------
#
# Project created by QtCreator 2016-04-17T14:32:52
#
#-------------------------------------------------

QT       += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WeatherApp
TEMPLATE = app


CONFIG += console
SOURCES += main.cpp\
        mainwindow.cpp \
    urldatafetcher.cpp

HEADERS  += mainwindow.h \
    urldatafetcher.h

FORMS    += mainwindow.ui
