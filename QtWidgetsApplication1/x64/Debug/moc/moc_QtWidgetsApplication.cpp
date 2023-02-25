/****************************************************************************
** Meta object code from reading C++ file 'QtWidgetsApplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtWidgetsApplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtWidgetsApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtWidgetsApplication_t {
    QByteArrayData data[12];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtWidgetsApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtWidgetsApplication_t qt_meta_stringdata_QtWidgetsApplication = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QtWidgetsApplication"
QT_MOC_LITERAL(1, 21, 12), // "close_window"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "show_choice"
QT_MOC_LITERAL(4, 47, 11), // "choose_sort"
QT_MOC_LITERAL(5, 59, 4), // "int*"
QT_MOC_LITERAL(6, 64, 10), // "start_sort"
QT_MOC_LITERAL(7, 75, 11), // "Insert_Sort"
QT_MOC_LITERAL(8, 87, 1), // "a"
QT_MOC_LITERAL(9, 89, 14), // "Selection_Sort"
QT_MOC_LITERAL(10, 104, 10), // "Radix_Sort"
QT_MOC_LITERAL(11, 115, 10) // "Quick_Sort"

    },
    "QtWidgetsApplication\0close_window\0\0"
    "show_choice\0choose_sort\0int*\0start_sort\0"
    "Insert_Sort\0a\0Selection_Sort\0Radix_Sort\0"
    "Quick_Sort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtWidgetsApplication[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    2,   56,    2, 0x0a /* Public */,
       6,    0,   61,    2, 0x0a /* Public */,
       7,    1,   62,    2, 0x0a /* Public */,
       9,    1,   65,    2, 0x0a /* Public */,
      10,    1,   68,    2, 0x0a /* Public */,
      11,    3,   71,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    8,
    QMetaType::Void, 0x80000000 | 5,    8,
    QMetaType::Void, 0x80000000 | 5,    8,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    8,    2,    2,

       0        // eod
};

void QtWidgetsApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtWidgetsApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->close_window(); break;
        case 1: _t->show_choice(); break;
        case 2: _t->choose_sort((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2]))); break;
        case 3: _t->start_sort(); break;
        case 4: _t->Insert_Sort((*reinterpret_cast< int*(*)>(_a[1]))); break;
        case 5: _t->Selection_Sort((*reinterpret_cast< int*(*)>(_a[1]))); break;
        case 6: _t->Radix_Sort((*reinterpret_cast< int*(*)>(_a[1]))); break;
        case 7: _t->Quick_Sort((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtWidgetsApplication::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QtWidgetsApplication.data,
    qt_meta_data_QtWidgetsApplication,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtWidgetsApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtWidgetsApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtWidgetsApplication.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QtWidgetsApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
