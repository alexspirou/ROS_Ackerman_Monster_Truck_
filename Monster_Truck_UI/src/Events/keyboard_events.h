#ifndef KEYBOARD_EVENTS_H
#define KEYBOARD_EVENTS_H
#include <QKeyEvent>
#include "QDebug"
class Keyboard_Events
{
public:
    void move_front(QKeyEvent* event){
        if(event->key() == Qt::Key_Up){
           qDebug() << "q is pressed ";
         }
    }

private:



};
#endif // KEYBOARD_EVENTS_H
