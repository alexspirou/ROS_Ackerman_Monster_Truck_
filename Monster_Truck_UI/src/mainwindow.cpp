#include "mainwindow.h"
#include "ui_mainwindow.h"
//QT
#include "QMessageBox"
#include "QDebug"
#include "QProcess"
//ROS MSGS
#include "std_msgs/String.h"

MainWindow::MainWindow(int argc, char** argv,QWidget *parent) :

    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ros::init(argc, argv, "talker");

    ui->setupUi(this);
    n = new ros::NodeHandle();
    chatter_pub = n->advertise<std_msgs::String>("chatter", 200);
    qDebug() << "COo";
}

MainWindow::~MainWindow()
{
    delete ui;
    delete n;
}

void MainWindow::on_Publisher_Button_clicked()
{
    QMessageBox::about(this, "Title Here ", "Go Fuck Yourself");

    int count = 0;

      /**
       * This is a message object. You stuff it with data, and then publish it.
       */
      std_msgs::String msg;

      std::stringstream ss;
      ss << "hello world " << count;
      msg.data = ss.str();

      ROS_INFO("%s", msg.data.c_str());

      /**
       * The publish() function is how you send messages. The parameter
       * is the message object. The type of this object must agree with the type
       * given as a template parameter to the advertise<>() call, as was done
       * in the constructor above.
       */
      chatter_pub.publish(msg);



      ++count;


}
