/****************************************************************************
** Meta object code from reading C++ file 'stats.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AgenceImmo/stats.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stats.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Stats_t {
    QByteArrayData data[15];
    char stringdata[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Stats_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Stats_t qt_meta_stringdata_Stats = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Stats"
QT_MOC_LITERAL(1, 6, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "on_chkMaison_clicked"
QT_MOC_LITERAL(4, 50, 18), // "on_chkAppt_clicked"
QT_MOC_LITERAL(5, 69, 21), // "on_chkChateau_clicked"
QT_MOC_LITERAL(6, 91, 22), // "on_chkCommerce_clicked"
QT_MOC_LITERAL(7, 114, 20), // "on_chkBureau_clicked"
QT_MOC_LITERAL(8, 135, 21), // "on_chkTerrain_clicked"
QT_MOC_LITERAL(9, 157, 19), // "on_chkFerme_clicked"
QT_MOC_LITERAL(10, 177, 19), // "on_chkAutre_clicked"
QT_MOC_LITERAL(11, 197, 22), // "on_datefin_dateChanged"
QT_MOC_LITERAL(12, 220, 4), // "date"
QT_MOC_LITERAL(13, 225, 24), // "on_datedebut_dateChanged"
QT_MOC_LITERAL(14, 250, 18) // "on_chkTous_clicked"

    },
    "Stats\0on_pushButton_clicked\0\0"
    "on_chkMaison_clicked\0on_chkAppt_clicked\0"
    "on_chkChateau_clicked\0on_chkCommerce_clicked\0"
    "on_chkBureau_clicked\0on_chkTerrain_clicked\0"
    "on_chkFerme_clicked\0on_chkAutre_clicked\0"
    "on_datefin_dateChanged\0date\0"
    "on_datedebut_dateChanged\0on_chkTous_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Stats[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    1,   83,    2, 0x08 /* Private */,
      13,    1,   86,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   12,
    QMetaType::Void, QMetaType::QDate,   12,
    QMetaType::Void,

       0        // eod
};

void Stats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Stats *_t = static_cast<Stats *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_chkMaison_clicked(); break;
        case 2: _t->on_chkAppt_clicked(); break;
        case 3: _t->on_chkChateau_clicked(); break;
        case 4: _t->on_chkCommerce_clicked(); break;
        case 5: _t->on_chkBureau_clicked(); break;
        case 6: _t->on_chkTerrain_clicked(); break;
        case 7: _t->on_chkFerme_clicked(); break;
        case 8: _t->on_chkAutre_clicked(); break;
        case 9: _t->on_datefin_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 10: _t->on_datedebut_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 11: _t->on_chkTous_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Stats::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Stats.data,
      qt_meta_data_Stats,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Stats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Stats::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Stats.stringdata))
        return static_cast<void*>(const_cast< Stats*>(this));
    return QDialog::qt_metacast(_clname);
}

int Stats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
