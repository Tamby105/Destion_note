/********************************************************************************
** Form generated from reading UI file 'frm_classe.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_CLASSE_H
#define UI_FRM_CLASSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frm_classe
{
public:
    QLabel *lbltitreclasse;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *lblcodeclasse;
    QLineEdit *txtcodeclasse;
    QLabel *lbldesignationclasse;
    QLineEdit *txtdesignationclasse;
    QPushButton *btnajouterclasse;
    QPushButton *btnmodifierclasse;
    QPushButton *btnsupprimerclasse;
    QTableWidget *tbllisteclasse;
    QLabel *lblrechercherclasse;
    QLineEdit *txtrechercherclasse;
    QLabel *lblajoutclasse;
    QPushButton *btnswitchetudiant;
    QPushButton *btnswitchclasse;
    QPushButton *btnswitchmatiere;
    QPushButton *btnswitchnote;

    void setupUi(QWidget *frm_classe)
    {
        if (frm_classe->objectName().isEmpty())
            frm_classe->setObjectName(QStringLiteral("frm_classe"));
        frm_classe->resize(676, 381);
        lbltitreclasse = new QLabel(frm_classe);
        lbltitreclasse->setObjectName(QStringLiteral("lbltitreclasse"));
        lbltitreclasse->setGeometry(QRect(320, 0, 55, 16));
        formLayoutWidget = new QWidget(frm_classe);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(530, 60, 131, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        lblcodeclasse = new QLabel(formLayoutWidget);
        lblcodeclasse->setObjectName(QStringLiteral("lblcodeclasse"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblcodeclasse);

        txtcodeclasse = new QLineEdit(formLayoutWidget);
        txtcodeclasse->setObjectName(QStringLiteral("txtcodeclasse"));

        formLayout->setWidget(1, QFormLayout::LabelRole, txtcodeclasse);

        lbldesignationclasse = new QLabel(formLayoutWidget);
        lbldesignationclasse->setObjectName(QStringLiteral("lbldesignationclasse"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lbldesignationclasse);

        txtdesignationclasse = new QLineEdit(formLayoutWidget);
        txtdesignationclasse->setObjectName(QStringLiteral("txtdesignationclasse"));

        formLayout->setWidget(3, QFormLayout::LabelRole, txtdesignationclasse);

        btnajouterclasse = new QPushButton(frm_classe);
        btnajouterclasse->setObjectName(QStringLiteral("btnajouterclasse"));
        btnajouterclasse->setGeometry(QRect(540, 170, 111, 28));
        btnmodifierclasse = new QPushButton(frm_classe);
        btnmodifierclasse->setObjectName(QStringLiteral("btnmodifierclasse"));
        btnmodifierclasse->setGeometry(QRect(540, 210, 111, 28));
        btnsupprimerclasse = new QPushButton(frm_classe);
        btnsupprimerclasse->setObjectName(QStringLiteral("btnsupprimerclasse"));
        btnsupprimerclasse->setGeometry(QRect(540, 250, 111, 28));
        tbllisteclasse = new QTableWidget(frm_classe);
        if (tbllisteclasse->columnCount() < 2)
            tbllisteclasse->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbllisteclasse->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tbllisteclasse->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tbllisteclasse->setObjectName(QStringLiteral("tbllisteclasse"));
        tbllisteclasse->setGeometry(QRect(190, 80, 321, 191));
        lblrechercherclasse = new QLabel(frm_classe);
        lblrechercherclasse->setObjectName(QStringLiteral("lblrechercherclasse"));
        lblrechercherclasse->setGeometry(QRect(390, 30, 81, 16));
        txtrechercherclasse = new QLineEdit(frm_classe);
        txtrechercherclasse->setObjectName(QStringLiteral("txtrechercherclasse"));
        txtrechercherclasse->setGeometry(QRect(390, 50, 113, 22));
        lblajoutclasse = new QLabel(frm_classe);
        lblajoutclasse->setObjectName(QStringLiteral("lblajoutclasse"));
        lblajoutclasse->setGeometry(QRect(530, 30, 55, 16));
        btnswitchetudiant = new QPushButton(frm_classe);
        btnswitchetudiant->setObjectName(QStringLiteral("btnswitchetudiant"));
        btnswitchetudiant->setGeometry(QRect(10, 110, 93, 28));
        btnswitchclasse = new QPushButton(frm_classe);
        btnswitchclasse->setObjectName(QStringLiteral("btnswitchclasse"));
        btnswitchclasse->setGeometry(QRect(10, 150, 93, 28));
        btnswitchmatiere = new QPushButton(frm_classe);
        btnswitchmatiere->setObjectName(QStringLiteral("btnswitchmatiere"));
        btnswitchmatiere->setGeometry(QRect(10, 190, 93, 28));
        btnswitchnote = new QPushButton(frm_classe);
        btnswitchnote->setObjectName(QStringLiteral("btnswitchnote"));
        btnswitchnote->setGeometry(QRect(10, 230, 93, 28));

        retranslateUi(frm_classe);

        QMetaObject::connectSlotsByName(frm_classe);
    } // setupUi

    void retranslateUi(QWidget *frm_classe)
    {
        frm_classe->setWindowTitle(QApplication::translate("frm_classe", "Form", Q_NULLPTR));
        lbltitreclasse->setText(QApplication::translate("frm_classe", "CLASSE", Q_NULLPTR));
        lblcodeclasse->setText(QApplication::translate("frm_classe", "Code classe", Q_NULLPTR));
        lbldesignationclasse->setText(QApplication::translate("frm_classe", "Designation", Q_NULLPTR));
        btnajouterclasse->setText(QApplication::translate("frm_classe", "AJOUTER", Q_NULLPTR));
        btnmodifierclasse->setText(QApplication::translate("frm_classe", "MODIFIER", Q_NULLPTR));
        btnsupprimerclasse->setText(QApplication::translate("frm_classe", "SUPPRIMER", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tbllisteclasse->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("frm_classe", "Code classe", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tbllisteclasse->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("frm_classe", "Designation classe", Q_NULLPTR));
        lblrechercherclasse->setText(QApplication::translate("frm_classe", "RECHERCHER", Q_NULLPTR));
        lblajoutclasse->setText(QApplication::translate("frm_classe", "AJOUT", Q_NULLPTR));
        btnswitchetudiant->setText(QApplication::translate("frm_classe", "ETUDIANT", Q_NULLPTR));
        btnswitchclasse->setText(QApplication::translate("frm_classe", "CLASSE", Q_NULLPTR));
        btnswitchmatiere->setText(QApplication::translate("frm_classe", "MATIERE", Q_NULLPTR));
        btnswitchnote->setText(QApplication::translate("frm_classe", "NOTE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frm_classe: public Ui_frm_classe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_CLASSE_H
