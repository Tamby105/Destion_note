/********************************************************************************
** Form generated from reading UI file 'frm_etudiant.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_ETUDIANT_H
#define UI_FRM_ETUDIANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "frm_classe.h"

QT_BEGIN_NAMESPACE

class Ui_frm_etudiant
{
public:
    QAction *actionMenu_etudiant;
    QAction *actionMenu_classe;
    QAction *actionMenu_matiere;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lblnumeroetudiant;
    QLineEdit *txtnumeroetudiant;
    QLabel *lblnometudiant;
    QLineEdit *txtnometudiant;
    QLabel *lblprenometudiant;
    QLineEdit *txtprenometudiant;
    QLabel *lblsexeetudiant;
    QFormLayout *formLayout;
    QRadioButton *rdsexemetudiant;
    QRadioButton *rdsexefetudiant;
    QLabel *lbladressetudiant;
    QLineEdit *txtadresseetudiant;
    QLabel *lbltitreetudiant;
    QPushButton *btnajouterclient;
    QPushButton *btnmodifierclient;
    QPushButton *btnsupprimeretudiant;
    QTableWidget *tbllistetudiant;
    QLineEdit *txtrechercheretudiant;
    QLabel *lblrechercheetudiant;
    QPushButton *btnswitchetudiant;
    QPushButton *btnswitchclasse;
    QPushButton *btnswitchmatiere;
    QPushButton *btnswitchnote;
    frm_classe *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *frm_etudiant)
    {
        if (frm_etudiant->objectName().isEmpty())
            frm_etudiant->setObjectName(QStringLiteral("frm_etudiant"));
        frm_etudiant->resize(1214, 659);
        actionMenu_etudiant = new QAction(frm_etudiant);
        actionMenu_etudiant->setObjectName(QStringLiteral("actionMenu_etudiant"));
        actionMenu_classe = new QAction(frm_etudiant);
        actionMenu_classe->setObjectName(QStringLiteral("actionMenu_classe"));
        actionMenu_matiere = new QAction(frm_etudiant);
        actionMenu_matiere->setObjectName(QStringLiteral("actionMenu_matiere"));
        centralWidget = new QWidget(frm_etudiant);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(970, 70, 221, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblnumeroetudiant = new QLabel(verticalLayoutWidget);
        lblnumeroetudiant->setObjectName(QStringLiteral("lblnumeroetudiant"));

        verticalLayout->addWidget(lblnumeroetudiant);

        txtnumeroetudiant = new QLineEdit(verticalLayoutWidget);
        txtnumeroetudiant->setObjectName(QStringLiteral("txtnumeroetudiant"));

        verticalLayout->addWidget(txtnumeroetudiant);

        lblnometudiant = new QLabel(verticalLayoutWidget);
        lblnometudiant->setObjectName(QStringLiteral("lblnometudiant"));

        verticalLayout->addWidget(lblnometudiant);

        txtnometudiant = new QLineEdit(verticalLayoutWidget);
        txtnometudiant->setObjectName(QStringLiteral("txtnometudiant"));

        verticalLayout->addWidget(txtnometudiant);

        lblprenometudiant = new QLabel(verticalLayoutWidget);
        lblprenometudiant->setObjectName(QStringLiteral("lblprenometudiant"));

        verticalLayout->addWidget(lblprenometudiant);

        txtprenometudiant = new QLineEdit(verticalLayoutWidget);
        txtprenometudiant->setObjectName(QStringLiteral("txtprenometudiant"));

        verticalLayout->addWidget(txtprenometudiant);

        lblsexeetudiant = new QLabel(verticalLayoutWidget);
        lblsexeetudiant->setObjectName(QStringLiteral("lblsexeetudiant"));

        verticalLayout->addWidget(lblsexeetudiant);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        rdsexemetudiant = new QRadioButton(verticalLayoutWidget);
        rdsexemetudiant->setObjectName(QStringLiteral("rdsexemetudiant"));

        formLayout->setWidget(0, QFormLayout::LabelRole, rdsexemetudiant);

        rdsexefetudiant = new QRadioButton(verticalLayoutWidget);
        rdsexefetudiant->setObjectName(QStringLiteral("rdsexefetudiant"));

        formLayout->setWidget(0, QFormLayout::FieldRole, rdsexefetudiant);


        verticalLayout->addLayout(formLayout);

        lbladressetudiant = new QLabel(verticalLayoutWidget);
        lbladressetudiant->setObjectName(QStringLiteral("lbladressetudiant"));

        verticalLayout->addWidget(lbladressetudiant);

        txtadresseetudiant = new QLineEdit(verticalLayoutWidget);
        txtadresseetudiant->setObjectName(QStringLiteral("txtadresseetudiant"));

        verticalLayout->addWidget(txtadresseetudiant);

        lbltitreetudiant = new QLabel(centralWidget);
        lbltitreetudiant->setObjectName(QStringLiteral("lbltitreetudiant"));
        lbltitreetudiant->setGeometry(QRect(470, 20, 101, 31));
        btnajouterclient = new QPushButton(centralWidget);
        btnajouterclient->setObjectName(QStringLiteral("btnajouterclient"));
        btnajouterclient->setGeometry(QRect(1000, 430, 171, 28));
        btnmodifierclient = new QPushButton(centralWidget);
        btnmodifierclient->setObjectName(QStringLiteral("btnmodifierclient"));
        btnmodifierclient->setGeometry(QRect(1000, 470, 171, 28));
        btnsupprimeretudiant = new QPushButton(centralWidget);
        btnsupprimeretudiant->setObjectName(QStringLiteral("btnsupprimeretudiant"));
        btnsupprimeretudiant->setGeometry(QRect(1000, 510, 171, 28));
        tbllistetudiant = new QTableWidget(centralWidget);
        if (tbllistetudiant->columnCount() < 5)
            tbllistetudiant->setColumnCount(5);
        QFont font;
        font.setFamily(QStringLiteral("Sitka Heading"));
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tbllistetudiant->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tbllistetudiant->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tbllistetudiant->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tbllistetudiant->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tbllistetudiant->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tbllistetudiant->setObjectName(QStringLiteral("tbllistetudiant"));
        tbllistetudiant->setGeometry(QRect(250, 160, 681, 431));
        txtrechercheretudiant = new QLineEdit(centralWidget);
        txtrechercheretudiant->setObjectName(QStringLiteral("txtrechercheretudiant"));
        txtrechercheretudiant->setGeometry(QRect(730, 130, 191, 22));
        lblrechercheetudiant = new QLabel(centralWidget);
        lblrechercheetudiant->setObjectName(QStringLiteral("lblrechercheetudiant"));
        lblrechercheetudiant->setGeometry(QRect(830, 100, 81, 20));
        btnswitchetudiant = new QPushButton(centralWidget);
        btnswitchetudiant->setObjectName(QStringLiteral("btnswitchetudiant"));
        btnswitchetudiant->setGeometry(QRect(50, 210, 121, 28));
        btnswitchclasse = new QPushButton(centralWidget);
        btnswitchclasse->setObjectName(QStringLiteral("btnswitchclasse"));
        btnswitchclasse->setGeometry(QRect(50, 280, 121, 28));
        btnswitchmatiere = new QPushButton(centralWidget);
        btnswitchmatiere->setObjectName(QStringLiteral("btnswitchmatiere"));
        btnswitchmatiere->setGeometry(QRect(50, 350, 121, 28));
        btnswitchnote = new QPushButton(centralWidget);
        btnswitchnote->setObjectName(QStringLiteral("btnswitchnote"));
        btnswitchnote->setGeometry(QRect(50, 420, 121, 28));
        frm_etudiant->setCentralWidget(centralWidget);
        menuBar = new frm_classe(frm_etudiant);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1214, 21));
        //frm_etudiant->setMenuBar(menuBar);
        mainToolBar = new QToolBar(frm_etudiant);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        frm_etudiant->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(frm_etudiant);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        frm_etudiant->setStatusBar(statusBar);

        retranslateUi(frm_etudiant);

        QMetaObject::connectSlotsByName(frm_etudiant);
    } // setupUi

    void retranslateUi(QMainWindow *frm_etudiant)
    {
        frm_etudiant->setWindowTitle(QApplication::translate("frm_etudiant", "frm_etudiant", Q_NULLPTR));
        actionMenu_etudiant->setText(QApplication::translate("frm_etudiant", "menu etudiant", Q_NULLPTR));
        actionMenu_classe->setText(QApplication::translate("frm_etudiant", "menu classe", Q_NULLPTR));
        actionMenu_matiere->setText(QApplication::translate("frm_etudiant", "menu matiere", Q_NULLPTR));
        lblnumeroetudiant->setText(QApplication::translate("frm_etudiant", "Numero d' inscription", Q_NULLPTR));
        lblnometudiant->setText(QApplication::translate("frm_etudiant", "Nom", Q_NULLPTR));
        lblprenometudiant->setText(QApplication::translate("frm_etudiant", "Prenom", Q_NULLPTR));
        lblsexeetudiant->setText(QApplication::translate("frm_etudiant", "Sexe", Q_NULLPTR));
        rdsexemetudiant->setText(QApplication::translate("frm_etudiant", "H", Q_NULLPTR));
        rdsexefetudiant->setText(QApplication::translate("frm_etudiant", "F", Q_NULLPTR));
        lbladressetudiant->setText(QApplication::translate("frm_etudiant", "Adresse", Q_NULLPTR));
        lbltitreetudiant->setText(QApplication::translate("frm_etudiant", "ETUDIANTS", Q_NULLPTR));
        btnajouterclient->setText(QApplication::translate("frm_etudiant", "AJOUTER", Q_NULLPTR));
        btnmodifierclient->setText(QApplication::translate("frm_etudiant", "MODIFIER", Q_NULLPTR));
        btnsupprimeretudiant->setText(QApplication::translate("frm_etudiant", "SUPPRIMER", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tbllistetudiant->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("frm_etudiant", "Numero", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tbllistetudiant->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("frm_etudiant", "Nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tbllistetudiant->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("frm_etudiant", "Prenom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tbllistetudiant->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("frm_etudiant", "Sexe", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tbllistetudiant->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("frm_etudiant", "Adresse", Q_NULLPTR));
        lblrechercheetudiant->setText(QApplication::translate("frm_etudiant", "RECHERCHER", Q_NULLPTR));
        btnswitchetudiant->setText(QApplication::translate("frm_etudiant", "ETUDIANT", Q_NULLPTR));
        btnswitchclasse->setText(QApplication::translate("frm_etudiant", "CLASSE", Q_NULLPTR));
        btnswitchmatiere->setText(QApplication::translate("frm_etudiant", "MATIERE", Q_NULLPTR));
        btnswitchnote->setText(QApplication::translate("frm_etudiant", "NOTE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frm_etudiant: public Ui_frm_etudiant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_ETUDIANT_H
