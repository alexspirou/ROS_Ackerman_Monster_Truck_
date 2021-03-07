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
            qDebug() << "forward";
            ros_f->set_pwm(2);
            ros_f->pwm_publisher();
            ui->forward_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_2:
            qDebug() << "back";
            ros_f->set_pwm(-2);
            ros_f->pwm_publisher();
//            pLabel->setStyleSheet("QLabel { background-color : red; color : blue; }");
             ui->back_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_6:
            qDebug() << "right";
            ros_f->set_pwm_z(-2);
            ros_f->pwm_publisher();
            ui->right_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_4:
            qDebug() << "left";
            ros_f->set_pwm_z(2);
            ros_f->pwm_publisher();
            ui->left_label->setStyleSheet("QLabel { background-color : white; color : black; }");
            break;
        case Qt::Key_Z:
            qDebug() << "stop";
            break;
        }

}
void Manual_Window::keyReleaseEvent(QKeyEvent *event){
    switch(event->key()) {
        case Qt::Key_8:
            ui->forward_label->setStyleSheet("");
            break;
        case Qt::Key_2:
            qDebug() << "release";
            ui->back_label->setStyleSheet("");
            break;
        case Qt::Key_6:
            ui->right_label->setStyleSheet("");
            break;
        case Qt::Key_4:
            ui->left_label->setStyleSheet("");
            break;
        case Qt::Key_Z:
            qDebug() << "stop";
//            ui->back_label->setStyleSheet("");
            break;
        }

}

