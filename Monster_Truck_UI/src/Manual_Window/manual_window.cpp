#include "manual_window.h"
#include "ui_manual_window.h"
#include <QMessageBox>
#include <QDebug>
#include <QWidget>

Manual_Window::Manual_Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Manual_Window)
{
    ui->setupUi(this);
    this->setWindowTitle("Monster Truck Teleoparation ");
    key = new  Keyboard_Events();
    ros_f = new _Ros();

}

Manual_Window::~Manual_Window()
{
    delete ui;delete key;delete timer; delete ros_f;
    ros_f->qt_command_publisher(0);
    qDebug() << "manual window destructor " ;

}

void Manual_Window::on_info_button_clicked()
{
    QMessageBox::about(this,"Control Info ",info_message);
}
void Manual_Window::keyPressEvent(QKeyEvent *event){
    switch(event->key()) {
        case Qt::Key_8:
            ros_f->set_cmd_vel_msg(FORWARD); 
            ros_f->cmd_vel_publisher();
            qDebug() << "pressed" ;
            ui->forward_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_2:
            ros_f->set_cmd_vel_msg(BACKWARDS);
            ros_f->cmd_vel_publisher();
            ui->back_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_6:
            ros_f->servo_command_publisher(RIGHT);
            ui->right_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_4:
            ros_f->servo_command_publisher(LEFT);
            ui->left_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_A:
            ros_f->set_cmd_vel_msg(motorCommands::STOP);
            ros_f->cmd_vel_publisher();
            break;
        case Qt::Key_Z:
            ros_f->led_command_publisher(OFF);
            break;
        case Qt::Key_X:
            ros_f->led_command_publisher(ON);
            break;
        }

}
void Manual_Window::keyReleaseEvent(QKeyEvent *event){
    switch(event->key()) {
        case Qt::Key_8:
            ui->forward_label->setStyleSheet("");
            ros_f->set_cmd_vel_msg(STOP);
            ros_f->cmd_vel_publisher();
            break;
        case Qt::Key_2:
            ui->back_label->setStyleSheet("");
            ros_f->set_cmd_vel_msg(STOP);
            ros_f->cmd_vel_publisher();
            break;
        case Qt::Key_6:
            ros_f->servo_command_publisher(STOP);
            ui->right_label->setStyleSheet("");
            break;
        case Qt::Key_4:
            //left
            ros_f->servo_command_publisher(STOP);
            ui->left_label->setStyleSheet("");
            break;
        case Qt::Key_Z:
            break;
        }

}

