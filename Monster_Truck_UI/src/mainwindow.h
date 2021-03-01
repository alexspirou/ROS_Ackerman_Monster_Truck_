#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ros/ros.h"

#include "ROS_src/publishers_subscribers/Publishers.h"
#include "std_msgs/String.h"
#include "std_msgs/UInt16.h"
#include "geometry_msgs/Twist.h"


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


private:
    Ui::MainWindow *ui;
    ros::NodeHandle *n;
    ros::Publisher pwm_pub ;
    ros::Publisher qt_command ;
    int count = 0;
    geometry_msgs::Twist msg;
    std_msgs::UInt16 command;

};

#endif // MAINWINDOW_H
