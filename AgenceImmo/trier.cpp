#include "trier.h"
#include <QMessageBox>

trier::trier()
{
}

QList<Annonce> trier::triFusionPrix(QList<Annonce> listeAnnoncesTri, int param) {
    if (listeAnnoncesTri.length() <= 1) {
        return listeAnnoncesTri;
    } else {
        QList<Annonce> liste1;
        QList<Annonce> liste2;
        int m = listeAnnoncesTri.length()/2;
        for (int i = 0; i < listeAnnoncesTri.length(); i++) {
            if (i < m) {
                liste1.append(listeAnnoncesTri.value(i));
            } else {
                liste2.append(listeAnnoncesTri.value(i));
            }
        }
        return fusionPrix(triFusionPrix(liste1, param), triFusionPrix(liste2, param), param);
    }
}

QList<Annonce> trier::fusionPrix(QList<Annonce> liste1,QList<Annonce> liste2, int param ) {
    if (liste1.length() == 0) {
        return liste2;
    }
    if (liste2.length() == 0) {
        return liste1;
    }
    int i=0, j=0;
    QList<Annonce> listeTri;
    bool fini = false;
    while(!fini) {
        if (i == liste1.length()) {
            fini = true;
            for (int k = j; k < liste2.length(); k++) {
                listeTri.append(liste2.value(k));
            }
        } else if (j == liste2.length()) {
            fini = true;
            for (int k = i; k < liste1.length(); k++) {
                listeTri.append(liste1.value(k));
            }
        } else {
            switch (param) {
                case PRIX :
                    if (liste1.value(i).prix < liste2.value(j).prix) {
                        listeTri.append(liste1.value(i));
                        i++;
                    } else {
                        listeTri.append(liste2.value(j));
                        j++;
                    }
                    break;

                case SUPERFICIE :
                    if (liste1.value(i).superficie < liste2.value(j).superficie) {
                        listeTri.append(liste1.value(i));
                        i++;
                    } else {
                        listeTri.append(liste2.value(j));
                        j++;
                    }
                    break;

                case NBPIECE :
                    if (liste1.value(i).nbPiece < liste2.value(j).nbPiece) {
                        listeTri.append(liste1.value(i));
                        i++;
                    } else {
                        listeTri.append(liste2.value(j));
                        j++;
                    }
                    break;

                case TYPE :
                    if (liste1.value(i).type < liste2.value(j).type) {
                        listeTri.append(liste1.value(i));
                        i++;
                    } else {
                        listeTri.append(liste2.value(j));
                        j++;
                    }
                    break;
            }
        }
    }

    return listeTri;
}


