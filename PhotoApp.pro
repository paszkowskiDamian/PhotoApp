#-------------------------------------------------
#
# Project created by QtCreator 2017-01-31T13:27:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PhotoApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    imagemodel.cpp \
    imagepreview.cpp \
    filter.cpp \
    brightness.cpp

HEADERS  += mainwindow.h \
    imagemodel.h \
    imagepreview.h \
    filter.h \
    brightness.h

FORMS    += mainwindow.ui
