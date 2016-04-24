#-------------------------------------------------
#
# Project created by QtCreator 2016-04-22T21:22:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AgenceImmo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    recherchedialog.cpp \
    ajoutdialog.cpp

HEADERS  += mainwindow.h \
    recherchedialog.h \
    ajoutdialog.h

FORMS    += mainwindow.ui \
    recherchedialog.ui \
    ajoutdialog.ui

RESOURCES += \
    resources.qrc
