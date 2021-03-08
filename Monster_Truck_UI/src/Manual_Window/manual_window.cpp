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
//    QWidget::setEnabled(1);
    this->setWindowTitle("Monster Truck Teleoparation ");
    key = new  Keyboard_Events();
    ros_f = new _Ros();
    ros_f->set_pwm(0);
    ros_f->pwm_publisher();
    qDebug() << "manual window " ;
}

Manual_Window::~Manual_Window()
{
    delete ui;delete key;delete timer; delete ros_f;
}

void Manual_Window::on_info_button_clicked()
{
    QMessageBox::about(this,"Control Info ",info_message);
}

void Manual_Window::keyboard_events(){

//    key->key(event);
}

void Manual_Window::keyPressEvent(QKeyEvent *event){
    switch(event->key()) {
        case Qt::Key_8:
            //forward
            ros_f->set_pwm(60);
            ros_f->pwm_publisher();
            ui->forward_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_2:
            //backward
            ros_f->set_pwm(-60);
            ros_f->pwm_publisher();
            ui->back_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_6:
            //right
            ros_f->servo_command_publisher(1);
            ui->right_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_4:
            //left
            ros_f->servo_command_publisher(2);
            ui->left_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_Z:
            ros_f->set_pwm(0);
            ros_f->pwm_publisher();
            break;
        }

}
void Manual_Window::keyReleaseEvent(QKeyEvent *event){
    switch(event->key()) {
        case Qt::Key_8:
            //forward
            ui->forward_label->setStyleSheet("");
            ros_f->set_pwm(0);
            ros_f->pwm_publisher();
            break;
        case Qt::Key_2:
            //backward
            ui->back_label->setStyleSheet("");
            ros_f->set_pwm(0);
            ros_f->pwm_publisher();
            break;
        case Qt::Key_6:
            //right
            ros_f->servo_command_publisher(0);
            ui->right_label->setStyleSheet("");
            break;
        case Qt::Key_4:
            //left
            ros_f->servo_command_publisher(0);
            ui->left_label->setStyleSheet("");
            break;
        case Qt::Key_Z:
            qDebug() << "stop";
//            ui->back_label->setStyleSheet("");
            break;
        }

}

