#ifndef TRIER_H
#define TRIER_H

#include <QWidget>
#include "xml_dom.h"

enum Tri {PRIX, SUPERFICIE, NBPIECE, TYPE};

class trier
{
public:
    trier();
    QList<Annonce> triFusionPrix(QList<Annonce> listeAnnonceTri, int param);
    QList<Annonce> fusionPrix(QList<Annonce> liste1, QList<Annonce> liste2, int param);
};

#endif // TRIER_H
