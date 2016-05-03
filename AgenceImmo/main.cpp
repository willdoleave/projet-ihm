#include "mainwindow.h"
#include <QApplication>
#include <xml_dom.h>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Agence Immobilière");
    w.show();

    xml_dom *Dom = new xml_dom();
    Dom->close();
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    return a.exec();
}
