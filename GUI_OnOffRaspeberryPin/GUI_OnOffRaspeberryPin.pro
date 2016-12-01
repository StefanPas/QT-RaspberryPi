#-------------------------------------------------
#
# Project created by QtCreator 2016-11-30T08:29:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GUI_OnOffRaspeberryPin
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH +=  /usr/local/include

LIBS     += -L/usr/local/lib -lwiringPi
