#include "frm_matiere.h"
#include "ui_frm_matiere.h"
#include "model_matiere.h"
#include "frm_etudiant.h"
#include "frm_classe.h"
#include "frm_note.h"


frm_matiere::frm_matiere(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frm_matiere)
{
    ui->setupUi(this);
    affichematiereloc();
}

frm_matiere::~frm_matiere()
{
    delete ui;
}
void frm_matiere::affichematiereloc()
{

    model_matiere matiereaffiche;
    int i=0;
    ui->tbllistematiere->setRowCount(0);
    ui->tbllistematiere->setRowCount(100);
    QSqlQuery matiere = matiereaffiche.affichematiere();
    while(matiere.next())
    {
        ui->tbllistematiere->setItem(i,0,new QTableWidgetItem(matiere.value("code_matiere").toString()));
        ui->tbllistematiere->setItem(i,1,new QTableWidgetItem(matiere.value("designation_matiere").toString()));
        ui->tbllistematiere->setItem(i,2,new QTableWidgetItem(matiere.value("coefficient").toString()));
        i=i+1;
    }
}

void frm_matiere::reinitialisationloc()
{
    ui->txtcodematiere->setText("");
    ui->txtdesignationmatiere->setText("");
    ui->spbcoefficient->setValue(0);
}

void frm_matiere::on_btnajoutmatiere_clicked()
{
    QString code_matiere = ui->txtcodematiere->text();
    QString designation_matiere = ui->txtdesignationmatiere->text();
    int coeff = ui->spbcoefficient->value();

    model_matiere creation(code_matiere, designation_matiere, coeff);
    creation.ajoutmatiere();

    reinitialisationloc();
    affichematiereloc();
}

void frm_matiere::on_btnmodifmatiere_clicked()
{
    if(ui->btnmodifmatiere->text()=="MODIFIER")
    {

        int nb = ui->tbllistematiere->currentRow();
        ui->txtcodematiere->setText(ui->tbllistematiere->item(nb, 0)->text());
        ui->txtdesignationmatiere->setText(ui->tbllistematiere->item(nb, 1)->text());
        ui->spbcoefficient->setValue(ui->tbllistematiere->item(nb, 2)->text().toInt());

        ui->btnmodifmatiere->setText("ENREGISTRER");
    }
    else if(ui->btnmodifmatiere->text()=="ENREGISTRER")
    {
        QString code_matiere = ui->txtcodematiere->text();
        QString designation_matiere = ui->txtdesignationmatiere->text();
        int coeff = ui->spbcoefficient->value();

        model_matiere matieremodif(code_matiere, designation_matiere, coeff);
        matieremodif.modifiermatiere();

        ui->btnmodifmatiere->setText("MODIFIER");

        reinitialisationloc();
        affichematiereloc();
    }
}

void frm_matiere::on_btnsupprmatiere_clicked()
{
    int nb = ui->tbllistematiere->currentRow();
    QString code_matiere = ui->tbllistematiere->item(nb, 0)->text();
    QMessageBox::StandardButton confirm = QMessageBox::question(this, "CONFIRMATION", "Voulez-vous vraiment supprimer?", QMessageBox::Yes | QMessageBox::No);
    if (confirm ==  QMessageBox::Yes)
    {
        model_matiere matieresuppr(code_matiere);
        matieresuppr.supprimermatiere();
        reinitialisationloc();
        affichematiereloc();
    }
    reinitialisationloc();
}

void frm_matiere::on_txtrecherchematiere_textChanged(const QString &arg1)
{
    QString ta = ui->txtrecherchematiere->text();
    model_matiere matiererecherche(ta, ta);
    int i=0;
    ui->tbllistematiere->setRowCount(0);
    ui->tbllistematiere->setRowCount(30);
    QSqlQuery matiere = matiererecherche.recherchermatiere();
    while(matiere.next())
    {
        ui->tbllistematiere->setItem(i,0,new QTableWidgetItem(matiere.value("code_matiere").toString()));
        ui->tbllistematiere->setItem(i,1,new QTableWidgetItem(matiere.value("designation_matiere").toString()));
        ui->tbllistematiere->setItem(i,2,new QTableWidgetItem(matiere.value("coefficient").toString()));
        i=i+1;
    }
}

void frm_matiere::on_btnswitchetudiant_clicked()
{
    hide();
    frm_etudiant *a = new frm_etudiant();
    a->show();
}

void frm_matiere::on_btnswitchclasse_clicked()
{
    hide();
    frm_classe *b = new frm_classe;
    b->show();
}

void frm_matiere::on_btnswitchmatiere_clicked()
{
    hide();
    frm_matiere *c = new frm_matiere ;
    c->show();
}

void frm_matiere::on_btnswitchnote_clicked()
{
    hide();
    frm_note *d = new frm_note ;
    d->show();
}
