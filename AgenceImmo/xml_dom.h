#ifndef XML_DOM_H
#define XML_DOM_H

#include <QWidget>
#include "QtXml"


class xml_dom : public QWidget
{
public:
    xml_dom();
    bool ajoutElem();
    bool listeElem();

    QDomDocument dom;
    QFile doc_xml;
};

#endif // XML_DOM_H
