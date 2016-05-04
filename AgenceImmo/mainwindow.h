#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <recherchedialog.h>
#include <ajoutdialog.h>
#include "xml_dom.h"
#include <QListWidget>
#include <QCloseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void remplirListeWidget();
    void remplirListeWidget(QList<Annonce> *listeAnnonces);
    xml_dom *Dom;
    QList<Annonce> *list_annonces;

public slots:
    void on_actionModifier_triggered();

private slots:
    void on_actionImporter_triggered();

    void on_action_propos_triggered();

    void on_actionRecherche_triggered();

    void on_actionAjouter_une_annonce_triggered();

    void on_actionQuitter_triggered();

    void on_actionExaminer_annonce_triggered();

    void on_actionSupprimerAnnonce_triggered();

    void on_actionToutAfficher_triggered();

    void closeEvent(QCloseEvent *ev);




    void on_pushButton_clicked();

    void on_actionStatistiques_triggered();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
