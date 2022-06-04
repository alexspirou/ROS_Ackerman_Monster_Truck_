void auto_GUI()
{
    if(qt_msg == AUTONAV){
    if (sp > safety_speed) {sp = safety_speed;}
    balance_speed(cm, des_cm, sp);
    auto_navigation(motor_speed);
  }
}

void manual_GUI(){
  if(qt_msg == MANUAL)
  {
       if (sp > 0)
       {
        move_for(motor_speed);
       }
       else if(sp<0)
       {
        move_backwards(motor_speed);
       }
       else
       {
        stop_stop();
       }
       //servo command is a command sent from Qt
       if (servo_command == RIGHT)
       {
         manual_turn_right();
       }
       else if (servo_command == LEFT)
       {
           manual_turn_left();
       }
       else
       {
        myservo.write(90);
       }
  }
}
void stop_GUI(){
  if(qt_msg == STOP)
  {
     
     stop_stop();
     u1();u2();u3();  
  }
}

void check_GUI(){
  if(qt_msg == CHECKMOTORS)
  {
  move_for(sp);
  u1();u2();u3();
  calculate_rpm();
  }
}

void led_on_off()
{
       //ON/OFF LED
     if(led_msg == ON)
     {
      digitalWrite(led_pin, LOW);
     }
     else if(led_msg == OFF)
     {
      digitalWrite(led_pin, HIGH);
     }
     else if(led_msg == BLINK)
     {
      
      digitalWrite(led_pin, HIGH);
      delay(50);
      digitalWrite(led_pin, LOW);
      delay(50);
     }
}