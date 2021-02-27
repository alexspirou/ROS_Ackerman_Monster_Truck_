#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ros/ros.h"

#include "ROS_src/publishers_subscribers/Publishers.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{

public:
    explicit MainWindow(int argc, char** argv,QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    ros::NodeHandle *n;
    ros::Publisher chatter_pub ;
    void on_Publisher_Button_clicked();

};

#endif // MAINWINDOW_H
