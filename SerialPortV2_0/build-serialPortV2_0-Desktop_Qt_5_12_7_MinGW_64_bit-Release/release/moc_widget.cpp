/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../serialPortV2_0/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[18];
    char stringdata0[490];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 32), // "on_pushButton_open2close_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 26), // "on_pushButton_send_clicked"
QT_MOC_LITERAL(4, 68, 30), // "on_pushButton_clearRec_clicked"
QT_MOC_LITERAL(5, 99, 31), // "on_pushButton_clearSend_clicked"
QT_MOC_LITERAL(6, 131, 31), // "on_pushButton_clear_log_clicked"
QT_MOC_LITERAL(7, 163, 35), // "on_pushButton_detect_serial_c..."
QT_MOC_LITERAL(8, 199, 36), // "on_comboBox_baud_currentIndex..."
QT_MOC_LITERAL(9, 236, 4), // "arg1"
QT_MOC_LITERAL(10, 241, 42), // "on_comboBox_serialName_curren..."
QT_MOC_LITERAL(11, 284, 40), // "on_comboBox_dataBits_currentI..."
QT_MOC_LITERAL(12, 325, 5), // "index"
QT_MOC_LITERAL(13, 331, 40), // "on_comboBox_stopBits_currentI..."
QT_MOC_LITERAL(14, 372, 38), // "on_comboBox_parity_currentInd..."
QT_MOC_LITERAL(15, 411, 35), // "on_checkBox_timer_send_stateC..."
QT_MOC_LITERAL(16, 447, 11), // "timerUpdate"
QT_MOC_LITERAL(17, 459, 30) // "on_checkBox_white_stateChanged"

    },
    "Widget\0on_pushButton_open2close_clicked\0"
    "\0on_pushButton_send_clicked\0"
    "on_pushButton_clearRec_clicked\0"
    "on_pushButton_clearSend_clicked\0"
    "on_pushButton_clear_log_clicked\0"
    "on_pushButton_detect_serial_clicked\0"
    "on_comboBox_baud_currentIndexChanged\0"
    "arg1\0on_comboBox_serialName_currentIndexChanged\0"
    "on_comboBox_dataBits_currentIndexChanged\0"
    "index\0on_comboBox_stopBits_currentIndexChanged\0"
    "on_comboBox_parity_currentIndexChanged\0"
    "on_checkBox_timer_send_stateChanged\0"
    "timerUpdate\0on_checkBox_white_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    1,   90,    2, 0x08 /* Private */,
      10,    1,   93,    2, 0x08 /* Private */,
      11,    1,   96,    2, 0x08 /* Private */,
      13,    1,   99,    2, 0x08 /* Private */,
      14,    1,  102,    2, 0x08 /* Private */,
      15,    1,  105,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    1,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_open2close_clicked(); break;
        case 1: _t->on_pushButton_send_clicked(); break;
        case 2: _t->on_pushButton_clearRec_clicked(); break;
        case 3: _t->on_pushButton_clearSend_clicked(); break;
        case 4: _t->on_pushButton_clear_log_clicked(); break;
        case 5: _t->on_pushButton_detect_serial_clicked(); break;
        case 6: _t->on_comboBox_baud_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_comboBox_serialName_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_comboBox_dataBits_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_comboBox_stopBits_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_comboBox_parity_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_checkBox_timer_send_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->timerUpdate(); break;
        case 13: _t->on_checkBox_white_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
