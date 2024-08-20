#include "model_connexion.h"

model_connexion::model_connexion()
{

}
model_connexion::model_connexion(QString sgbdr, QString bddname, QString bddusername, QString bddpassword, QString bddbddname)
{
    this->sgbdr = sgbdr;
    this->bddname = bddname;
    this->bddusername = bddusername;
    this->bddpassword = bddpassword;
    this->bddbddname = bddbddname;
}

bool model_connexion::connexionbdd()
{
    QSqlDatabase db = QSqlDatabase::addDatabase(this->sgbdr);
    db.setHostName(this->bddname);
    db.setUserName(this->bddusername);
    db.setPassword(this->bddpassword);
    db.setDatabaseName(this->bddbddname);
    return db.open();
}
