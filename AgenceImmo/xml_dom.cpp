#include "xml_dom.h"
#include <QMessageBox>

xml_dom::xml_dom() : QWidget()
{
    dom = QDomDocument("data");
    doc_xml.setFileName("../data.xml");

    if(!doc_xml.open(QIODevice::ReadOnly))
    {
        QMessageBox::critical(this,"Erreur","Impossible d'ouvrir le ficher XML");
        doc_xml.close();
        return;
    }

    QString errorStr;
    int errorLine;
    int errorColumn;
    if(!dom.setContent(&doc_xml, false, &errorStr, &errorLine, &errorColumn))
    {
        QMessageBox::critical(this,"Erreur","Impossible de recuperer le contenu xml");
        doc_xml.close();
        return;
    }
    doc_xml.close();

}

bool xml_dom::ajoutElem( std::string etat, std::string type, std::string prix,
                        std::string titre, std::string description, std::string photo1,
                        std::string photo2,std::string photo3, std::string photo4,
                        std::string adresse, std::string ville, std::string codePostal,
                        std::string nom, std::string prenom, std::string telephone,
                        std::string mail, std::string superficie, std::string nbPiece)
{

    if (titre.empty() || nom.empty() || prenom.empty() || adresse.empty() || ville.empty() || mail.empty() || nbPiece.empty() || prix.empty() || telephone.empty())
        return false;

    QDomElement docElem = this->dom.documentElement();

    QDomElement write_elem = this->dom.createElement("data"); // On crée un QDomElement
    write_elem.setAttribute("id", 1); // L'attribut id vaudra 2.
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
    QMessageBox::information(this,"Parfait","L'annonce a été insérée avec succès !");

   return true;
}

bool xml_dom::listeElem()
{
    QDomElement dom_element = this->dom.documentElement();
    QDomNode noeud = dom_element.firstChild();
    while(!noeud.isNull())
    {
        QDomElement e = noeud.toElement();
        if(!dom_element.isNull())
            QMessageBox::information(this, "Information", "id = " + e.attribute("id") + ", type = " +
                                     e.attribute("type") + ", prix = " + e.attribute("prix"));
        noeud = noeud.nextSibling();
    }
    return true;
}
