#include "frm_note.h"
#include "ui_frm_note.h"
#include "frm_etudiant.h"
#include "frm_matiere.h"
#include "frm_classe.h"
#include "model_etudiant.h"
#include "model_note.h"
#include "model_matiere.h"
#include <QLineEdit>


frm_note::frm_note(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frm_note)
{
    ui->setupUi(this);
   initcomboBox();
   initcomboBox2();
   affichenotetloc();

}

frm_note::~frm_note()
{
    delete ui;
}
void frm_note::affichenotetloc()
{

    model_note noteaffiche;
    int i=0;
    ui->tbllistenote->setRowCount(0);
    ui->tbllistenote->setRowCount(100);
    QSqlQuery note =noteaffiche.affichenote();
    while(note.next())
    {
        ui->tbllistenote->setItem(i,0,new QTableWidgetItem(note.value("numero_note").toString()));
        ui->tbllistenote->setItem(i,1,new QTableWidgetItem(note.value("numero_inscription").toString()));
        ui->tbllistenote->setItem(i,2,new QTableWidgetItem(note.value("code_matiere").toString()));
        ui->tbllistenote->setItem(i,3,new QTableWidgetItem(note.value("note").toString()));
        i=i+1;
    }
}

void frm_note::reinitialisationloc()
{
    //ui->txtnumeronote->setText("");
    ui->cbxnumeroetudiantnote->clear();
    ui->cbxcodematierenote->clear();
    ui->txtnote->setText("");
    initcomboBox();
    initcomboBox2();
}

void frm_note::on_btnajouternote_clicked()
{
    QString numero_inscription = ui->cbxnumeroetudiantnote->currentText();
    QString code_matiere = ui->cbxcodematierenote->currentText();
    float note = ui->txtnote->text().toFloat();

    model_note creation(numero_inscription, code_matiere, note);
    creation.ajoutnote();

    reinitialisationloc();
    affichenotetloc();
}
void frm_note::on_btnmodifiernote_clicked()
{
    int nb = ui->tbllistenote->currentRow();
    if(ui->btnmodifiernote->text()=="MODIFIER")
    {
        ui->cbxnumeroetudiantnote->addItem(ui->tbllistenote->item(nb, 1)->text());
        ui->cbxcodematierenote->addItem(ui->tbllistenote->item(nb, 2)->text());
        ui->txtnote->setText(ui->tbllistenote->item(nb, 3)->text());

        ui->btnmodifiernote->setText("ENREGISTRER");
    }
    else if(ui->btnmodifiernote->text()=="ENREGISTRER")
    {
        int numero_note = ui->tbllistenote->item(nb, 0)->text().toInt();
        QString numero_inscription = ui->cbxnumeroetudiantnote->currentText();
        QString code_matiere = ui->cbxcodematierenote->currentText();
        float note = ui->txtnote->text().toFloat();

        model_note notemodif(numero_note, numero_inscription, code_matiere, note);
        notemodif.modifiernote();

        ui->btnmodifiernote->setText("MODIFIER");

        reinitialisationloc();
        affichenotetloc();
    }
}

void frm_note::on_btnsupprimernote_clicked()
{
    int nb = ui->tbllistenote->currentRow();
    int numero_note = ui->tbllistenote->item(nb, 0)->text().toInt();
    QMessageBox::StandardButton confirm = QMessageBox::question(this, "CONFIRMATION", "Voulez-vous vraiment supprimer?", QMessageBox::Yes | QMessageBox::No);
    if (confirm ==  QMessageBox::Yes)
    {
        model_note notesuppr(numero_note);
        notesuppr.supprimernote();
        reinitialisationloc();
        affichenotetloc();
    }
    reinitialisationloc();
}

void frm_note::on_btnswitchetudiant_clicked()
{
    hide();
    frm_etudiant *a = new frm_etudiant();
    a->show();
}

void frm_note::on_btnswitchclasse_clicked()
{
    hide();
    frm_classe *b = new frm_classe;
    b->show();
}

void frm_note::on_btnswitchmatiere_clicked()
{
    hide();
    frm_matiere *c = new frm_matiere ;
    c->show();
}

void frm_note::on_btnswitchnote_clicked()
{
    hide();
    frm_note *d = new frm_note ;
    d->show();
}
void frm_note::initcomboBox()
{
    ui->cbxnumeroetudiantnote->setEditable(this);
    model_etudiant kil;
    QSqlQuery datacli = kil.afficheetudiant();
    ui->cbxnumeroetudiantnote->clear();

    QStringList validevaleur;

    while (datacli.next())
    {
        QString numetudiant= datacli.value("numero_inscription").toString();
        ui->cbxnumeroetudiantnote->addItem(numetudiant);
        validevaleur.append(numetudiant);
    }
    connect(ui->cbxnumeroetudiantnote->lineEdit(), &QLineEdit::textChanged, this, [=] (const QString& numetudiant)
    {
        int compteur = 0;
        for (int i = 0; i < numetudiant.length(); ++i)
        {
            if (!numetudiant.at(i).isSpace())
            {
              compteur++;
            }
        }
        if (compteur>=4)
        {
            if (!validevaleur.contains(numetudiant))
            {
                QMessageBox::warning(this, "erreur", "fory ee!");
               // ui->comboBox->clear();
                ui->cbxnumeroetudiantnote->addItem(numetudiant);
            }
        }

    });

}
void frm_note::initcomboBox2()
{
    ui->cbxcodematierenote->setEditable(this);
    model_matiere kil;
    QSqlQuery datacli = kil.affichematiere();
    ui->cbxcodematierenote->clear();

    QStringList validevaleur;

    while (datacli.next())
    {
        QString code_matiere= datacli.value("code_matiere").toString();
        ui->cbxcodematierenote->addItem(code_matiere);
        validevaleur.append(code_matiere);
    }
    connect(ui->cbxcodematierenote->lineEdit(), &QLineEdit::textChanged, this, [=] (const QString& code_matiere)
    {
        int compteur = 0;
        for (int i = 0; i < code_matiere.length(); ++i)
        {
            if (!code_matiere.at(i).isSpace())
            {
              compteur++;
            }
        }
        if (compteur>=4)
        {
            if (!validevaleur.contains(code_matiere))
            {
                QMessageBox::warning(this, "erreur", "fory ee!");
               // ui->comboBox->clear();
                ui->cbxcodematierenote->addItem(code_matiere);
            }
        }
    });
}

void frm_note::affichemoyenneloc()
{
    model_note classeaffiche;
    int i=0;
    ui->tbllistenote->setRowCount(0);
    ui->tbllistenote->setRowCount(20);
    QSqlQuery classe = classeaffiche.moyenne();
    while(classe.next())
    {
      //  ui->tableWidget2->setItem(i,0,new QTableWidgetItem(classe.value("code_classe").toString()));
        ui->tbllistenote->setItem(i,0,new QTableWidgetItem(classe.value("moyenne").toString()));
        i=i+1;
    }
}

void frm_note::on_btnbulletin_clicked()
{

}

void frm_note::on_txtrecherchenote_textChanged(const QString &arg1)
{
    QString ta = ui->txtrecherchenote->text();
    model_note noterecherche(ta, ta);
    int i=0;
    ui->tbllistenote->setRowCount(0);
    ui->tbllistenote->setRowCount(100);
    QSqlQuery notes = noterecherche.recherchernote();
    while(notes.next())
    {
        ui->tbllistenote->setItem(i,0,new QTableWidgetItem(notes.value("numero_note").toString()));
        ui->tbllistenote->setItem(i,1,new QTableWidgetItem(notes.value("numero_inscription").toString()));
        ui->tbllistenote->setItem(i,2,new QTableWidgetItem(notes.value("code_matiere").toString()));
        ui->tbllistenote->setItem(i,3,new QTableWidgetItem(notes.value("note").toString()));
        i=i+1;
    }
}
