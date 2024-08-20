#ifndef MODEL_MATIERE_H
#define MODEL_MATIERE_H
#include <QString>
#include "model_connexion.h"
#include <QtSql/QSql>
#include <QtSql//QSqlDatabase>
#include <frm_matiere.h>

class model_matiere
{
private:
    QString code_matiere;
    QString designation_matiere;
    int coefficient;
public:
    model_matiere();
    model_matiere(QString code_matiere);
    model_matiere(QString code_matiere , QString designation_matiere , int coefficient);
    model_matiere(QString code_matiere , QString designation_matiere);
    void ajoutmatiere();
    void modifiermatiere();
    void supprimermatiere();
    QSqlQuery recherchermatiere();
    QSqlQuery affichematiere();
};

#endif // MODEL_MATIERE_H
