#ifndef XML_DOM_H
#define XML_DOM_H

#include <QWidget>
#include "QtXml"


class xml_dom : public QWidget
{
public:
    xml_dom();
    bool ajoutElem( std::string etat, std::string type, std::string prix,
                    std::string titre, std::string description, std::string photo1,
                    std::string photo2,std::string photo3, std::string photo4,
                    std::string adresse, std::string ville, std::string codePostal,
                    std::string nom, std::string prenom, std::string telephone,
                    std::string mail, std::string superficie, std::string nbPiece);
    bool listeElem();

    QDomDocument dom;
    QFile doc_xml;
};

#endif // XML_DOM_H
