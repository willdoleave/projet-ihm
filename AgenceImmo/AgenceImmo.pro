#-------------------------------------------------
#
# Project created by QtCreator 2016-04-22T21:22:24
#
#-------------------------------------------------

QT       += core gui
QT       += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AgenceImmo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    recherchedialog.cpp \
    ajoutdialog.cpp \
    xml_dom.cpp \
    detaildialog.cpp \
    modifierdialog.cpp \
    trier.cpp \
    stats.cpp

HEADERS  += mainwindow.h \
    recherchedialog.h \
    ajoutdialog.h \
    xml_dom.h \
    detaildialog.h \
    modifierdialog.h \
    trier.h \
    stats.h

FORMS    += mainwindow.ui \
    recherchedialog.ui \
    ajoutdialog.ui \
    detaildialog.ui \
    modifierdialog.ui \
    stats.ui

RESOURCES += \
    resources.qrc

OTHER_FILES += \
    data.xml
