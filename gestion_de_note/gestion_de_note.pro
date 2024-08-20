#-------------------------------------------------
#
# Project created by QtCreator 2023-09-18T07:00:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gestion_de_note
TEMPLATE = app


SOURCES += main.cpp\
        frm_etudiant.cpp \
    frm_matiere.cpp \
    frm_classe.cpp \
    frm_note.cpp \
    model_etudiant.cpp \
    model_matiere.cpp \
    model_classe.cpp \
    model_note.cpp \
    model_connexion.cpp

HEADERS  += frm_etudiant.h \
    frm_matiere.h \
    frm_classe.h \
    frm_note.h \
    model_etudiant.h \
    model_matiere.h \
    model_classe.h \
    model_note.h \
    model_connexion.h

FORMS    += frm_etudiant.ui \
    frm_matiere.ui \
    frm_classe.ui \
    frm_note.ui

QT += core
QT += sql
