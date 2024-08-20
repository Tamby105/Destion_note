#ifndef MODEL_ETUDIANT_H
#define MODEL_ETUDIANT_H
#include <QString>
#include "model_connexion.h"
#include <QtSql/QSql>
#include <QtSql//QSqlDatabase>
#include <frm_etudiant.h>


class model_etudiant
{
private:
    QString numero_inscription;
    QString nom_etudiant;
    QString prenom_etudiant;
    QString sexe_etudiant;
    QString adresse_etudiant;
public:
    model_etudiant();
    model_etudiant(QString numero_inscription , QString nom_etudiant , QString prenom_etudiant , QString sexe_etudiant , QString adresse_etudiant);
    model_etudiant(QString numero_inscription);
    void ajoutetudiant();
    QSqlQuery afficheetudiant();
    void modifieretudiant();
    void supprimeretudiant();
    QSqlQuery rechercheretudiant();
   // void reinitialisationloc();
    //void afficheetudiantloc();
};

#endif // MODEL_ETUDIANT_H
