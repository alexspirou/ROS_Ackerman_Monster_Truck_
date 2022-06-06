#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "ros/ros.h"
#include "../src/ROS_src/_ros.h"
#include "Events/keyboard_events.h"
#include "Manual_Window/manual_window.h"
#include "Camera_Window/Cameradialog.h"


namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
 Q_OBJECT
public:

    explicit MainWindow(QWidget *parent = nullptr);
    virtual ~MainWindow() override;
    virtual void keyPressEvent(QKeyEvent *event) override;
    enum qtCommandToArduino {STOP = 0, MANUAL = 1, AUTONAV = 2, CHECKMOTORS = 4};
    enum ledCommands {ON = 0, OFF = 1 , BLINK = 3};

public Q_SLOTS:
    void on_auto_button_clicked();              //Auto navigation
    void on_Manual_clicked();                   //Manual dialog exec
    void on_Stop_clicked();                     //Stop robot
    void on_Publish_PWM_main_window_clicked();  
    void ultrasonic_measurements();
    void optical_encoder_measurements();
    void on_check_dc_motor_clicked();
    void on_lights_on_button_clicked();
    void on_lights_off_button_clicked();
    void on_lights_blinking_button_clicked();
    void on_m_CameraDlgBtn_clicked();
    Manual_Window* get_manual_window(){return manual_window; }


private:
    Ui::MainWindow *ui;
    _Ros* ros_obj;
    QTimer* timer;
    Keyboard_Events key;
    Manual_Window* manual_window;
    CameraDialog* m_CameraWindow;
};

#endif // MAINWINDOW_H
