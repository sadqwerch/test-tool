/****************************************************************************
** Meta object code from reading C++ file 'slaveengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../softengine/bupt/slave/slaveengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slaveengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SlaveEngine_t {
    QByteArrayData data[17];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SlaveEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SlaveEngine_t qt_meta_stringdata_SlaveEngine = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SlaveEngine"
QT_MOC_LITERAL(1, 12, 10), // "Openfailed"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "OnWindSpeedClick"
QT_MOC_LITERAL(4, 41, 2), // "id"
QT_MOC_LITERAL(5, 44, 15), // "OpenConditioner"
QT_MOC_LITERAL(6, 60, 5), // "model"
QT_MOC_LITERAL(7, 66, 16), // "CloseConditioner"
QT_MOC_LITERAL(8, 83, 11), // "ReceiveWind"
QT_MOC_LITERAL(9, 95, 4), // "mode"
QT_MOC_LITERAL(10, 100, 15), // "HandleOpenClose"
QT_MOC_LITERAL(11, 116, 14), // "AddTemperature"
QT_MOC_LITERAL(12, 131, 14), // "MinTemperature"
QT_MOC_LITERAL(13, 146, 12), // "LooseConnect"
QT_MOC_LITERAL(14, 159, 8), // "RegressT"
QT_MOC_LITERAL(15, 168, 13), // "ChangeTargetT"
QT_MOC_LITERAL(16, 182, 6) // "JudgeT"

    },
    "SlaveEngine\0Openfailed\0\0OnWindSpeedClick\0"
    "id\0OpenConditioner\0model\0CloseConditioner\0"
    "ReceiveWind\0mode\0HandleOpenClose\0"
    "AddTemperature\0MinTemperature\0"
    "LooseConnect\0RegressT\0ChangeTargetT\0"
    "JudgeT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SlaveEngine[] = {

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
       1,    0,   74,    2, 0x0a /* Public */,
       3,    1,   75,    2, 0x0a /* Public */,
       5,    1,   78,    2, 0x0a /* Public */,
       7,    0,   81,    2, 0x0a /* Public */,
       8,    1,   82,    2, 0x0a /* Public */,
      10,    0,   85,    2, 0x0a /* Public */,
      11,    0,   86,    2, 0x0a /* Public */,
      12,    0,   87,    2, 0x0a /* Public */,
      13,    0,   88,    2, 0x0a /* Public */,
      14,    0,   89,    2, 0x08 /* Private */,
      15,    0,   90,    2, 0x08 /* Private */,
      16,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SlaveEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SlaveEngine *_t = static_cast<SlaveEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Openfailed(); break;
        case 1: _t->OnWindSpeedClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OpenConditioner((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->CloseConditioner(); break;
        case 4: _t->ReceiveWind((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->HandleOpenClose(); break;
        case 6: _t->AddTemperature(); break;
        case 7: _t->MinTemperature(); break;
        case 8: _t->LooseConnect(); break;
        case 9: _t->RegressT(); break;
        case 10: _t->ChangeTargetT(); break;
        case 11: _t->JudgeT(); break;
        default: ;
        }
    }
}

const QMetaObject SlaveEngine::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SlaveEngine.data,
      qt_meta_data_SlaveEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SlaveEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SlaveEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SlaveEngine.stringdata0))
        return static_cast<void*>(const_cast< SlaveEngine*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SlaveEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
