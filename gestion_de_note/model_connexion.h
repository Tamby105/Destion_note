#ifndef M0DEL_CONNEXION_H
#define M0DEL_CONNEXION_H
#include <QtSql>
#include <QSqlDatabase>

class model_connexion
{
private:
    QString sgbdr;
    QString bddname;
    QString bddusername;
    QString bddpassword;
    QString bddbddname;

public:
    model_connexion();
    model_connexion(QString sgbdr, QString bddname, QString bddusername, QString bddpassword, QString bddbddname);
    bool connexionbdd();
};

#endif // M0DEL_CONNEXION_H
