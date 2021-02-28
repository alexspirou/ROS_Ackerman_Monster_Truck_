#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ros/ros.h"

#include "ROS_src/publishers_subscribers/Publishers.h"




class MainWindow : public QMainWindow
{
 Q_OBJECT
public:

    explicit MainWindow(QWidget *parent = nullptr);
    virtual ~MainWindow();

public Q_SLOTS:
    void on_Publisher_Button_clicked();

private:
    MainWindow *ui;
    ros::NodeHandle *n;
    ros::Publisher chatter_pub ;

};

#endif // MAINWINDOW_H
