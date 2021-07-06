/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Monster_Truck_UI/src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 27), // "on_Publisher_Button_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "on_Manual_clicked"
QT_MOC_LITERAL(4, 58, 15), // "on_Stop_clicked"
QT_MOC_LITERAL(5, 74, 34), // "on_Publish_PWM_main_window_cl..."
QT_MOC_LITERAL(6, 109, 20), // "on_Set_value_clicked"
QT_MOC_LITERAL(7, 130, 23), // "ultrasonic_measurements"
QT_MOC_LITERAL(8, 154, 28), // "optical_encoder_measurements"
QT_MOC_LITERAL(9, 183, 25), // "on_check_dc_motor_clicked"
QT_MOC_LITERAL(10, 209, 27), // "on_lights_on_button_clicked"
QT_MOC_LITERAL(11, 237, 28), // "on_lights_off_button_clicked"
QT_MOC_LITERAL(12, 266, 33), // "on_lights_blinking_button_cli..."
QT_MOC_LITERAL(13, 300, 17), // "get_manual_window"
QT_MOC_LITERAL(14, 318, 14) // "Manual_Window*"

    },
    "MainWindow\0on_Publisher_Button_clicked\0"
    "\0on_Manual_clicked\0on_Stop_clicked\0"
    "on_Publish_PWM_main_window_clicked\0"
    "on_Set_value_clicked\0ultrasonic_measurements\0"
    "optical_encoder_measurements\0"
    "on_check_dc_motor_clicked\0"
    "on_lights_on_button_clicked\0"
    "on_lights_off_button_clicked\0"
    "on_lights_blinking_button_clicked\0"
    "get_manual_window\0Manual_Window*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 14,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Publisher_Button_clicked(); break;
        case 1: _t->on_Manual_clicked(); break;
        case 2: _t->on_Stop_clicked(); break;
        case 3: _t->on_Publish_PWM_main_window_clicked(); break;
        case 4: _t->on_Set_value_clicked(); break;
        case 5: _t->ultrasonic_measurements(); break;
        case 6: _t->optical_encoder_measurements(); break;
        case 7: _t->on_check_dc_motor_clicked(); break;
        case 8: _t->on_lights_on_button_clicked(); break;
        case 9: _t->on_lights_off_button_clicked(); break;
        case 10: _t->on_lights_blinking_button_clicked(); break;
        case 11: { Manual_Window* _r = _t->get_manual_window();
            if (_a[0]) *reinterpret_cast< Manual_Window**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
