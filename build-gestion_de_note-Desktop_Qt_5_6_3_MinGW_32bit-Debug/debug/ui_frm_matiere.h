/********************************************************************************
** Form generated from reading UI file 'frm_matiere.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_MATIERE_H
#define UI_FRM_MATIERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frm_matiere
{
public:
    QLabel *lbltitrematiere;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *lblcodematiere;
    QLineEdit *txtcodematiere;
    QLabel *lbldesignationmatiere;
    QLineEdit *txtdesignationmatiere;
    QLabel *lblcoefficient;
    QSpinBox *spbcoefficient;
    QPushButton *btnajoutmatiere;
    QPushButton *btnmodifmatiere;
    QPushButton *btnsupprmatiere;
    QTableWidget *tbllistematiere;
    QLabel *lblrecherchematiere;
    QLineEdit *txtrecherchematiere;
    QPushButton *btnswitchetudiant;
    QPushButton *btnswitchclasse;
    QPushButton *btnswitchmatiere;
    QPushButton *btnswitchnote;

    void setupUi(QWidget *frm_matiere)
    {
        if (frm_matiere->objectName().isEmpty())
            frm_matiere->setObjectName(QStringLiteral("frm_matiere"));
        frm_matiere->resize(1071, 585);
        lbltitrematiere = new QLabel(frm_matiere);
        lbltitrematiere->setObjectName(QStringLiteral("lbltitrematiere"));
        lbltitrematiere->setGeometry(QRect(500, 10, 81, 16));
        formLayoutWidget = new QWidget(frm_matiere);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(800, 110, 171, 211));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        lblcodematiere = new QLabel(formLayoutWidget);
        lblcodematiere->setObjectName(QStringLiteral("lblcodematiere"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblcodematiere);

        txtcodematiere = new QLineEdit(formLayoutWidget);
        txtcodematiere->setObjectName(QStringLiteral("txtcodematiere"));

        formLayout->setWidget(1, QFormLayout::LabelRole, txtcodematiere);

        lbldesignationmatiere = new QLabel(formLayoutWidget);
        lbldesignationmatiere->setObjectName(QStringLiteral("lbldesignationmatiere"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lbldesignationmatiere);

        txtdesignationmatiere = new QLineEdit(formLayoutWidget);
        txtdesignationmatiere->setObjectName(QStringLiteral("txtdesignationmatiere"));

        formLayout->setWidget(3, QFormLayout::LabelRole, txtdesignationmatiere);

        lblcoefficient = new QLabel(formLayoutWidget);
        lblcoefficient->setObjectName(QStringLiteral("lblcoefficient"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lblcoefficient);

        spbcoefficient = new QSpinBox(formLayoutWidget);
        spbcoefficient->setObjectName(QStringLiteral("spbcoefficient"));

        formLayout->setWidget(5, QFormLayout::LabelRole, spbcoefficient);

        btnajoutmatiere = new QPushButton(frm_matiere);
        btnajoutmatiere->setObjectName(QStringLiteral("btnajoutmatiere"));
        btnajoutmatiere->setGeometry(QRect(830, 340, 121, 28));
        btnmodifmatiere = new QPushButton(frm_matiere);
        btnmodifmatiere->setObjectName(QStringLiteral("btnmodifmatiere"));
        btnmodifmatiere->setGeometry(QRect(830, 380, 121, 28));
        btnsupprmatiere = new QPushButton(frm_matiere);
        btnsupprmatiere->setObjectName(QStringLiteral("btnsupprmatiere"));
        btnsupprmatiere->setGeometry(QRect(830, 420, 121, 28));
        tbllistematiere = new QTableWidget(frm_matiere);
        if (tbllistematiere->columnCount() < 3)
            tbllistematiere->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbllistematiere->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tbllistematiere->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tbllistematiere->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tbllistematiere->setObjectName(QStringLiteral("tbllistematiere"));
        tbllistematiere->setGeometry(QRect(350, 140, 401, 321));
        lblrecherchematiere = new QLabel(frm_matiere);
        lblrecherchematiere->setObjectName(QStringLiteral("lblrecherchematiere"));
        lblrecherchematiere->setGeometry(QRect(620, 70, 81, 16));
        txtrecherchematiere = new QLineEdit(frm_matiere);
        txtrecherchematiere->setObjectName(QStringLiteral("txtrecherchematiere"));
        txtrecherchematiere->setGeometry(QRect(620, 100, 131, 22));
        btnswitchetudiant = new QPushButton(frm_matiere);
        btnswitchetudiant->setObjectName(QStringLiteral("btnswitchetudiant"));
        btnswitchetudiant->setGeometry(QRect(50, 180, 93, 28));
        btnswitchclasse = new QPushButton(frm_matiere);
        btnswitchclasse->setObjectName(QStringLiteral("btnswitchclasse"));
        btnswitchclasse->setGeometry(QRect(50, 230, 93, 28));
        btnswitchmatiere = new QPushButton(frm_matiere);
        btnswitchmatiere->setObjectName(QStringLiteral("btnswitchmatiere"));
        btnswitchmatiere->setGeometry(QRect(50, 290, 93, 28));
        btnswitchnote = new QPushButton(frm_matiere);
        btnswitchnote->setObjectName(QStringLiteral("btnswitchnote"));
        btnswitchnote->setGeometry(QRect(50, 350, 93, 28));

        retranslateUi(frm_matiere);

        QMetaObject::connectSlotsByName(frm_matiere);
    } // setupUi

    void retranslateUi(QWidget *frm_matiere)
    {
        frm_matiere->setWindowTitle(QApplication::translate("frm_matiere", "Form", Q_NULLPTR));
        lbltitrematiere->setText(QApplication::translate("frm_matiere", "MATIERE", Q_NULLPTR));
        lblcodematiere->setText(QApplication::translate("frm_matiere", "Code matiere", Q_NULLPTR));
        lbldesignationmatiere->setText(QApplication::translate("frm_matiere", "Designation", Q_NULLPTR));
        lblcoefficient->setText(QApplication::translate("frm_matiere", "Coefficient", Q_NULLPTR));
        btnajoutmatiere->setText(QApplication::translate("frm_matiere", "AJOUTER", Q_NULLPTR));
        btnmodifmatiere->setText(QApplication::translate("frm_matiere", "MODIFIER", Q_NULLPTR));
        btnsupprmatiere->setText(QApplication::translate("frm_matiere", "SUPPRIMER", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tbllistematiere->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("frm_matiere", "Code matiere", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tbllistematiere->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("frm_matiere", "Designation", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tbllistematiere->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("frm_matiere", "Coefficient", Q_NULLPTR));
        lblrecherchematiere->setText(QApplication::translate("frm_matiere", "RECHERCHER", Q_NULLPTR));
        btnswitchetudiant->setText(QApplication::translate("frm_matiere", "ETUDIANT", Q_NULLPTR));
        btnswitchclasse->setText(QApplication::translate("frm_matiere", "CLASSE", Q_NULLPTR));
        btnswitchmatiere->setText(QApplication::translate("frm_matiere", "MATIERE", Q_NULLPTR));
        btnswitchnote->setText(QApplication::translate("frm_matiere", "NOTE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frm_matiere: public Ui_frm_matiere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_MATIERE_H
