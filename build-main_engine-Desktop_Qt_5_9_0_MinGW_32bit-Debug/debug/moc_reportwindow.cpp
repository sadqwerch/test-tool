/****************************************************************************
** Meta object code from reading C++ file 'reportwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../softengine/bupt/master/reportwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reportwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReportWindow_t {
    QByteArrayData data[15];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReportWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReportWindow_t qt_meta_stringdata_ReportWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ReportWindow"
QT_MOC_LITERAL(1, 13, 12), // "FetchAllData"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 29), // "QVector<SingleEngReportData>&"
QT_MOC_LITERAL(4, 57, 4), // "data"
QT_MOC_LITERAL(5, 62, 12), // "ClearAllData"
QT_MOC_LITERAL(6, 75, 9), // "MakeTable"
QT_MOC_LITERAL(7, 85, 10), // "UpdateData"
QT_MOC_LITERAL(8, 96, 9), // "UpdateAll"
QT_MOC_LITERAL(9, 106, 12), // "ProcessClick"
QT_MOC_LITERAL(10, 119, 3), // "row"
QT_MOC_LITERAL(11, 123, 3), // "col"
QT_MOC_LITERAL(12, 127, 8), // "ClearAll"
QT_MOC_LITERAL(13, 136, 13), // "ChangeRoomNum"
QT_MOC_LITERAL(14, 150, 11) // "FormatClick"

    },
    "ReportWindow\0FetchAllData\0\0"
    "QVector<SingleEngReportData>&\0data\0"
    "ClearAllData\0MakeTable\0UpdateData\0"
    "UpdateAll\0ProcessClick\0row\0col\0ClearAll\0"
    "ChangeRoomNum\0FormatClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReportWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    2,   66,    2, 0x0a /* Public */,
      12,    0,   71,    2, 0x0a /* Public */,
      13,    0,   72,    2, 0x0a /* Public */,
      14,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ReportWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReportWindow *_t = static_cast<ReportWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FetchAllData((*reinterpret_cast< QVector<SingleEngReportData>(*)>(_a[1]))); break;
        case 1: _t->ClearAllData(); break;
        case 2: _t->MakeTable(); break;
        case 3: _t->UpdateData(); break;
        case 4: _t->UpdateAll(); break;
        case 5: _t->ProcessClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->ClearAll(); break;
        case 7: _t->ChangeRoomNum(); break;
        case 8: _t->FormatClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ReportWindow::*_t)(QVector<SingleEngReportData> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReportWindow::FetchAllData)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ReportWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReportWindow::ClearAllData)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ReportWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ReportWindow.data,
      qt_meta_data_ReportWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ReportWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReportWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReportWindow.stringdata0))
        return static_cast<void*>(const_cast< ReportWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int ReportWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ReportWindow::FetchAllData(QVector<SingleEngReportData> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReportWindow::ClearAllData()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
