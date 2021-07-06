/********************************************************************************
** Form generated from reading UI file 'manual_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUAL_WINDOW_H
#define UI_MANUAL_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manual_Window
{
public:
    QPushButton *info_button;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *forward_label;
    QHBoxLayout *horizontalLayout;
    QLabel *left_label;
    QLabel *right_label;
    QLabel *back_label;

    void setupUi(QDialog *Manual_Window)
    {
        if (Manual_Window->objectName().isEmpty())
            Manual_Window->setObjectName(QStringLiteral("Manual_Window"));
        Manual_Window->resize(584, 372);
        info_button = new QPushButton(Manual_Window);
        info_button->setObjectName(QStringLiteral("info_button"));
        info_button->setGeometry(QRect(10, 30, 89, 21));
        widget = new QWidget(Manual_Window);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(200, 150, 161, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        forward_label = new QLabel(widget);
        forward_label->setObjectName(QStringLiteral("forward_label"));

        verticalLayout->addWidget(forward_label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        left_label = new QLabel(widget);
        left_label->setObjectName(QStringLiteral("left_label"));

        horizontalLayout->addWidget(left_label);

        right_label = new QLabel(widget);
        right_label->setObjectName(QStringLiteral("right_label"));

        horizontalLayout->addWidget(right_label);


        verticalLayout->addLayout(horizontalLayout);

        back_label = new QLabel(widget);
        back_label->setObjectName(QStringLiteral("back_label"));

        verticalLayout->addWidget(back_label);


        retranslateUi(Manual_Window);

        QMetaObject::connectSlotsByName(Manual_Window);
    } // setupUi

    void retranslateUi(QDialog *Manual_Window)
    {
        Manual_Window->setWindowTitle(QApplication::translate("Manual_Window", "Dialog", Q_NULLPTR));
        info_button->setText(QApplication::translate("Manual_Window", "Keys Info", Q_NULLPTR));
        forward_label->setText(QApplication::translate("Manual_Window", "               Forward", Q_NULLPTR));
        left_label->setText(QApplication::translate("Manual_Window", "Left", Q_NULLPTR));
        right_label->setText(QApplication::translate("Manual_Window", "           Right", Q_NULLPTR));
        back_label->setText(QApplication::translate("Manual_Window", "              Backward", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Manual_Window: public Ui_Manual_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUAL_WINDOW_H
