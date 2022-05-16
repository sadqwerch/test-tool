#include "../../../../softengine/bupt/master/mainengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainEngine_t {
    QByteArrayData data[20];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainEngine_t qt_meta_stringdata_MainEngine = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainEngine"
    },
    "MainEngine\0SpeedDispatchSignal\0\0roomid\0"
    "OnModeClick\0id\0SlaveEngStart\0SlaveEngStop\0"
    "SlaveEngRequestWind\0tar_t\0spped\0"
    "SlaveEngStopWind\0SpeedDispatch\0"
    "UpdateRoomTemp\0roomtemp\0windspeed\0"
    "OnOffMainEngControl\0SetMonitorVisible\0"
    "SetReportVisible\0SendWindToSlaveEngine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   77,    2, 0x0a /* Public */,
       6,    1,   80,    2, 0x0a /* Public */,
       7,    1,   83,    2, 0x0a /* Public */,
       8,    3,   86,    2, 0x0a /* Public */,
      11,    1,   93,    2, 0x0a /* Public */,
      12,    1,   96,    2, 0x0a /* Public */,
      13,    3,   99,    2, 0x0a /* Public */,
      16,    0,  106,    2, 0x0a /* Public */,
      17,    0,  107,    2, 0x08 /* Private */,
      18,    0,  108,    2, 0x08 /* Private */,
      19,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    9,   10,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainEngine *_t = static_cast<MainEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SpeedDispatchSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnModeClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SlaveEngStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SlaveEngStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SlaveEngRequestWind((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->SlaveEngStopWind((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->SpeedDispatch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->UpdateRoomTemp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->OnOffMainEngControl(); break;
        case 9: _t->SetMonitorVisible(); break;
        case 10: _t->SetReportVisible(); break;
        case 11: _t->SendWindToSlaveEngine(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainEngine::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainEngine::SpeedDispatchSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainEngine::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainEngine.data,
      qt_meta_data_MainEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainEngine.stringdata0))
        return static_cast<void*>(const_cast< MainEngine*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void MainEngine::SpeedDispatchSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
