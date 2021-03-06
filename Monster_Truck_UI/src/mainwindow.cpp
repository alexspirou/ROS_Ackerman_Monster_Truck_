#include "mainwindow.h"
#include "ui_mainwindow.h"
//QT
#include "QMessageBox"
#include "QDebug"
#include "QProcess"
#include "Events/keyboard_events.h"

//ROS MSGS

MainWindow::MainWindow(QWidget *parent) :

    QMainWindow(parent),
    ui (new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Monster Truck Ui ");
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(ultrasonic_measurements()));
    timer->start(500);
    manual_window = new Manual_Window();
    //ROS
    ros_f = new _Ros();
    ros_f->ultrasonic_subscriber();
    qDebug() << "Constructor OK";

}

MainWindow::~MainWindow()
{
    ros_f->set_pwm(0);
    ros_f->pwm_publisher();
    ros_f->qt_command_publisher(0);
    delete ui;
    qDebug() << "Destructor OK";
}

void MainWindow::on_Publisher_Button_clicked()
{

    ros_f->qt_command_publisher(2);
}


void MainWindow::on_Manual_clicked()
{

    ros_f->qt_command_publisher(1);

    manual_window->show();

    manual_window->exec();
    /*
     new window here
     implemantation for manual movement
     read keyboard inputs

    */


}

void MainWindow::on_Stop_clicked()
{
    ros_f->qt_command_publisher(0);
}


void MainWindow::on_Publish_PWM_main_window_clicked()
{
    ros_f->pwm_publisher();
}

void MainWindow::on_Set_value_clicked()
{
    int pwm_value = ui->PWM_spinBox->text().toInt();
    ros_f->set_pwm(pwm_value);
}



void MainWindow::ultrasonic_measurements()
{
    ui->left_ultrasonic_lcd->display(ultrasonic_msg.y );
    ui->middle_ultrasonic_lcd->display(ultrasonic_msg.x );
    ui->right_ultrasonic_lcd->display(ultrasonic_msg.z);
    ros_f->ultrasonic_subscriber();
}

