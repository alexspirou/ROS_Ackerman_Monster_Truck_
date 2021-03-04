#include <QtGui>
#include <QApplication>
#include "ros/ros.h"
#include "mainwindow.h"

int main(int argc, char **argv) {
    QApplication a(argc, argv);
    ros::init(argc, argv, "Monster_Truck_UI");

    MainWindow w;
    w.show();

    qDebug() << "main";

    return a.exec();

}

