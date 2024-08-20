/****************************************************************************
** Meta object code from reading C++ file 'frm_classe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gestion_de_note/frm_classe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frm_classe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_frm_classe_t {
    QByteArrayData data[11];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_frm_classe_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_frm_classe_t qt_meta_stringdata_frm_classe = {
    {
QT_MOC_LITERAL(0, 0, 10), // "frm_classe"
QT_MOC_LITERAL(1, 11, 27), // "on_btnajouterclasse_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 28), // "on_btnmodifierclasse_clicked"
QT_MOC_LITERAL(4, 69, 29), // "on_btnsupprimerclasse_clicked"
QT_MOC_LITERAL(5, 99, 34), // "on_txtrechercherclasse_textCh..."
QT_MOC_LITERAL(6, 134, 4), // "arg1"
QT_MOC_LITERAL(7, 139, 28), // "on_btnswitchetudiant_clicked"
QT_MOC_LITERAL(8, 168, 26), // "on_btnswitchclasse_clicked"
QT_MOC_LITERAL(9, 195, 27), // "on_btnswitchmatiere_clicked"
QT_MOC_LITERAL(10, 223, 24) // "on_btnswitchnote_clicked"

    },
    "frm_classe\0on_btnajouterclasse_clicked\0"
    "\0on_btnmodifierclasse_clicked\0"
    "on_btnsupprimerclasse_clicked\0"
    "on_txtrechercherclasse_textChanged\0"
    "arg1\0on_btnswitchetudiant_clicked\0"
    "on_btnswitchclasse_clicked\0"
    "on_btnswitchmatiere_clicked\0"
    "on_btnswitchnote_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frm_classe[] = {

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

void frm_classe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        frm_classe *_t = static_cast<frm_classe *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnajouterclasse_clicked(); break;
        case 1: _t->on_btnmodifierclasse_clicked(); break;
        case 2: _t->on_btnsupprimerclasse_clicked(); break;
        case 3: _t->on_txtrechercherclasse_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_btnswitchetudiant_clicked(); break;
        case 5: _t->on_btnswitchclasse_clicked(); break;
        case 6: _t->on_btnswitchmatiere_clicked(); break;
        case 7: _t->on_btnswitchnote_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject frm_classe::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_frm_classe.data,
      qt_meta_data_frm_classe,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *frm_classe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frm_classe::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_frm_classe.stringdata0))
        return static_cast<void*>(const_cast< frm_classe*>(this));
    return QWidget::qt_metacast(_clname);
}

int frm_classe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
