#include "model_note.h"

model_note::model_note()
{

}

model_note::model_note(int numero_note, QString numero_inscription , QString code_matiere , float note)
{
    this->numero_note=numero_note;
    this->numero_inscription =numero_inscription;
    this->code_matiere=code_matiere;
    this->note=note;
}
model_note::model_note(QString numero_inscription , QString code_matiere , float note)
{
    //this->numero_note=numero_note;
    this->numero_inscription =numero_inscription;
    this->code_matiere=code_matiere;
    this->note=note;
}

model_note::model_note(QString numero_inscription , QString code_matiere)
{
    this->numero_inscription =numero_inscription;
    this->code_matiere=code_matiere;
}
model_note::model_note(int numero_note)
{
    this->numero_note=numero_note;
}


QSqlQuery model_note::moyenne()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        if(requete.exec("SELECT AVG(note) As moyenne from note"))
        {
            return requete;
        }
    }
}

QSqlQuery model_note::affichenote()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        if(requete.exec("SELECT * FROM note"))
        {
            return requete;
        }
    }
}
void model_note::ajoutnote()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        QSqlQuery compteur("SELECT COUNT(*) FROM note");
        compteur.next();
        int nb = compteur.value(0).toInt();
        if (nb==0)
        {
            QSqlQuery init("ALTER TABLE note auto_increment=1");
            init.exec();
        }
        requete.prepare("INSERT INTO note (numero_inscription, code_matiere, note) VALUES (?, ?, ?)");
        requete.addBindValue(this->numero_inscription);
        requete.addBindValue(this->code_matiere);
        requete.addBindValue(this->note);
        requete.exec();
    }
}
void model_note::modifiernote()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        requete.prepare("UPDATE note SET numero_inscription=?, code_matiere=?, note=? WHERE numero_note=?");
        requete.addBindValue(this->numero_inscription);
        requete.addBindValue(this->code_matiere);
        requete.addBindValue(this->note);
        requete.addBindValue(this->numero_note);
        requete.exec();
    }
}
void model_note::supprimernote()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        requete.prepare("DELETE FROM note WHERE numero_note=?");
        requete.addBindValue(this->numero_note);
        requete.exec();
    }
}
QSqlQuery model_note::recherchernote()
{
    model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        QSqlQuery requete;
        requete.prepare("SELECT * FROM note WHERE numero_inscription LIKE '%" + this->numero_inscription + "%' OR code_matiere LIKE '%"+this->code_matiere+"%' ");
        requete.exec();
        return requete;
    }
}
