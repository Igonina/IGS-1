#-------------------------------------------------
#
# Project created by QtCreator 2014-03-01T17:59:38
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IGS_1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    GLWidget.cpp

HEADERS  += mainwindow.h \
    GLWidget.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
