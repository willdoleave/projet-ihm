#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <recherchedialog.h>
#include <ajoutdialog.h>
#include "xml_dom.h"
#include <QListWidget>

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
    xml_dom *Dom;
    QList<Annonce> *list_annonces;
    QListWidget *list_widget;

private slots:
    void on_actionImporter_triggered();

    void on_action_propos_triggered();

    void on_actionRecherche_triggered();

    void on_actionAjouter_une_annonce_triggered();

    void on_actionQuitter_triggered();

    void on_actionExaminer_annonce_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
