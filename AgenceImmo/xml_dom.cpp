#include "xml_dom.h"
#include <QMessageBox>
#include "mainwindow.h"

Annonce::Annonce() {}


xml_dom::xml_dom() : QWidget()
{
    fileName = "../AgenceImmo/data.xml";
    this->open();
}

bool xml_dom::open()
{
    dom = QDomDocument("data");
    doc_xml.setFileName(fileName);

    if(!doc_xml.open(QIODevice::ReadOnly))
    {
        QMessageBox::critical(this,"Erreur","Impossible d'ouvrir le ficher XML. Création d'un nouveau");
        doc_xml.close();
        doc_xml.open(QIODevice::ReadWrite);
        doc_xml.close();
        QFile file(fileName);
        if (file.open(QIODevice::ReadWrite)) {
            QTextStream stream(&file);
            stream << "<?xml version='1.0' encoding=\"UTF-8\"?>" << endl;
            stream << "<data>" << endl;
            stream << "</data>" << endl;

        }
        doc_xml.open(QIODevice::ReadOnly);
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
/*
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
    QString dt = QDate::currentDate().toString("dd/MM/yyyy");
    write_elem.setAttribute("dateCreation",dt.toStdString().c_str());
    write_elem.setAttribute("photoContractuelle",contractuelle.c_str());
    docElem.appendChild(write_elem);// On associe write_elem à domElem.
    QString write_doc = this->dom.toString();

    if(!this->doc_xml.open(QIODevice::WriteOnly))
    {
        this->doc_xml.close();
        qDebug() << "Impossible d'ajouter un élément";
        //QMessageBox::critical(this,"Erreur","Impossible d'écrire dans le document XML");
        return false;
    }

    QTextStream stream(&this->doc_xml);
    stream << write_doc; // On utilise l'opérateur << pour écrire write_doc dans le document XML.

    this->close();

    qDebug() << "Element ajouté";
   return true;
}
*/

bool xml_dom::listeElem(QList<Annonce> *list_annonces)
{
    open();
    QDomElement dom_element = this->dom.documentElement();
    QDomNode noeud = dom_element.firstChild();

    while(!noeud.isNull())
    {

        QDomElement e = noeud.toElement();
        if(!dom_element.isNull()) {
            Annonce a;

            a.id = e.attribute("id");
            a.etat = e.attribute("etat");
            a.type = e.attribute("type");
            a.prix = e.attribute("prix");
            a.titre = e.attribute("titre");
            a.description = e.attribute("description");

            bool fini = false;
            int i = 0;
            while (!fini) {
                if (e.hasAttribute("photo" + QString::number(i+1))) {
                    a.photos.append(e.attribute("photo" + QString::number(i+1)));
                    i++;
                } else {
                    fini = true;
                }

            }

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
            //a.dateCreation = e.attribute("dateCreation").toStdString().c_str();
            a.dateCreation = QDate::fromString(e.attribute("dateCreation"),"dd/MM/yyyy");
            a.dateModificationEtat = QDate::fromString(e.attribute("dateModificationEtat"),"dd/MM/yyyy");
            list_annonces->append(a);

            a.photos.clear();

        }
        noeud = noeud.nextSibling();
    }
    return true;
}





bool xml_dom::save(QList<Annonce> *list_annonces)
{
    QDomDocument *Dom = new QDomDocument();
    QDomElement root = Dom->createElement("data");
    Dom->appendChild(root);

    for(int i = 0; i < list_annonces->count(); i++)
    {
        Annonce a = list_annonces->at(i);
        QDomElement docElem = Dom->createElement("data");

        docElem.setAttribute("id", a.id);
        docElem.setAttribute("etat",a.etat);
        docElem.setAttribute("type", a.type);
        docElem.setAttribute("prix", a.prix);
        docElem.setAttribute("titre", a.titre);
        docElem.setAttribute("description",a.description);

        for (int i = 0; i < a.photos.length(); i++) {
            docElem.setAttribute("photo" + QString::number(i+1), a.photos.value(i));
        }

        docElem.setAttribute("adresse", a.adresse);
        docElem.setAttribute("ville", a.ville);
        docElem.setAttribute("codePostal",a.codePostal);
        docElem.setAttribute("nom", a.nom);
        docElem.setAttribute("prenom", a.prenom);
        docElem.setAttribute("telephone", a.telephone);
        docElem.setAttribute("mail", a.mail);
        docElem.setAttribute("superficie", a.superficie);
        docElem.setAttribute("nbPiece", a.nbPiece);
        docElem.setAttribute("photoContractuelle", a.photoContractuelle);
        //docElem.setAttribute("dateCreation",a.dateCreation.toStdString().c_str());
        docElem.setAttribute("dateCreation", a.dateCreation.toString("dd/MM/yyyy"));
        docElem.setAttribute("dateModificationEtat", a.dateModificationEtat.toString("dd/MM/yyyy"));
        root.appendChild(docElem);
    }

    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Open the file for writing failed.";
        return false;
    }
    else
    {
        QTextStream stream(&file);
        stream << Dom->toString();
        file.close();
        return true;
    }

    return false;
}
