#-------------------------------------------------
#
# Project created by QtCreator 2015-03-24T13:07:11
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sqlInQt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    databasemanager.cpp \
    leds.cpp

HEADERS  += mainwindow.h \
    databasemanager.h \
    leds.h

FORMS    += mainwindow.ui \
    leds.ui
