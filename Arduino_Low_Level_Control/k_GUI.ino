void auto_GUI(){
  
  if(qt_msg == 2){
    if (sp > safety_speed) {sp = safety_speed;}
    balance_speed(cm, des_cm, sp);
    auto_navigation(sp);
  }
}

void manual_GUI(){
  if(qt_msg == 1){

       //sp = pwm speed
       if (sp >0){
        move_for(40);
       }
       else if(sp<0){
        move_backwards(40);
       }
       else{
        stop_stop();
       }
       //servo command is a command sent from Qt
       if (servo_command == 1){
         manual_turn_right();
       }
       else if (servo_command == 2){
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
