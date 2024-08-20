#include "frm_etudiant.h"
#include "frm_classe.h"
#include"frm_matiere.h"
#include "frm_note.h"
#include <QApplication>
#include"model_connexion.h"
#include "model_classe.h"
#include "model_etudiant.h"
#include "model_matiere.h"
#include "model_note.h"
#include<QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //frm_etudiant w;
   // w.show();
   /* model_connexion siconnect("QMYSQL","localhost","root","","gnote");
    if(siconnect.connexionbdd())
    {
        qDebug ()<<"OK";
    }
    else
    {
        qDebug ()<<"KO";
    }*/

   /* model_etudiant rojo("e002", "RAZANAPARANY", "Rojokely", "F", "Ambohimanarina");
    rojo.modifieretudiant();*/
    /*model_etudiant rojo("e002");
    rojo.supprimeretudiant();*/
   /* model_etudiant affichage();
    affichage.afficheetudiant();*/
   // frm_classe b;
    frm_note b;
     b.show();
    //frm_matiere c;
    //c.show();
    return a.exec();
}
