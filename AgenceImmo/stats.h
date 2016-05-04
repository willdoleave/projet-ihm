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

private:
    Ui::Stats *ui;
};

#endif // STATS_H
