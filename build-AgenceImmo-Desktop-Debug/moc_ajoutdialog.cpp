/****************************************************************************
** Meta object code from reading C++ file 'ajoutdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AgenceImmo/ajoutdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ajoutdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ajoutDialog_t {
    QByteArrayData data[9];
    char stringdata[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ajoutDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ajoutDialog_t qt_meta_stringdata_ajoutDialog = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 23),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 21),
QT_MOC_LITERAL(4, 59, 24),
QT_MOC_LITERAL(5, 84, 24),
QT_MOC_LITERAL(6, 109, 24),
QT_MOC_LITERAL(7, 134, 24),
QT_MOC_LITERAL(8, 159, 20)
    },
    "ajoutDialog\0on_pushButton_2_clicked\0"
    "\0on_pushButton_clicked\0on_upload_image1_clicked\0"
    "on_upload_image2_clicked\0"
    "on_upload_image3_clicked\0"
    "on_upload_image4_clicked\0on_bouton_ok_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ajoutDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08,
       3,    0,   50,    2, 0x08,
       4,    0,   51,    2, 0x08,
       5,    0,   52,    2, 0x08,
       6,    0,   53,    2, 0x08,
       7,    0,   54,    2, 0x08,
       8,    0,   55,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ajoutDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ajoutDialog *_t = static_cast<ajoutDialog *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_upload_image1_clicked(); break;
        case 3: _t->on_upload_image2_clicked(); break;
        case 4: _t->on_upload_image3_clicked(); break;
        case 5: _t->on_upload_image4_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ajoutDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ajoutDialog.data,
      qt_meta_data_ajoutDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *ajoutDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ajoutDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ajoutDialog.stringdata))
        return static_cast<void*>(const_cast< ajoutDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ajoutDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
