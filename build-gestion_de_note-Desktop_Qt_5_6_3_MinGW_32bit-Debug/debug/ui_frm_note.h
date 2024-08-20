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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frm_note
{
public:
    QPushButton *btnswitchetudiant;
    QPushButton *btnswitchclasse;
    QPushButton *btnswitchmatiere;
    QPushButton *btnswitchnote;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *lblnumeroetudiantnote;
    QComboBox *cbxnumeroetudiantnote;
    QLabel *lblcodematierenote;
    QComboBox *cbxcodematierenote;
    QLabel *lblnote;
    QLineEdit *txtnote;
    QTableWidget *tbllistenote;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QPushButton *btnbulletin;
    QPushButton *btnsupprimernote;
    QPushButton *btnmodifiernote;
    QPushButton *btnajouternote;
    QLabel *lbltitrenote;
    QLabel *lblrecherchernote;
    QLineEdit *txtrecherchenote;

    void setupUi(QWidget *frm_note)
    {
        if (frm_note->objectName().isEmpty())
            frm_note->setObjectName(QStringLiteral("frm_note"));
        frm_note->resize(1094, 597);
        btnswitchetudiant = new QPushButton(frm_note);
        btnswitchetudiant->setObjectName(QStringLiteral("btnswitchetudiant"));
        btnswitchetudiant->setGeometry(QRect(40, 180, 93, 28));
        btnswitchclasse = new QPushButton(frm_note);
        btnswitchclasse->setObjectName(QStringLiteral("btnswitchclasse"));
        btnswitchclasse->setGeometry(QRect(40, 230, 93, 28));
        btnswitchmatiere = new QPushButton(frm_note);
        btnswitchmatiere->setObjectName(QStringLiteral("btnswitchmatiere"));
        btnswitchmatiere->setGeometry(QRect(40, 280, 93, 28));
        btnswitchnote = new QPushButton(frm_note);
        btnswitchnote->setObjectName(QStringLiteral("btnswitchnote"));
        btnswitchnote->setGeometry(QRect(40, 340, 93, 28));
        formLayoutWidget = new QWidget(frm_note);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(830, 140, 231, 221));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        lblnumeroetudiantnote = new QLabel(formLayoutWidget);
        lblnumeroetudiantnote->setObjectName(QStringLiteral("lblnumeroetudiantnote"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblnumeroetudiantnote);

        cbxnumeroetudiantnote = new QComboBox(formLayoutWidget);
        cbxnumeroetudiantnote->setObjectName(QStringLiteral("cbxnumeroetudiantnote"));

        formLayout->setWidget(1, QFormLayout::LabelRole, cbxnumeroetudiantnote);

        lblcodematierenote = new QLabel(formLayoutWidget);
        lblcodematierenote->setObjectName(QStringLiteral("lblcodematierenote"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lblcodematierenote);

        cbxcodematierenote = new QComboBox(formLayoutWidget);
        cbxcodematierenote->setObjectName(QStringLiteral("cbxcodematierenote"));

        formLayout->setWidget(3, QFormLayout::LabelRole, cbxcodematierenote);

        lblnote = new QLabel(formLayoutWidget);
        lblnote->setObjectName(QStringLiteral("lblnote"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lblnote);

        txtnote = new QLineEdit(formLayoutWidget);
        txtnote->setObjectName(QStringLiteral("txtnote"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, txtnote);

        tbllistenote = new QTableWidget(frm_note);
        if (tbllistenote->columnCount() < 4)
            tbllistenote->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbllistenote->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tbllistenote->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tbllistenote->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tbllistenote->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tbllistenote->setObjectName(QStringLiteral("tbllistenote"));
        tbllistenote->setGeometry(QRect(200, 160, 571, 311));
        formLayoutWidget_2 = new QWidget(frm_note);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(860, 380, 160, 141));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        btnbulletin = new QPushButton(formLayoutWidget_2);
        btnbulletin->setObjectName(QStringLiteral("btnbulletin"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, btnbulletin);

        btnsupprimernote = new QPushButton(formLayoutWidget_2);
        btnsupprimernote->setObjectName(QStringLiteral("btnsupprimernote"));

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, btnsupprimernote);

        btnmodifiernote = new QPushButton(formLayoutWidget_2);
        btnmodifiernote->setObjectName(QStringLiteral("btnmodifiernote"));

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, btnmodifiernote);

        btnajouternote = new QPushButton(formLayoutWidget_2);
        btnajouternote->setObjectName(QStringLiteral("btnajouternote"));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, btnajouternote);

        lbltitrenote = new QLabel(frm_note);
        lbltitrenote->setObjectName(QStringLiteral("lbltitrenote"));
        lbltitrenote->setGeometry(QRect(490, 30, 111, 16));
        lblrecherchernote = new QLabel(frm_note);
        lblrecherchernote->setObjectName(QStringLiteral("lblrecherchernote"));
        lblrecherchernote->setGeometry(QRect(570, 110, 91, 16));
        txtrecherchenote = new QLineEdit(frm_note);
        txtrecherchenote->setObjectName(QStringLiteral("txtrecherchenote"));
        txtrecherchenote->setGeometry(QRect(572, 130, 201, 22));

        retranslateUi(frm_note);

        QMetaObject::connectSlotsByName(frm_note);
    } // setupUi

    void retranslateUi(QWidget *frm_note)
    {
        frm_note->setWindowTitle(QApplication::translate("frm_note", "Form", Q_NULLPTR));
        btnswitchetudiant->setText(QApplication::translate("frm_note", "ETUDIANT", Q_NULLPTR));
        btnswitchclasse->setText(QApplication::translate("frm_note", "CLASSE", Q_NULLPTR));
        btnswitchmatiere->setText(QApplication::translate("frm_note", "MATIERE", Q_NULLPTR));
        btnswitchnote->setText(QApplication::translate("frm_note", "NOTE", Q_NULLPTR));
        lblnumeroetudiantnote->setText(QApplication::translate("frm_note", "Numero de l' etudiant", Q_NULLPTR));
        lblcodematierenote->setText(QApplication::translate("frm_note", "Code matiere", Q_NULLPTR));
        lblnote->setText(QApplication::translate("frm_note", "Note", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tbllistenote->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("frm_note", "Numero note", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tbllistenote->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("frm_note", "Numero de l' etudiant", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tbllistenote->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("frm_note", "Code matiere", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tbllistenote->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("frm_note", "Note", Q_NULLPTR));
        btnbulletin->setText(QApplication::translate("frm_note", "BULLETIN", Q_NULLPTR));
        btnsupprimernote->setText(QApplication::translate("frm_note", "SUPPRIMER", Q_NULLPTR));
        btnmodifiernote->setText(QApplication::translate("frm_note", "MODIFIER", Q_NULLPTR));
        btnajouternote->setText(QApplication::translate("frm_note", "AJOUTER", Q_NULLPTR));
        lbltitrenote->setText(QApplication::translate("frm_note", "NOTE", Q_NULLPTR));
        lblrecherchernote->setText(QApplication::translate("frm_note", "RECHERCHER", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frm_note: public Ui_frm_note {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_NOTE_H
