#ifndef STATS_H
#define STATS_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class Stats;
}

class Stats : public QDialog
{
    Q_OBJECT

public:
    explicit Stats(QWidget *parent = 0);
    ~Stats();

    void calcul();
    void dessinerGraphique();

    int en_vente, vendus, en_location, loue;

private slots:
    void on_pushButton_clicked();

    void on_chkMaison_clicked();

    void on_chkAppt_clicked();

    void on_chkChateau_clicked();

    void on_chkCommerce_clicked();

    void on_chkBureau_clicked();

    void on_chkTerrain_clicked();

    void on_chkFerme_clicked();

    void on_chkAutre_clicked();

    void on_datefin_dateChanged(const QDate &date);

    void on_datedebut_dateChanged(const QDate &date);

    void on_chkTous_clicked();

private:
    Ui::Stats *ui;
};

#endif // STATS_H
