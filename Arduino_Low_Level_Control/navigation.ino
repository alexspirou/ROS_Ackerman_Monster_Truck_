void auto_navigation(int& sp){
  delay(500);
  int obstacle_distance = 25;
 balance_speed(cm, des_cm, sp);
  if(u1() > obstacle_distance){
    move_for(sp);
    
  }
  else if(u1() <= obstacle_distance){
    stop_stop();
    delay(200);
    move_backwards(sp);
    delay(500);
    stop_stop();
    delay(200);
      if(u3() > u2()){
        stop_stop();
        delay(200);
        Serial.println("turn right");
        turn_right();
        delay(200);
        Serial.println("move front");
        move_for(sp);
      }
      else{
        turn_left();
        Serial.println("turn left");
        delay(200);
        move_for(sp);
      }
   }
}


void manual_navigation(){

  
}
