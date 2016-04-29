#include "mainwindow.h"
#include <QApplication>
#include <xml_dom.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*MainWindow w;
    w.setWindowTitle("Agence Immobilière");
    w.show();*/

    xml_dom *Dom = new xml_dom();
    Dom->listeElem();
    Dom->ajoutElem();
    //Dom->show();


    return a.exec();
}
