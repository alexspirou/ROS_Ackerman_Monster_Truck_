#include <QtGui>
#include <QApplication>
#include "ros/ros.h"
#include "mainwindow.h"
int main(int argc, char **argv) {
    QApplication a(argc, argv);
    ros::init(argc, argv, "talker");

    MainWindow w;
    w.show();
    ros::spinOnce();

    return a.exec();
}

