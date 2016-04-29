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

bool xml_dom::ajoutElem() {
    QDomElement docElem = this->dom.documentElement();

    QDomElement write_elem = this->dom.createElement("data"); // On crée un QDomElement
    write_elem.setAttribute("id", 1); // L'attribut id vaudra 2.
    write_elem.setAttribute("type", "Maison"); // L'attribut value
    write_elem.setAttribute("prix", "10"); // L'attribut value

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

   return true;
}

bool xml_dom::listeElem() {
    QDomElement dom_element = this->dom.documentElement();
    QDomNode noeud = dom_element.firstChild();
    while(!noeud.isNull())
    {
        QDomElement e = noeud.toElement();
        if(!dom_element.isNull())
            QMessageBox::information(this, "Information", "id = " + e.attribute("id") + ", tpye = " +
                                     e.attribute("type") + ", prix = " + e.attribute("prix"));
        noeud = noeud.nextSibling();
    }
    return true;
}
