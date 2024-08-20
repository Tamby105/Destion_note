#include "frm_etudiant.h"
#include "ui_frm_etudiant.h"
#include "model_etudiant.h"
#include "frm_classe.h"
#include "frm_matiere.h"
#include "frm_note.h"

frm_etudiant::frm_etudiant(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::frm_etudiant)
{
    ui->setupUi(this);
    afficheetudiantloc();
}

frm_etudiant::~frm_etudiant()
{
    delete ui;
}
void frm_etudiant::afficheetudiantloc()
{

    model_etudiant etudiantaffiche;
    int i=0;
    ui->tbllistetudiant->setRowCount(0);
    ui->tbllistetudiant->setRowCount(100);
    QSqlQuery etudiant = etudiantaffiche.afficheetudiant();
    while(etudiant.next())
    {
        ui->tbllistetudiant->setItem(i,0,new QTableWidgetItem(etudiant.value("numero_inscription").toString()));
        ui->tbllistetudiant->setItem(i,1,new QTableWidgetItem(etudiant.value("nom_etudiant").toString()));
        ui->tbllistetudiant->setItem(i,2,new QTableWidgetItem(etudiant.value("prenom_etudiant").toString()));
        ui->tbllistetudiant->setItem(i,3,new QTableWidgetItem(etudiant.value("sexe_etudiant").toString()));
        ui->tbllistetudiant->setItem(i,4,new QTableWidgetItem(etudiant.value("adresse_etudiant").toString()));
        i=i+1;
    }
}
void frm_etudiant::reinitialisationloc()
{
    ui->txtnumeroetudiant->setText("");
    ui->txtnometudiant->setText("");
    ui->txtprenometudiant->setText("");
    ui->rdsexefetudiant->setChecked(true);
    ui->rdsexemetudiant->setChecked(false);
    ui->txtadresseetudiant->setText("");
}

void frm_etudiant::on_btnmodifierclient_clicked()
{
    if(ui->btnmodifierclient->text()=="MODIFIER")
    {

        int nb = ui->tbllistetudiant->currentRow();
        ui->txtnumeroetudiant->setText(ui->tbllistetudiant->item(nb, 0)->text());
        ui->txtnometudiant->setText(ui->tbllistetudiant->item(nb, 1)->text());
        ui->txtprenometudiant->setText(ui->tbllistetudiant->item(nb, 2)->text());
        ui->txtadresseetudiant->setText(ui->tbllistetudiant->item(nb, 4)->text());
        QString sexe = ui->tbllistetudiant->item(nb, 3)->text();
        if(sexe == "H")
        {
            ui->rdsexemetudiant->setChecked(true);
            ui->rdsexefetudiant->setChecked(false);
        }
        if(sexe == "F")
        {
            ui->rdsexemetudiant->setChecked(false);
            ui->rdsexefetudiant->setChecked(true);
        }
        ui->btnmodifierclient->setText("ENREGISTRER");
    }
    else if(ui->btnmodifierclient->text()=="ENREGISTRER")
    {
        QString numeroetudiant = ui->txtnumeroetudiant->text();
        QString nometudiant = ui->txtnometudiant->text();
        QString prenometudiant = ui->txtprenometudiant->text();
        QString adresseetudiant = ui->txtadresseetudiant->text();
        QString sexeetudiant;
        if(ui->rdsexemetudiant->isChecked())
        {
            sexeetudiant = "H";
        }
        if(ui->rdsexefetudiant->isChecked())
        {
            sexeetudiant = "F";
        }

        model_etudiant etudiantmodif(numeroetudiant, nometudiant, prenometudiant, sexeetudiant, adresseetudiant);
        etudiantmodif.modifieretudiant();

        ui->btnmodifierclient->setText("MODIFIER");

        reinitialisationloc();
        afficheetudiantloc();
    }
}

void frm_etudiant::on_btnajouterclient_clicked()
{
    QString numeroetudiant = ui->txtnumeroetudiant->text();
    QString nometudiant = ui->txtnometudiant->text();
    QString prenometudiant = ui->txtprenometudiant->text();
    QString adresseetudiant = ui->txtadresseetudiant->text();
    QString sexeetudiant;
    if(ui->rdsexemetudiant->isChecked())
    {
        sexeetudiant = "H";
    }
    if(ui->rdsexefetudiant->isChecked())
    {
        sexeetudiant = "F";
    }
    model_etudiant creation(numeroetudiant, nometudiant, prenometudiant,sexeetudiant, adresseetudiant);
    creation.ajoutetudiant();

    reinitialisationloc();
    afficheetudiantloc();
}

void frm_etudiant::on_btnsupprimeretudiant_clicked()
{
    int nb = ui->tbllistetudiant->currentRow();
    QString numero_insciption = ui->tbllistetudiant->item(nb, 0)->text();
    QMessageBox::StandardButton confirm = QMessageBox::question(this, "CONFIRMATION", "Voulez-vous vraiment supprimer?", QMessageBox::Yes | QMessageBox::No);
    if (confirm ==  QMessageBox::Yes)
    {
        model_etudiant etudiantsuppr(numero_insciption);
        etudiantsuppr.supprimeretudiant();
        reinitialisationloc();
        afficheetudiantloc();
    }
    reinitialisationloc();
}

void frm_etudiant::on_txtrechercheretudiant_textChanged(const QString &arg1)
{
    QString ta = ui->txtrechercheretudiant->text();
    model_etudiant etudiantrecherche(ta, ta, ta, ta, ta);
    int i=0;
    ui->tbllistetudiant->setRowCount(0);
    ui->tbllistetudiant->setRowCount(100);
    QSqlQuery etu = etudiantrecherche.rechercheretudiant();
    while(etu.next())
    {
        ui->tbllistetudiant->setItem(i,0,new QTableWidgetItem(etu.value("numero_inscription").toString()));
        ui->tbllistetudiant->setItem(i,1,new QTableWidgetItem(etu.value("nom_etudiant").toString()));
        ui->tbllistetudiant->setItem(i,2,new QTableWidgetItem(etu.value("prenom_etudiant").toString()));
        ui->tbllistetudiant->setItem(i,3,new QTableWidgetItem(etu.value("sexe_etudiant").toString()));
        ui->tbllistetudiant->setItem(i,4,new QTableWidgetItem(etu.value("adresse_etudiant").toString()));
        i=i+1;
    }
}

void frm_etudiant::on_btnswitchetudiant_clicked()
{
    hide();
    frm_etudiant *a = new frm_etudiant();
    a->show();
}

void frm_etudiant::on_btnswitchclasse_clicked()
{
    hide();
    frm_classe *b = new frm_classe;
    b->show();
}

void frm_etudiant::on_btnswitchmatiere_clicked()
{
    hide();
    frm_matiere *c = new frm_matiere ;
    c->show();
}

void frm_etudiant::on_btnswitchnote_clicked()
{
    hide();
    frm_note *d = new frm_note ;
    d->show();
}
