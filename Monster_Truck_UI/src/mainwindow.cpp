#include "mainwindow.h"
#include "ui_mainwindow.h"
//QT
#include "QMessageBox"
#include "QDebug"
#include "QProcess"
//ROS MSGS

MainWindow::MainWindow(QWidget *parent) :

    QMainWindow(parent),
    ui (new Ui::MainWindow)
{

    ui->setupUi(this);
    n = new ros::NodeHandle();
    pwm_pub = n->advertise<geometry_msgs::Twist>("cmd_vel", 200);
    qt_command = n->advertise<std_msgs::UInt16>("qt", 200);
    qDebug() << "COo";
}

MainWindow::~MainWindow()
{
    delete ui;
    delete n;
}

void MainWindow::on_Publisher_Button_clicked()
{

        command.data = 2;
        qt_command.publish(command);
}


void MainWindow::on_Manual_clicked()
{
    command.data = 1;
    qt_command.publish(command);

    /*
     new window here
     implemantation for manual movement
     read keyboard inputs

    */


}

void MainWindow::on_Stop_clicked()
{
    command.data = 0;
    qt_command.publish(command);
}


void MainWindow::on_Publish_PWM_main_window_clicked()
{

    pwm_pub.publish(msg);
}

void MainWindow::on_Set_value_clicked()
{
    int pwm_value = ui->PWM_spinBox->text().toInt();
    msg.linear.x  = pwm_value;
}
