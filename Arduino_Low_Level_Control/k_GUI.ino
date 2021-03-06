void auto_GUI()
{
    if(qt_msg == 2){
    if (sp > safety_speed) {sp = safety_speed;}
    balance_speed(cm, des_cm, sp);
    auto_navigation(motor_speed);
  }
}

void manual_GUI(){
  if(qt_msg == 1){

       if (sp >0)
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
       if (servo_command == 1)
       {
         manual_turn_right();
       }
       else if (servo_command == 2)
       {
           manual_turn_left();
       }
       else{
        myservo.write(90);
       }
  }
}
void stop_GUI(){
  if(qt_msg == 0){
     
     stop_stop();
     u1();u2();u3();

     
  }
}

void check_GUI(){
  if(qt_msg == 4){
  move_for(sp);
  u1();u2();u3();
  calculate_rpm();
  }
}

void led_on_off()
{
       //ON/OFF LED
     if(led_msg ==0)
     {
      digitalWrite(led_pin, LOW);
     }
     else if(led_msg ==1)
     {
      digitalWrite(led_pin, HIGH);
     }
     else if(led_msg ==3)
     {
      
      digitalWrite(led_pin, HIGH);
      delay(50);
      digitalWrite(led_pin, LOW);
      delay(50);

     }
}
