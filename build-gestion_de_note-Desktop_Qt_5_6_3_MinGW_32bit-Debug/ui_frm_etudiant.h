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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frm_etudiant
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *frm_etudiant)
    {
        if (frm_etudiant->objectName().isEmpty())
            frm_etudiant->setObjectName(QStringLiteral("frm_etudiant"));
        frm_etudiant->resize(400, 300);
        menuBar = new QMenuBar(frm_etudiant);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        frm_etudiant->setMenuBar(menuBar);
        mainToolBar = new QToolBar(frm_etudiant);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        frm_etudiant->addToolBar(mainToolBar);
        centralWidget = new QWidget(frm_etudiant);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frm_etudiant->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(frm_etudiant);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        frm_etudiant->setStatusBar(statusBar);

        retranslateUi(frm_etudiant);

        QMetaObject::connectSlotsByName(frm_etudiant);
    } // setupUi

    void retranslateUi(QMainWindow *frm_etudiant)
    {
        frm_etudiant->setWindowTitle(QApplication::translate("frm_etudiant", "frm_etudiant", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frm_etudiant: public Ui_frm_etudiant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_ETUDIANT_H
