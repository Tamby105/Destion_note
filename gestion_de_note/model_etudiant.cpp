#include "model_etudiant.h"

model_etudiant::model_etudiant()
{

}

model_etudiant::model_etudiant(QString numero_inscription , QString nom_etudiant , QString prenom_etudiant , QString sexe_etudiant , QString adresse_etudiant)
{
    this->numero_inscription=numero_inscription;
    this->nom_etudiant=nom_etudiant;
    this->prenom_etudiant=prenom_etudiant;
    this->sexe_etudiant=sexe_etudiant;
    this->adresse_etudiant=adresse_etudiant;
}
model_etudiant::model_etudiant(QString numero_inscription)
{
    this->numero_inscription=numero_inscription;
}

void model_etudiant::ajoutetudiant()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        requete.prepare("INSERT INTO etudiant (numero_inscription, nom_etudiant, prenom_etudiant, sexe_etudiant, adresse_etudiant ) VALUES (?, ?, ?, ?, ?)");
        requete.addBindValue(this->numero_inscription);
        requete.addBindValue(this->nom_etudiant);
        requete.addBindValue(this->prenom_etudiant);
        requete.addBindValue(this->sexe_etudiant);
        requete.addBindValue(this->adresse_etudiant);
        requete.exec();
    }
}
QSqlQuery model_etudiant::afficheetudiant()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        if(requete.exec("SELECT * FROM etudiant"))
        {
            return requete;
        }
    }
}

void model_etudiant::modifieretudiant()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        requete.prepare("UPDATE etudiant SET nom_etudiant=?, prenom_etudiant=?, sexe_etudiant=?, adresse_etudiant=? WHERE numero_inscription=?");
        requete.addBindValue(this->nom_etudiant);
        requete.addBindValue(this->prenom_etudiant);
        requete.addBindValue(this->sexe_etudiant);
        requete.addBindValue(this->adresse_etudiant);
        requete.addBindValue(this->numero_inscription);
        requete.exec();
    }
}
void model_etudiant::supprimeretudiant()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        requete.prepare("DELETE FROM etudiant WHERE numero_inscription=?");
        requete.addBindValue(this->numero_inscription);
        requete.exec();
    }
}
QSqlQuery model_etudiant::rechercheretudiant()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        requete.prepare("SELECT * FROM etudiant WHERE numero_inscription LIKE '%" + this->numero_inscription + "%' OR nom_etudiant LIKE '%"+this->nom_etudiant+"%' OR prenom_etudiant LIKE '%"+this->prenom_etudiant+"%' OR sexe_etudiant LIKE '%"+this->sexe_etudiant+"%' OR adresse_etudiant LIKE '%"+this->adresse_etudiant+"%' ");
        requete.exec();
        return requete;
    }
}

