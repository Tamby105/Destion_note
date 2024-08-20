#ifndef FRM_MATIERE_H
#define FRM_MATIERE_H
#include <QMainWindow>
#include <qmessagebox.h>

#include <QWidget>

namespace Ui {
class frm_matiere;
}

class frm_matiere : public QWidget
{
    Q_OBJECT

public:
    explicit frm_matiere(QWidget *parent = 0);
    ~frm_matiere();

    void affichematiereloc();

    void reinitialisationloc();


private slots:
    void on_btnajoutmatiere_clicked();

    void on_btnmodifmatiere_clicked();

    void on_btnsupprmatiere_clicked();

    void on_txtrecherchematiere_textChanged(const QString &arg1);

    void on_btnswitchetudiant_clicked();

    void on_btnswitchclasse_clicked();

    void on_btnswitchmatiere_clicked();

    void on_btnswitchnote_clicked();

private:
    Ui::frm_matiere *ui;
};

#endif // FRM_MATIERE_H
