#ifndef XML_DOM_H
#define XML_DOM_H

#include <QWidget>
#include "QtXml"

class Annonce
{
public:
    Annonce();
    QString id;
    QString etat;
    QString type;
    QString prix;
    QString titre;
    QString description;
    QString photo1;
    QString photo2;
    QString photo3;
    QString photo4;
    QString adresse;
    QString ville;
    QString codePostal;
    QString nom;
    QString prenom;
    QString telephone;
    QString mail;
    QString superficie;
    QString nbPiece;
    QString photoContractuelle;
    QDate dateCreation;
    // Nouvelles variables
    QDate dateModificationEtat;
private:

};


class xml_dom : public QWidget
{
public:
    //QList<Annonce> *list_annonces;
    xml_dom();
    /*
    bool ajoutElem( std::string id, std::string etat, std::string type, std::string prix,
                    std::string titre, std::string description, std::string photo1,
                    std::string photo2,std::string photo3, std::string photo4,
                    std::string adresse, std::string ville, std::string codePostal,
                    std::string nom, std::string prenom, std::string telephone,
                    std::string mail, std::string superficie, std::string nbPiece,
                    std::string contractuelle);
    */
    bool listeElem(QList<Annonce> *list_annonces);
    bool open();
    bool save(QList<Annonce> *list_annonces);


    QDomDocument dom;
    QFile doc_xml;
    QString fileName;
};

#endif // XML_DOM_H
