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
            //forward
            ros_f->set_cmd_vel_msg(1);
            ros_f->cmd_vel_publisher();
//           rviz_obj->move_left_rear();
//           rviz_obj->move_right_rear();
            qDebug() << "pressed" ;
            ui->forward_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_2:
            //backward
            ros_f->set_cmd_vel_msg(-1);
            ros_f->cmd_vel_publisher();

//            rviz_obj->move_left_rear_b();
//            rviz_obj->move_right_rear_b();
            ui->back_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_6:
            //right
            ros_f->servo_command_publisher(1);
            ui->right_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            //rviz_obj->turn_right_pressed();
            break;
        case Qt::Key_4:
            //left
            ros_f->servo_command_publisher(2);
            //rviz_obj->turn_left_pressed();
            ui->left_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_A:
            ros_f->set_cmd_vel_msg(0);
            ros_f->cmd_vel_publisher();
            break;
        case Qt::Key_Z:
            ros_f->led_command_publisher(0);
            break;
        case Qt::Key_X:
            ros_f->led_command_publisher(1);
            break;
        }

}
void Manual_Window::keyReleaseEvent(QKeyEvent *event){
    switch(event->key()) {
        case Qt::Key_8:
            //forward
            ui->forward_label->setStyleSheet("");
            ros_f->set_cmd_vel_msg(0);
            ros_f->cmd_vel_publisher();
            qDebug() << "released" ;

            break;
        case Qt::Key_2:
            //backward
            ui->back_label->setStyleSheet("");
            ros_f->set_cmd_vel_msg(0);
            ros_f->cmd_vel_publisher();
            break;
        case Qt::Key_6:
            //right
            ros_f->servo_command_publisher(0);
            //rviz_obj->turn_right_released();
            ui->right_label->setStyleSheet("");
            break;
        case Qt::Key_4:
            //left
            ros_f->servo_command_publisher(0);
            //rviz_obj->turn_left_released();
            ui->left_label->setStyleSheet("");
            break;
        case Qt::Key_Z:
            qDebug() << "stop";
//            ui->back_label->setStyleSheet("");
            break;
        }

}

