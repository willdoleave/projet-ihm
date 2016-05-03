#include "recherchedialog.h"
#include "ui_recherchedialog.h"
#include "mainwindow.h"
#include <QMessageBox>

rechercheDialog::rechercheDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rechercheDialog)
{
    ui->setupUi(this);
    ui->radioDateAvant->setChecked(true);
    ui->prixMax->setValue(99999999);
    ui->superficieMax->setValue(99999999);
    ui->piecesMax->setValue(99999999);
}

rechercheDialog::~rechercheDialog()
{
    delete ui;
}

void rechercheDialog::on_pushButton_2_clicked()
{
    close();
}

void rechercheDialog::on_annuler_clicked()
{
    close();
}

void rechercheDialog::on_rechercher_clicked()
{
    /*MainWindow *mw = (MainWindow*)parentWidget();
    mw->list_annonces;*/

    QList<Annonce> *listeAnnonces = ((MainWindow*)parentWidget())->list_annonces;
    QList<Annonce> listeRecherche;
    listeRecherche = rechercheAnnonce(*listeAnnonces);
    ((MainWindow*)parentWidget())->remplirListeWidget(&listeRecherche);
    close();
}


//fonction rechercheAnnonce en fonction des paramètres donnée et qui retourne une liste des annonces trouvés
QList<Annonce> rechercheDialog::rechercheAnnonce(QList<Annonce> listeAnnonces) {
    QList<Annonce> listeRecherche;
    QList<QString> listeType;
    QDate date = ui->dateAnnonce->date();
    bool dateAvant = false;

    int prixMin = ui->prixMin->value();
    int prixMax = ui->prixMax->value();
    int superficieMin = ui->superficieMin->value();
    int superficieMax = ui->superficieMax->value();
    int pieceMin = ui->piecesMin->value();
    int pieceMax = ui->piecesMax->value();
    int codePostal = ui->codePostal->value();

    //enregistrer tous les types de bien dans une liste
    if(ui->chkAppt->checkState() == 2) {
        listeType.append((ui->chkAppt->text()));
    }
    if(ui->chkAutre->checkState() == 2) {
        listeType.append((ui->chkAutre->text()));
    }
    if(ui->chkBureau->checkState() == 2) {
        listeType.append((ui->chkBureau->text()));
    }
    if(ui->chkChateau->checkState() == 2) {
        listeType.append((ui->chkChateau->text()));
    }
    if(ui->chkFerme->checkState() == 2) {
        listeType.append((ui->chkFerme->text()));
    }
    if(ui->chkMaison->checkState() == 2) {
        listeType.append((ui->chkMaison->text()));
    }
    if(ui->chkTerrain->checkState() == 2) {
        listeType.append((ui->chkTerrain->text()));
    }
    if(ui->ckCommerce->checkState() == 2) {
        listeType.append((ui->ckCommerce->text()));
    }

    //il suffit de verifier si le bouton radio avant est checker ou non
    //car ici on a une relation reciproque
    //avant is check => après isn't check
    //avant isn't check => après is check
    if (ui->radioDateAvant->isChecked()) {
        dateAvant = true;
    }

    //pourcourir la liste des annonces et ajouter tous les annonces correspondent aux critères dans
    //la listeRecherche
    for (int i = 0; i < listeAnnonces.length(); i++) {
        Annonce a = listeAnnonces.value(i);
        if (a.prix.toInt(0,10) >= prixMin && a.prix.toInt(0,10) <= prixMax &&
                a.superficie.toInt(0,10) >= superficieMin && a.superficie.toInt(0,10) <= superficieMax &&
                a.nbPiece.toInt(0,10) >= pieceMin && a.nbPiece.toInt(0,10) <= pieceMax) {
            if (codePostal == 0) {
                listeRecherche.append(a);
            }else {
                if (a.codePostal.toInt(0,10) == codePostal) {
                    listeRecherche.append(a);
                }
            }

        }
    }

    //parcour de la listeRecherche pour extraire les annonces qui ne correspondent pas aux types de bien
    //enregistrer dans la listeType
    for (int i = 0; i < listeRecherche.length(); i++) {
        Annonce a = listeRecherche.value(i);
        bool vrai = false;
        for (int j = 0; j < listeType.length(); j++) {
            if (a.type == listeType.value(j)) {
                vrai = true;
            }
        }
        if (!vrai) {
            listeRecherche.removeAt(i);
            i--;
        }
    }

    //parcour une 2ème fois de la listeRecherche pour extraire les annonces qui ne correspondent pas à la date donnée
    for (int i = 0; i < listeRecherche.length(); i++) {
        Annonce a = listeRecherche.value(i);
        if (dateAvant) {
            if (a.dateCreation > date) {
                listeRecherche.removeAt(i);
                i--;
            }
        } else {
            if (a.dateCreation < date) {
                listeRecherche.removeAt(i);
                i--;
            }
        }
    }

    //afficher le resultat
    if (listeRecherche.length() == 0)
        QMessageBox::information(this, "Information", "Aucun résultat");
   /* } else {
        for (int i = 0; i < listeRecherche.length(); i++) {
            Annonce a = listeRecherche.value(i);
            QMessageBox::information(this, "Information", "id = " + a.id + ", prix = " + a.prix);
        }
    }
    */
    return listeRecherche;
}
