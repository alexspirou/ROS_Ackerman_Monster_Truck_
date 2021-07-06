/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *PWM_value;
    QSpinBox *PWM_spinBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *Publisher_Button;
    QPushButton *Manual;
    QPushButton *Stop;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QPushButton *Set_value;
    QPushButton *Publish_PWM_main_window;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_2;
    QLCDNumber *left_ultrasonic_lcd;
    QLCDNumber *middle_ultrasonic_lcd;
    QLCDNumber *right_ultrasonic_lcd;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *check_dc_motor;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLCDNumber *optical_encoder_lcd;
    QPushButton *lights_on_button;
    QPushButton *lights_off_button;
    QPushButton *lights_blinking_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(788, 594);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 141, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        PWM_value = new QLabel(layoutWidget);
        PWM_value->setObjectName(QStringLiteral("PWM_value"));

        horizontalLayout_2->addWidget(PWM_value);

        PWM_spinBox = new QSpinBox(layoutWidget);
        PWM_spinBox->setObjectName(QStringLiteral("PWM_spinBox"));

        horizontalLayout_2->addWidget(PWM_spinBox);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 420, 741, 121));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Publisher_Button = new QPushButton(layoutWidget1);
        Publisher_Button->setObjectName(QStringLiteral("Publisher_Button"));

        horizontalLayout->addWidget(Publisher_Button);

        Manual = new QPushButton(layoutWidget1);
        Manual->setObjectName(QStringLiteral("Manual"));

        horizontalLayout->addWidget(Manual);

        Stop = new QPushButton(layoutWidget1);
        Stop->setObjectName(QStringLiteral("Stop"));

        horizontalLayout->addWidget(Stop);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(28, 40, 141, 58));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Set_value = new QPushButton(layoutWidget2);
        Set_value->setObjectName(QStringLiteral("Set_value"));

        verticalLayout->addWidget(Set_value);

        Publish_PWM_main_window = new QPushButton(layoutWidget2);
        Publish_PWM_main_window->setObjectName(QStringLiteral("Publish_PWM_main_window"));

        verticalLayout->addWidget(Publish_PWM_main_window);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 280, 181, 61));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 160, 181, 61));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 220, 181, 61));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget4);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        layoutWidget5 = new QWidget(centralwidget);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(200, 160, 131, 181));
        verticalLayout_2 = new QVBoxLayout(layoutWidget5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        left_ultrasonic_lcd = new QLCDNumber(layoutWidget5);
        left_ultrasonic_lcd->setObjectName(QStringLiteral("left_ultrasonic_lcd"));

        verticalLayout_2->addWidget(left_ultrasonic_lcd);

        middle_ultrasonic_lcd = new QLCDNumber(layoutWidget5);
        middle_ultrasonic_lcd->setObjectName(QStringLiteral("middle_ultrasonic_lcd"));

        verticalLayout_2->addWidget(middle_ultrasonic_lcd);

        right_ultrasonic_lcd = new QLCDNumber(layoutWidget5);
        right_ultrasonic_lcd->setObjectName(QStringLiteral("right_ultrasonic_lcd"));

        verticalLayout_2->addWidget(right_ultrasonic_lcd);

        layoutWidget6 = new QWidget(centralwidget);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(340, 160, 81, 181));
        verticalLayout_3 = new QVBoxLayout(layoutWidget6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget6);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(layoutWidget6);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(layoutWidget6);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(700, 160, 81, 51));
        check_dc_motor = new QPushButton(centralwidget);
        check_dc_motor->setObjectName(QStringLiteral("check_dc_motor"));
        check_dc_motor->setGeometry(QRect(570, 230, 121, 51));
        layoutWidget7 = new QWidget(centralwidget);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(430, 160, 261, 61));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget7);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_6->addWidget(label_8);

        optical_encoder_lcd = new QLCDNumber(layoutWidget7);
        optical_encoder_lcd->setObjectName(QStringLiteral("optical_encoder_lcd"));

        horizontalLayout_6->addWidget(optical_encoder_lcd);

        lights_on_button = new QPushButton(centralwidget);
        lights_on_button->setObjectName(QStringLiteral("lights_on_button"));
        lights_on_button->setGeometry(QRect(180, 10, 121, 51));
        lights_off_button = new QPushButton(centralwidget);
        lights_off_button->setObjectName(QStringLiteral("lights_off_button"));
        lights_off_button->setGeometry(QRect(310, 10, 111, 51));
        lights_blinking_button = new QPushButton(centralwidget);
        lights_blinking_button->setObjectName(QStringLiteral("lights_blinking_button"));
        lights_blinking_button->setGeometry(QRect(430, 10, 121, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 788, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        PWM_value->setText(QApplication::translate("MainWindow", "PWM Value", Q_NULLPTR));
        Publisher_Button->setText(QApplication::translate("MainWindow", "Auto", Q_NULLPTR));
        Manual->setText(QApplication::translate("MainWindow", "Manual", Q_NULLPTR));
        Stop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        Set_value->setText(QApplication::translate("MainWindow", "Set Value", Q_NULLPTR));
        Publish_PWM_main_window->setText(QApplication::translate("MainWindow", "Publish", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Right Ultrasonic Sensor", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Left Ultrasonic Sensor", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Middle Ultrasonic Sensor", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "CM", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "CM", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "CM", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "CM/s", Q_NULLPTR));
        check_dc_motor->setText(QApplication::translate("MainWindow", "Check DC Motor", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Optical Encoder", Q_NULLPTR));
        lights_on_button->setText(QApplication::translate("MainWindow", "LIGHTS ON", Q_NULLPTR));
        lights_off_button->setText(QApplication::translate("MainWindow", "LIGHTS OFF", Q_NULLPTR));
        lights_blinking_button->setText(QApplication::translate("MainWindow", "BLINKING LIGHT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
