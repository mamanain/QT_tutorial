/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Lesson10/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[15];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 7), // "sendInt"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 1), // "n"
QT_MOC_LITERAL(4, 18, 10), // "sendString"
QT_MOC_LITERAL(5, 29, 1), // "s"
QT_MOC_LITERAL(6, 31, 7), // "sendPen"
QT_MOC_LITERAL(7, 39, 3), // "pen"
QT_MOC_LITERAL(8, 43, 9), // "sendWidth"
QT_MOC_LITERAL(9, 53, 9), // "sendReset"
QT_MOC_LITERAL(10, 63, 6), // "getInt"
QT_MOC_LITERAL(11, 70, 9), // "getString"
QT_MOC_LITERAL(12, 80, 14), // "redefineValues"
QT_MOC_LITERAL(13, 95, 8), // "getWidth"
QT_MOC_LITERAL(14, 104, 8) // "getReset"

    },
    "Widget\0sendInt\0\0n\0sendString\0s\0sendPen\0"
    "pen\0sendWidth\0sendReset\0getInt\0getString\0"
    "redefineValues\0getWidth\0getReset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       8,    1,   73,    2, 0x06 /* Public */,
       9,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   77,    2, 0x0a /* Public */,
      11,    1,   80,    2, 0x0a /* Public */,
      12,    0,   83,    2, 0x0a /* Public */,
      13,    1,   84,    2, 0x0a /* Public */,
      14,    0,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QPen,    7,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sendString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendPen((*reinterpret_cast< QPen(*)>(_a[1]))); break;
        case 3: _t->sendWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sendReset(); break;
        case 5: _t->getInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->getString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->redefineValues(); break;
        case 8: _t->getWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->getReset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Widget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::sendInt)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Widget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::sendString)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Widget::*_t)(QPen );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::sendPen)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Widget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::sendWidth)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Widget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::sendReset)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Widget::sendInt(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Widget::sendString(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Widget::sendPen(QPen _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Widget::sendWidth(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Widget::sendReset()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE