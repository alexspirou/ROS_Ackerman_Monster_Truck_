void auto_navigation(int& sp){

  delay(500);
  int obstacle_distance = 25;
  if(u1() > obstacle_distance && u2() > obstacle_distance && u3() > obstacle_distance){
    move_for(sp);
    if(cm < 0.10){
      counter ++;
      
    }
    if (counter > 6){
        move_backwards(sp);
        turn_right();
        delay(500);
        move_backwards(sp);
        turn_left();
        delay(500);
        counter = 0;
    }
    
  }
   else if(u3() < obstacle_distance/2){

      move_for(sp);
      turn_right();
 }
 else if(u2() < obstacle_distance/2){
      move_for(sp);
      turn_left();
   }
  else if(u1() <= obstacle_distance){
    stop_stop();
    delay(500);
    move_backwards(sp);
    delay(800);
    stop_stop();
    delay(200);
    if(u3() > u2()){
        move_for(sp);
        turn_right();
      }
    else if(u2() > u3()){
       move_for(sp);
       turn_left();
    }
   }

}
