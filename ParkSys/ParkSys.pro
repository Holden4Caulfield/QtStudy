#-------------------------------------------------
#
# Project created by QtCreator 2017-12-22T16:09:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ParkSys
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp \
    information.cpp \
    searchtime.cpp \
    idsearch.cpp \
    vehiclemanage.cpp \
    viplogin.cpp \
    cartodeque.cpp

HEADERS  += mainwindow.h \
    logindialog.h \
    information.h \
    searchtime.h \
    idsearch.h \
    vehiclemanage.h \
    viplogin.h \
    cartodeque.h

FORMS    += mainwindow.ui \
    logindialog.ui \
    information.ui \
    searchtime.ui \
    idsearch.ui \
    vehiclemanage.ui \
    viplogin.ui \
    cartodeque.ui
