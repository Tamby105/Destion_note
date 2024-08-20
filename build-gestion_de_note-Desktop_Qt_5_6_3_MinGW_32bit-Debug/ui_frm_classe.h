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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frm_classe
{
public:

    void setupUi(QWidget *frm_classe)
    {
        if (frm_classe->objectName().isEmpty())
            frm_classe->setObjectName(QStringLiteral("frm_classe"));
        frm_classe->resize(400, 300);

        retranslateUi(frm_classe);

        QMetaObject::connectSlotsByName(frm_classe);
    } // setupUi

    void retranslateUi(QWidget *frm_classe)
    {
        frm_classe->setWindowTitle(QApplication::translate("frm_classe", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frm_classe: public Ui_frm_classe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_CLASSE_H
