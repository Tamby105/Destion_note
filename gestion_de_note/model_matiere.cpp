#include "model_matiere.h"

model_matiere::model_matiere()
{

}

model_matiere::model_matiere(QString code_matiere)
{
    this->code_matiere=code_matiere;
}

model_matiere::model_matiere(QString code_matiere , QString designation_matiere , int coefficient)
{
    this->code_matiere=code_matiere;
    this->designation_matiere=designation_matiere;
    this->coefficient=coefficient;
}

model_matiere::model_matiere(QString code_matiere, QString designation_matiere)
{
    this->code_matiere=code_matiere;
    this->designation_matiere=designation_matiere;
}

void model_matiere::ajoutmatiere()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        requete.prepare("INSERT INTO matiere (code_matiere, designation_matiere, coefficient) VALUES (?, ?, ?)");
        requete.addBindValue(this->code_matiere);
        requete.addBindValue(this->designation_matiere);
        requete.addBindValue(this->coefficient);
        requete.exec();
    }
}

QSqlQuery model_matiere::affichematiere()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        if(requete.exec("SELECT * FROM matiere"))
        {
            return requete;
        }
    }
}

void model_matiere::modifiermatiere()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        requete.prepare("UPDATE matiere SET designation_matiere=?, coefficient=?  WHERE code_matiere=?");
        requete.addBindValue(this->designation_matiere);
        requete.addBindValue(this->coefficient);
        requete.addBindValue(this->code_matiere);
        requete.exec();
    }
}

void model_matiere::supprimermatiere()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        requete.prepare("DELETE FROM matiere WHERE code_matiere=?");
        requete.addBindValue(this->code_matiere);
        requete.exec();
    }
}

QSqlQuery model_matiere::recherchermatiere()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        requete.prepare("SELECT * FROM matiere WHERE code_matiere LIKE '%" + this->code_matiere + "%' OR designation_matiere LIKE '%"+this->designation_matiere+"%'");
        requete.exec();
        return requete;
    }
}
