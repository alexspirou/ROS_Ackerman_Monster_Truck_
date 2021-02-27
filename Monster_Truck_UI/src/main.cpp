#include <QtGui>
#include <QApplication>
#include "ros/ros.h"
#include "mainwindow.h"
int main(int argc, char **argv) {
    QApplication a(argc, argv);

    MainWindow w(argc,argv);
    w.show();
    ros::spinOnce();

    return a.exec();
}

