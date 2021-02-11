void auto_navigation(int& sp){
  int obstacle_distance = 25;

  if(u1() > obstacle_distance){
    move_for(sp);
    Serial.println("xxx");
    
  }
  else if(u1() <= obstacle_distance){
    stop_stop();
    move_backwards(sp);
    stop_stop();
    if(u3() > u2()){
      turn_right();
    }
    else{
      turn_left();
    }
  }
 
}


void manual_navigation(){

  
}
