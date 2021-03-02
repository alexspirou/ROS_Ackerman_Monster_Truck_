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
    ros_f.set_pwm(0);
    ros_f.pwm_publisher();
    ros_f.qt_command_publisher(0);
    ui->setupUi(this);

    qDebug() << "Constructor OK";
}

MainWindow::~MainWindow()
{
    ros_f.set_pwm(0);
    ros_f.pwm_publisher();
    ros_f.qt_command_publisher(0);
    delete ui;
    qDebug() << "Destructor OK";
}

void MainWindow::on_Publisher_Button_clicked()
{

    ros_f.qt_command_publisher(2);
}


void MainWindow::on_Manual_clicked()
{

    ros_f.qt_command_publisher(1);
    /*
     new window here
     implemantation for manual movement
     read keyboard inputs

    */


}

void MainWindow::on_Stop_clicked()
{
    ros_f.qt_command_publisher(0);
}


void MainWindow::on_Publish_PWM_main_window_clicked()
{
    ros_f.pwm_publisher();
}

void MainWindow::on_Set_value_clicked()
{
    int pwm_value = ui->PWM_spinBox->text().toInt();
    ros_f.set_pwm(pwm_value);
}


void MainWindow::on_start_measurments_clicked()
{

}

void MainWindow::on_start_measurments_pressed()
{
    ros_f.ultrasonic_subscriber();
    ui->left_ultrasonic_lcd->display(ultrasonic_msg.y);
    ui->middle_ultrasonic_lcd->display(ultrasonic_msg.x);
    ui->right_ultrasonic_lcd->display(ultrasonic_msg.z);

}
