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
    brightness.cpp \
    tooldockwidget.cpp \
    saturation.cpp \
    hue.cpp \
    contrast.cpp

HEADERS  += mainwindow.h \
    imagemodel.h \
    imagepreview.h \
    filter.h \
    brightness.h \
    tooldockwidget.h \
    saturation.h \
    hue.h \
    contrast.h

FORMS    += mainwindow.ui\
    tooldockwidget.ui
