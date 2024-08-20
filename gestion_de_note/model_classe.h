#ifndef MODEL_CLASSE_H
#define MODEL_CLASSE_H
#include <QString>
#include "model_connexion.h"
#include <QtSql/QSql>
#include <QtSql//QSqlDatabase>
#include <frm_classe.h>

class model_classe
{
private:
    QString code_classe;
    QString designation_classe;

public:
    model_classe();
    model_classe(QString code_classe);
    model_classe(QString code_classe , QString designation_classe);
    void ajoutclasse();
    void modifierclasse();
    void supprimerclasse();
    QSqlQuery rechercherclasse();
    QSqlQuery afficheclasse();
};

#endif // MODEL_CLASSE_H
