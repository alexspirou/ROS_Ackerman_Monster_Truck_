#include <QtGui>
#include <QApplication>
#include "ros/ros.h"
#include "mainwindow.h"
#include "ROS_src/_ros.h"

int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    ros::init(argc, argv, "Monster_Truck_UI");
    _Ros ros_obj;
    MainWindow w;
    w.show();
    return a.exec();

}

