#ifndef FRM_NOTE_H
#define FRM_NOTE_H
#include <QMainWindow>
#include <qmessagebox.h>

#include <QWidget>

namespace Ui {
class frm_note;
}

class frm_note : public QWidget
{
    Q_OBJECT

public:
    explicit frm_note(QWidget *parent = 0);
    ~frm_note();

    void affichenotetloc();
    void initcomboBox();
    void initcomboBox2();
    void affichemoyenneloc();
    void reinitialisationloc();


private slots:
    void on_btnswitchetudiant_clicked();

    void on_btnswitchclasse_clicked();

    void on_btnswitchmatiere_clicked();

    void on_btnswitchnote_clicked();



    void on_btnajouternote_clicked();

    void on_btnmodifiernote_clicked();

    void on_btnsupprimernote_clicked();

    void on_btnbulletin_clicked();

    void on_txtrecherchenote_textChanged(const QString &arg1);

private:
    Ui::frm_note *ui;
};

#endif // FRM_NOTE_H
