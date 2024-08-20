#ifndef FRM_ETUDIANT_H
#define FRM_ETUDIANT_H
#include <qstring.h>
#include <QMainWindow>
#include <qmessagebox.h>

namespace Ui {
class frm_etudiant;
}

class frm_etudiant : public QMainWindow
{
    Q_OBJECT

public:
    explicit frm_etudiant(QWidget *parent = 0);
    ~frm_etudiant();

    void afficheetudiantloc();

    void reinitialisationloc();

private slots:
    void on_btnmodifierclient_clicked();

    void on_btnajouterclient_clicked();

    void on_btnsupprimeretudiant_clicked();

    void on_txtrechercheretudiant_textChanged(const QString &arg1);

    void on_btnswitchetudiant_clicked();

    void on_btnswitchclasse_clicked();

    void on_btnswitchmatiere_clicked();

    void on_btnswitchnote_clicked();

private:
    Ui::frm_etudiant *ui;
};

#endif // FRM_ETUDIANT_H
