#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "ros/ros.h"
#include "../src/ROS_src/_ros.h"
#include "Events/keyboard_events.h"
#include "Manual_Window/manual_window.h"


namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
 Q_OBJECT
public:

    explicit MainWindow(QWidget *parent = nullptr);
    virtual ~MainWindow();


public Q_SLOTS:
    void on_Publisher_Button_clicked();
    void on_Manual_clicked();
    void on_Stop_clicked();
    void on_Publish_PWM_main_window_clicked();
    void on_Set_value_clicked();
    void ultrasonic_measurements();


private:
    Ui::MainWindow *ui;
    _Ros* ros_f;
    QTimer* timer;
    Keyboard_Events key;
    Manual_Window* manual_window;

};

#endif // MAINWINDOW_H
