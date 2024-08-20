#include "frm_classe.h"
#include "ui_frm_classe.h"
#include "model_classe.h"
#include "frm_etudiant.h"
#include "frm_matiere.h"
#include "frm_note.h"


frm_classe::frm_classe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frm_classe)
{
    ui->setupUi(this);
    afficheclassetloc();
}

frm_classe::~frm_classe()
{
    delete ui;
}
void frm_classe::afficheclassetloc()
{
    model_classe classeaffiche;
    int i=0;
    ui->tbllisteclasse->setRowCount(0);
    ui->tbllisteclasse->setRowCount(20);
    QSqlQuery classe = classeaffiche.afficheclasse();
    while(classe.next())
    {
        ui->tbllisteclasse->setItem(i,0,new QTableWidgetItem(classe.value("code_classe").toString()));
        ui->tbllisteclasse->setItem(i,1,new QTableWidgetItem(classe.value("designation_classe").toString()));
        i=i+1;
    }
}

void frm_classe::reinitialisationloc()
{
    ui->txtcodeclasse->setText("");
    ui->txtdesignationclasse->setText("");
}

void frm_classe::on_btnajouterclasse_clicked()
{
    QString code_classe = ui->txtcodeclasse->text();
    QString designaion_classe = ui->txtdesignationclasse->text();

    model_classe creation(code_classe, designaion_classe);
    creation.ajoutclasse();

    reinitialisationloc();
    afficheclassetloc();
}

void frm_classe::on_btnmodifierclasse_clicked()
{
    if(ui->btnmodifierclasse->text()=="MODIFIER")
    {

        int nb = ui->tbllisteclasse->currentRow();
        ui->txtcodeclasse->setText(ui->tbllisteclasse->item(nb, 0)->text());
        ui->txtdesignationclasse->setText(ui->tbllisteclasse->item(nb, 1)->text());

        ui->btnmodifierclasse->setText("ENREGISTRER");
    }
    else if(ui->btnmodifierclasse->text()=="ENREGISTRER")
    {
        QString code_classe = ui->txtcodeclasse->text();
        QString designation_classe = ui->txtdesignationclasse->text();

        model_classe classetmodif(code_classe, designation_classe);
        classetmodif.modifierclasse();

        ui->btnmodifierclasse->setText("MODIFIER");

        reinitialisationloc();
        afficheclassetloc();
    }
}

void frm_classe::on_btnsupprimerclasse_clicked()
{
    int nb = ui->tbllisteclasse->currentRow();
    QString code_classe = ui->tbllisteclasse->item(nb, 0)->text();
    QMessageBox::StandardButton confirm = QMessageBox::question(this, "CONFIRMATION", "Voulez-vous vraiment supprimer?", QMessageBox::Yes | QMessageBox::No);
    if (confirm ==  QMessageBox::Yes)
    {
        model_classe classesuppr(code_classe);
        classesuppr.supprimerclasse();
        reinitialisationloc();
        afficheclassetloc();
    }
}

void frm_classe::on_txtrechercherclasse_textChanged(const QString &arg1)
{
    QString ta = ui->txtrechercherclasse->text();
    model_classe classerecherche(ta, ta);
    int i=0;
    ui->tbllisteclasse->setRowCount(0);
    ui->tbllisteclasse->setRowCount(20);
    QSqlQuery classe = classerecherche.rechercherclasse();
    while(classe.next())
    {
        ui->tbllisteclasse->setItem(i,0,new QTableWidgetItem(classe.value("numero_inscription").toString()));
        ui->tbllisteclasse->setItem(i,1,new QTableWidgetItem(classe.value("nom_etudiant").toString()));
        i=i+1;
    }
}

void frm_classe::on_btnswitchetudiant_clicked()
{
    hide();
    frm_etudiant *a = new frm_etudiant();
    a->show();
}
void frm_classe::on_btnswitchclasse_clicked()
{
    hide();
    frm_classe *b = new frm_classe;
    b->show();
}

void frm_classe::on_btnswitchmatiere_clicked()
{
    hide();
    frm_matiere *c = new frm_matiere ;
    c->show();
}

void frm_classe::on_btnswitchnote_clicked()
{
    hide();
    frm_note *d = new frm_note ;
    d->show();
}
