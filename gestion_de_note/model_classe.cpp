#include "model_classe.h"

model_classe::model_classe()
{

}

model_classe::model_classe(QString code_classe)
{
     this->code_classe=code_classe;
}

model_classe::model_classe(QString code_classe , QString designation_classe)
{
    this->code_classe=code_classe;
    this->designation_classe=designation_classe;
}

void model_classe::ajoutclasse()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        requete.prepare("INSERT INTO classe (code_classe, designation_classe ) VALUES (?, ?)");
        requete.addBindValue(this->code_classe);
        requete.addBindValue(this->designation_classe);
        requete.exec();
    }
}

QSqlQuery model_classe::afficheclasse()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        if(requete.exec("SELECT * FROM classe"))
        {
            return requete;
        }
    }
}

void model_classe::modifierclasse()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        requete.prepare("UPDATE classe SET designation_classe=? WHERE code_classe=?");
        requete.addBindValue(this->designation_classe);
        requete.addBindValue(this->code_classe);
        requete.exec();
    }
}

void model_classe::supprimerclasse()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        requete.prepare("DELETE FROM classe WHERE code_classe=?");
        requete.addBindValue(this->code_classe);
        requete.exec();
    }
}

QSqlQuery model_classe::rechercherclasse()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        requete.prepare("SELECT * FROM classe WHERE code_classe LIKE '%" + this->code_classe + "%' OR designation_classe LIKE '%"+this->designation_classe+"%'");
        requete.exec();
        return requete;
    }
}
