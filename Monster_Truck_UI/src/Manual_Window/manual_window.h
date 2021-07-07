#ifndef MANUAL_WINDOW_H
#define MANUAL_WINDOW_H

#include <QDialog>
#include <string>
#include "../Events/keyboard_events.h"
#include <QTimer>
#include <QEvent>
#include <QKeyEvent>
#include "../ROS_src/_ros.h"
#include "../ROS_src/rviz.h"

namespace Ui {
class Manual_Window;
}

class Manual_Window : public QDialog
{
    Q_OBJECT

public:
    explicit Manual_Window(QWidget *parent = nullptr);
    virtual ~Manual_Window() override;
    virtual void keyPressEvent(QKeyEvent *event) override;
    virtual void keyReleaseEvent(QKeyEvent *event) override;

public Q_SLOTS:
    void on_info_button_clicked();

private:

    Ui::Manual_Window *ui;
    Keyboard_Events* key;
    QTimer* timer;
    QEvent* event;
    _Ros* ros_f;
    rviz* rviz_obj;
    int x = 0;



    const char* info_message = "Keyboard Teleoparation Info\n\n"

            "-Move Forward : Num 8\n\n"

            "-Move Backward: Num 2\n\n"

            "-Turn Left :  Num 4\n\n"

            "-Turn Rigth : Num 6\n\n"

            "-Stop : Z \n\n"
            "****************************************************\n"
            "For better control press num lock and use the numpad ";
};

#endif // MANUAL_WINDOW_H
