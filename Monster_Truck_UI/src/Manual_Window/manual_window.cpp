#include "manual_window.h"
#include "ui_manual_window.h"
#include <QMessageBox>
#include <QDebug>
Manual_Window::Manual_Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Manual_Window)
{
    ui->setupUi(this);
    this->setWindowTitle("Monster Truck Teleoparation ");
    key = new  Keyboard_Events();


//    timer = new QTimer(this);
//    connect(timer, SIGNAL(timeout()),this,SLOT(keyboard_events()));
//    timer->start(100);
     qDebug() << "manual window " ;
}

Manual_Window::~Manual_Window()
{
    delete ui;delete key;delete timer;
}

void Manual_Window::on_info_button_clicked()
{
    QMessageBox::about(this,"Info",info_message);
}

void Manual_Window::keyboard_events(){

//    key->key(event);
}

void Manual_Window::key_press(QKeyEvent* event){
    if(event->key() == Qt::Key_Q){
       qDebug() << "q is pressed ";
     }
}
