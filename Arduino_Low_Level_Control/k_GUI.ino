void auto_GUI(){

  if(qt_msg == 2){
    
    balance_speed(cm, des_cm, sp);
    auto_navigation(sp);
  }
}

void manual_GUI(){
  if(qt_msg == 1){
    sp = 0;
     move_backwards(sp);
     stop_stop();
     turn_right();
     turn_left();
  }
}
void stop_GUI(){
  if(qt_msg == 0){
     
     stop_stop();
     u1();u2();u3();
     
  }
}
