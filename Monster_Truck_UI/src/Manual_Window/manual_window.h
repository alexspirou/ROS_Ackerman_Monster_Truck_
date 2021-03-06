#ifndef MANUAL_WINDOW_H
#define MANUAL_WINDOW_H

#include <QDialog>
#include <string>
#include "../Events/keyboard_events.h"
#include <QTimer>
#include <QEvent>
#include <QKeyEvent>
namespace Ui {
class Manual_Window;
}

class Manual_Window : public QDialog
{
    Q_OBJECT

public:
    explicit Manual_Window(QWidget *parent = nullptr);
    ~Manual_Window();


public Q_SLOTS:
    void on_info_button_clicked();
    void keyboard_events();

private:

    Ui::Manual_Window *ui;
    Keyboard_Events* key;
    QTimer* timer;
    QEvent* event;
    void key_press(QKeyEvent* event);







    const char* info_message = "Keyboard Teleoparation Info\n\n"

            "-Move Forward : Up Arrow\n\n"

            "-Move Backward: Down Arrow\n\n"

            "-Turn Left :  Left Arrow\n\n"

            "-Turn Rigth : Right Arrow\n\n"

            "-Stop : Space ";
};

#endif // MANUAL_WINDOW_H
