#include "xml_dom.h"
#include <QMessageBox>
#include "mainwindow.h"

Annonce::Annonce() {}


xml_dom::xml_dom() : QWidget()
{
    this->open();
}

bool xml_dom::open()
{
    dom = QDomDocument("data");
    doc_xml.setFileName("../AgenceImmo/data.xml");

    if(!doc_xml.open(QIODevice::ReadOnly))
    {
        QMessageBox::critical(this,"Erreur","Impossible d'ouvrir le ficher XML. Création d'un autre");
        doc_xml.close();
        doc_xml.open(QIODevice::ReadWrite);
        doc_xml.close();
        //return;
    }

    QString errorStr;
    int errorLine;
    int errorColumn;
    if(!dom.setContent(&doc_xml, false, &errorStr, &errorLine, &errorColumn))
    {
        QMessageBox::critical(this,"Erreur","Impossible de recuperer le contenu xml");
        doc_xml.close();
        return false;
    }
    doc_xml.close();
    return true;
}

bool xml_dom::ajoutElem(std::string id,std::string etat, std::string type, std::string prix,
                        std::string titre, std::string description, std::string photo1,
                        std::string photo2,std::string photo3, std::string photo4,
                        std::string adresse, std::string ville, std::string codePostal,
                        std::string nom, std::string prenom, std::string telephone,
                        std::string mail, std::string superficie, std::string nbPiece,
                        std::string contractuelle)
{

    if (titre.empty() || nom.empty() || prenom.empty() || adresse.empty() || ville.empty() || mail.empty() || nbPiece.empty() || prix.empty() || telephone.empty())
        return false;

    QDomElement docElem = this->dom.documentElement();

    QDomElement write_elem = this->dom.createElement("data"); // On crée un QDomElement
    write_elem.setAttribute("id",id.c_str());
    write_elem.setAttribute("etat",etat.c_str());
    write_elem.setAttribute("type", type.c_str()); // L'attribut value
    write_elem.setAttribute("prix", prix.c_str()); // L'attribut value
    write_elem.setAttribute("titre",titre.c_str());
    write_elem.setAttribute("description",description.c_str());
    write_elem.setAttribute("photo1",photo1.c_str());
    write_elem.setAttribute("photo2",photo2.c_str());
    write_elem.setAttribute("photo3",photo3.c_str());
    write_elem.setAttribute("photo4",photo4.c_str());
    write_elem.setAttribute("adresse",adresse.c_str());
    write_elem.setAttribute("ville",ville.c_str());
    write_elem.setAttribute("codePostal",codePostal.c_str());
    write_elem.setAttribute("nom",nom.c_str());
    write_elem.setAttribute("prenom",prenom.c_str());
    write_elem.setAttribute("telephone",telephone.c_str());
    write_elem.setAttribute("mail",mail.c_str());
    write_elem.setAttribute("superficie",superficie.c_str());
    write_elem.setAttribute("nbPiece",nbPiece.c_str());
    write_elem.setAttribute("dateCreation",QDate::currentDate().toString("dd/MM/yyyy"));
    write_elem.setAttribute("photoContractuelle",contractuelle.c_str());
    docElem.appendChild(write_elem);// On associe write_elem à domElem.
    QString write_doc = this->dom.toString();

    if(!this->doc_xml.open(QIODevice::WriteOnly))
    {
        this->doc_xml.close();
        QMessageBox::critical(this,"Erreur","Impossible d'écrire dans le document XML");
        return false;
    }

    QTextStream stream(&this->doc_xml);
    stream << write_doc; // On utilise l'opérateur << pour écrire write_doc dans le document XML.

    this->close();
    //QMessageBox::information(this,"Parfait","L'annonce a été insérée avec succès !");

   return true;
}

bool xml_dom::listeElem(QList<Annonce> *list_annonces)
{
    open();
    QDomElement dom_element = this->dom.documentElement();
    QDomNode noeud = dom_element.firstChild();
    Annonce a;
    while(!noeud.isNull())
    {
        QDomElement e = noeud.toElement();
        if(!dom_element.isNull()) {
            a.id = e.attribute("id");
            a.etat = e.attribute("etat");
            a.type = e.attribute("type");
            a.prix = e.attribute("prix");
            a.titre = e.attribute("titre");
            a.description = e.attribute("description");
            a.photo1 = e.attribute("photo1");
            a.photo2 = e.attribute("photo2");
            a.photo3 = e.attribute("photo3");
            a.photo4 = e.attribute("photo4");
            a.adresse = e.attribute("adresse");
            a.ville = e.attribute("ville");
            a.codePostal = e.attribute("codePostal");
            a.nom = e.attribute("nom");
            a.prenom = e.attribute("prenom");
            a.telephone = e.attribute("telephone");
            a.mail = e.attribute("mail");
            a.superficie = e.attribute("superficie");
            a.nbPiece = e.attribute("nbPiece");
            a.photoContractuelle = e.attribute("photoContractuelle");
            a.dateCreation = e.attribute("dateCreation");
            list_annonces->append(a);
        }
        noeud = noeud.nextSibling();
    }
    return true;
}
