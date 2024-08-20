#ifndef MODEL_NOTE_H
#define MODEL_NOTE_H
#include <QString>
#include "model_connexion.h"
#include <QtSql/QSql>
#include <QtSql//QSqlDatabase>
#include <frm_note.h>

class model_note
{
private:
    int numero_note;
    QString numero_inscription;
    QString code_matiere;
    float note;
public:
    model_note();
    model_note(int numero_note, QString numero_inscription , QString code_matiere , float note);
    model_note(QString numero_inscription , QString code_matiere , float note);
    model_note(QString numero_inscription , QString code_matiere);
    model_note(int numero_note);
    void ajoutnote();
    void modifiernote();
    void supprimernote();
    QSqlQuery recherchernote();
    QSqlQuery affichenote();
    QSqlQuery moyenne();
};

#endif // MODEL_NOTE_H
