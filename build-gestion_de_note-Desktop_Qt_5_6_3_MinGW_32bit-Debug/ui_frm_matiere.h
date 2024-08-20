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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frm_matiere
{
public:

    void setupUi(QWidget *frm_matiere)
    {
        if (frm_matiere->objectName().isEmpty())
            frm_matiere->setObjectName(QStringLiteral("frm_matiere"));
        frm_matiere->resize(400, 300);

        retranslateUi(frm_matiere);

        QMetaObject::connectSlotsByName(frm_matiere);
    } // setupUi

    void retranslateUi(QWidget *frm_matiere)
    {
        frm_matiere->setWindowTitle(QApplication::translate("frm_matiere", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frm_matiere: public Ui_frm_matiere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_MATIERE_H
