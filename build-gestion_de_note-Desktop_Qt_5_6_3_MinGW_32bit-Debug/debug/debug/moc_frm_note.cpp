/****************************************************************************
** Meta object code from reading C++ file 'frm_note.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gestion_de_note/frm_note.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frm_note.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_frm_note_t {
    QByteArrayData data[12];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_frm_note_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_frm_note_t qt_meta_stringdata_frm_note = {
    {
QT_MOC_LITERAL(0, 0, 8), // "frm_note"
QT_MOC_LITERAL(1, 9, 28), // "on_btnswitchetudiant_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 26), // "on_btnswitchclasse_clicked"
QT_MOC_LITERAL(4, 66, 27), // "on_btnswitchmatiere_clicked"
QT_MOC_LITERAL(5, 94, 24), // "on_btnswitchnote_clicked"
QT_MOC_LITERAL(6, 119, 25), // "on_btnajouternote_clicked"
QT_MOC_LITERAL(7, 145, 26), // "on_btnmodifiernote_clicked"
QT_MOC_LITERAL(8, 172, 27), // "on_btnsupprimernote_clicked"
QT_MOC_LITERAL(9, 200, 22), // "on_btnbulletin_clicked"
QT_MOC_LITERAL(10, 223, 31), // "on_txtrecherchenote_textChanged"
QT_MOC_LITERAL(11, 255, 4) // "arg1"

    },
    "frm_note\0on_btnswitchetudiant_clicked\0"
    "\0on_btnswitchclasse_clicked\0"
    "on_btnswitchmatiere_clicked\0"
    "on_btnswitchnote_clicked\0"
    "on_btnajouternote_clicked\0"
    "on_btnmodifiernote_clicked\0"
    "on_btnsupprimernote_clicked\0"
    "on_btnbulletin_clicked\0"
    "on_txtrecherchenote_textChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frm_note[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void frm_note::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        frm_note *_t = static_cast<frm_note *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnswitchetudiant_clicked(); break;
        case 1: _t->on_btnswitchclasse_clicked(); break;
        case 2: _t->on_btnswitchmatiere_clicked(); break;
        case 3: _t->on_btnswitchnote_clicked(); break;
        case 4: _t->on_btnajouternote_clicked(); break;
        case 5: _t->on_btnmodifiernote_clicked(); break;
        case 6: _t->on_btnsupprimernote_clicked(); break;
        case 7: _t->on_btnbulletin_clicked(); break;
        case 8: _t->on_txtrecherchenote_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject frm_note::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_frm_note.data,
      qt_meta_data_frm_note,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *frm_note::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frm_note::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_frm_note.stringdata0))
        return static_cast<void*>(const_cast< frm_note*>(this));
    return QWidget::qt_metacast(_clname);
}

int frm_note::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
