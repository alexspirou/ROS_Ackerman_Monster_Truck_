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
    //Timers for ultrasonig sensors data
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(ultrasonic_measurements()));
    connect(timer, SIGNAL(timeout()),this,SLOT(optical_encoder_measurements()));
    timer->start(500);

    //manual window
    manual_window = new Manual_Window();

    //ROS
    ros_obj = new _Ros();
    ros_obj->ultrasonic_subscriber();
}
//Destructor
MainWindow::~MainWindow()
{
    ros_obj->set_pwm_value(0);
    ros_obj->pwm_value_publisher();
    ros_obj->qt_command_publisher(0);
    delete ui; delete ros_obj;
}
//Auto navigation from arduino
void MainWindow::on_auto_button_clicked()
{
    ros_obj->qt_command_publisher(2);
}
//Open dialog for manual teleop
void MainWindow::on_Manual_clicked()
{
    ros_obj->qt_command_publisher(1);
    manual_window->show();
    manual_window->exec();
    ros_obj->qt_command_publisher(0);
}
//Stop Robot
void MainWindow::on_Stop_clicked()
{
    ros_obj->qt_command_publisher(0);
}
//Set value for desirable PWM value
void MainWindow::on_Set_value_clicked()
{

}
//Publisher for pwm values
void MainWindow::on_Publish_PWM_main_window_clicked()
{
    int pwm_value = ui->PWM_spinBox->text().toInt() * 2;
    ros_obj->set_pwm_value(pwm_value);
    ros_obj->pwm_value_publisher();
}
//Data from ultrasonic sensors
void MainWindow::ultrasonic_measurements()
{
    ui->left_ultrasonic_lcd->display(ultrasonic_msg.y );
    ui->middle_ultrasonic_lcd->display(ultrasonic_msg.x );
    ui->right_ultrasonic_lcd->display(ultrasonic_msg.z);
    ros_obj->ultrasonic_subscriber();
}
//Data from optical encoder
void MainWindow::optical_encoder_measurements()
{
    ui->optical_encoder_lcd->display(optical_encoder_msg.data);
    ros_obj->oe_subscriber();

}
//Check if motors works fine
void MainWindow::on_check_dc_motor_clicked()
{
    ros_obj->qt_command_publisher(4);
}
//Turn on LED
void MainWindow::on_lights_on_button_clicked()
{
    ros_obj->led_command_publisher(1);
}
//Turn off LED
void MainWindow::on_lights_off_button_clicked()
{
    ros_obj->led_command_publisher(0);
}
//Blink LED
void MainWindow::on_lights_blinking_button_clicked()
{
    ros_obj->led_command_publisher(3);

}
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())
    {
        case Qt::Key_Z:
        ros_obj->led_command_publisher(1);
        break;
        case Qt::Key_X:
        ros_obj->led_command_publisher(0);
        break;
    }
}
