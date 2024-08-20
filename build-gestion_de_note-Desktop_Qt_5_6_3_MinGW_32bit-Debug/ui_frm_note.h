/********************************************************************************
** Form generated from reading UI file 'frm_note.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_NOTE_H
#define UI_FRM_NOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frm_note
{
public:

    void setupUi(QWidget *frm_note)
    {
        if (frm_note->objectName().isEmpty())
            frm_note->setObjectName(QStringLiteral("frm_note"));
        frm_note->resize(400, 300);

        retranslateUi(frm_note);

        QMetaObject::connectSlotsByName(frm_note);
    } // setupUi

    void retranslateUi(QWidget *frm_note)
    {
        frm_note->setWindowTitle(QApplication::translate("frm_note", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frm_note: public Ui_frm_note {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_NOTE_H
