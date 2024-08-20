/****************************************************************************
** Meta object code from reading C++ file 'frm_matiere.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gestion_de_note/frm_matiere.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frm_matiere.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_frm_matiere_t {
    QByteArrayData data[11];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_frm_matiere_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_frm_matiere_t qt_meta_stringdata_frm_matiere = {
    {
QT_MOC_LITERAL(0, 0, 11), // "frm_matiere"
QT_MOC_LITERAL(1, 12, 26), // "on_btnajoutmatiere_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 26), // "on_btnmodifmatiere_clicked"
QT_MOC_LITERAL(4, 67, 26), // "on_btnsupprmatiere_clicked"
QT_MOC_LITERAL(5, 94, 34), // "on_txtrecherchematiere_textCh..."
QT_MOC_LITERAL(6, 129, 4), // "arg1"
QT_MOC_LITERAL(7, 134, 28), // "on_btnswitchetudiant_clicked"
QT_MOC_LITERAL(8, 163, 26), // "on_btnswitchclasse_clicked"
QT_MOC_LITERAL(9, 190, 27), // "on_btnswitchmatiere_clicked"
QT_MOC_LITERAL(10, 218, 24) // "on_btnswitchnote_clicked"

    },
    "frm_matiere\0on_btnajoutmatiere_clicked\0"
    "\0on_btnmodifmatiere_clicked\0"
    "on_btnsupprmatiere_clicked\0"
    "on_txtrecherchematiere_textChanged\0"
    "arg1\0on_btnswitchetudiant_clicked\0"
    "on_btnswitchclasse_clicked\0"
    "on_btnswitchmatiere_clicked\0"
    "on_btnswitchnote_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frm_matiere[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    1,   57,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void frm_matiere::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        frm_matiere *_t = static_cast<frm_matiere *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnajoutmatiere_clicked(); break;
        case 1: _t->on_btnmodifmatiere_clicked(); break;
        case 2: _t->on_btnsupprmatiere_clicked(); break;
        case 3: _t->on_txtrecherchematiere_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_btnswitchetudiant_clicked(); break;
        case 5: _t->on_btnswitchclasse_clicked(); break;
        case 6: _t->on_btnswitchmatiere_clicked(); break;
        case 7: _t->on_btnswitchnote_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject frm_matiere::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_frm_matiere.data,
      qt_meta_data_frm_matiere,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *frm_matiere::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frm_matiere::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_frm_matiere.stringdata0))
        return static_cast<void*>(const_cast< frm_matiere*>(this));
    return QWidget::qt_metacast(_clname);
}

int frm_matiere::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
