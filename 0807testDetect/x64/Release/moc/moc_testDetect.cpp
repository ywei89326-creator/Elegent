/****************************************************************************
** Meta object code from reading C++ file 'testDetect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../testDetect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testDetect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_testDetect_t {
    QByteArrayData data[21];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_testDetect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_testDetect_t qt_meta_stringdata_testDetect = {
    {
QT_MOC_LITERAL(0, 0, 10), // "testDetect"
QT_MOC_LITERAL(1, 11, 13), // "onImportImage"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "onStartDetect"
QT_MOC_LITERAL(4, 40, 20), // "onStartDetectMarkers"
QT_MOC_LITERAL(5, 61, 15), // "onToggleRoiMode"
QT_MOC_LITERAL(6, 77, 2), // "on"
QT_MOC_LITERAL(7, 80, 13), // "onItemChanged"
QT_MOC_LITERAL(8, 94, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(9, 111, 4), // "item"
QT_MOC_LITERAL(10, 116, 13), // "onItemClicked"
QT_MOC_LITERAL(11, 130, 16), // "onClearSelection"
QT_MOC_LITERAL(12, 147, 9), // "onFitView"
QT_MOC_LITERAL(13, 157, 12), // "onTabChanged"
QT_MOC_LITERAL(14, 170, 5), // "index"
QT_MOC_LITERAL(15, 176, 13), // "onParamEdited"
QT_MOC_LITERAL(16, 190, 13), // "onApplyParams"
QT_MOC_LITERAL(17, 204, 13), // "onResetParams"
QT_MOC_LITERAL(18, 218, 16), // "onSaveParamsFile"
QT_MOC_LITERAL(19, 235, 16), // "onLoadParamsFile"
QT_MOC_LITERAL(20, 252, 18) // "onToggleFullScreen"

    },
    "testDetect\0onImportImage\0\0onStartDetect\0"
    "onStartDetectMarkers\0onToggleRoiMode\0"
    "on\0onItemChanged\0QListWidgetItem*\0"
    "item\0onItemClicked\0onClearSelection\0"
    "onFitView\0onTabChanged\0index\0onParamEdited\0"
    "onApplyParams\0onResetParams\0"
    "onSaveParamsFile\0onLoadParamsFile\0"
    "onToggleFullScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_testDetect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    1,   92,    2, 0x08 /* Private */,
       7,    1,   95,    2, 0x08 /* Private */,
      10,    1,   98,    2, 0x08 /* Private */,
      11,    0,  101,    2, 0x08 /* Private */,
      12,    0,  102,    2, 0x08 /* Private */,
      13,    1,  103,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,
      19,    0,  110,    2, 0x08 /* Private */,
      20,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void testDetect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<testDetect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onImportImage(); break;
        case 1: _t->onStartDetect(); break;
        case 2: _t->onStartDetectMarkers(); break;
        case 3: _t->onToggleRoiMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->onItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->onClearSelection(); break;
        case 7: _t->onFitView(); break;
        case 8: _t->onTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onParamEdited(); break;
        case 10: _t->onApplyParams(); break;
        case 11: _t->onResetParams(); break;
        case 12: _t->onSaveParamsFile(); break;
        case 13: _t->onLoadParamsFile(); break;
        case 14: _t->onToggleFullScreen(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject testDetect::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_testDetect.data,
    qt_meta_data_testDetect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *testDetect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *testDetect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_testDetect.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int testDetect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
