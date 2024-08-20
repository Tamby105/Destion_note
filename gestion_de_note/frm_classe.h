#ifndef FRM_CLASSE_H
#define FRM_CLASSE_H
#include <qstring.h>
#include <QMainWindow>
#include <qmessagebox.h>
#include <QWidget>

namespace Ui {
class frm_classe;
}

class frm_classe : public QWidget
{
    Q_OBJECT

public:
    explicit frm_classe(QWidget *parent = 0);
    ~frm_classe();

    void afficheclassetloc();

    void reinitialisationloc();

private slots:
    void on_btnajouterclasse_clicked();

    void on_btnmodifierclasse_clicked();

    void on_btnsupprimerclasse_clicked();

    void on_txtrechercherclasse_textChanged(const QString &arg1);

    void on_btnswitchetudiant_clicked();

    void on_btnswitchclasse_clicked();

    void on_btnswitchmatiere_clicked();

    void on_btnswitchnote_clicked();

private:
    Ui::frm_classe *ui;
};

#endif // FRM_CLASSE_H
