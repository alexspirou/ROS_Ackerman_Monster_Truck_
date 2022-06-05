void auto_navigation(int& sp){

  int obstacle_distance = 25;
  // If there is not obstacle
  if(u1() > obstacle_distance && u2() > obstacle_distance && u3() > obstacle_distance)
  {
    move_for(sp);
    u1();u2();u3();
    calculate_rpm();
    // If robot stucks but the ultrasensors are not seeing an obstacle 
    if(cm < 0.10){
      counter ++;
      
    }
    if (counter > 6){
        move_backwards(sp);
        u1();u2();u3();
        calculate_rpm();
        turn_right();
        delay(1000);

        u1();u2();u3();
        calculate_rpm();
        move_backwards(sp);
        turn_left();
        delay(1000);
        u1();u2();u3();
        calculate_rpm();
        counter = 0;
    }
    
  }
   else if(u3() < obstacle_distance/2){

      move_for(sp);
      turn_right();
      u1();u2();u3();
      calculate_rpm();
 }
 else if(u2() < obstacle_distance/2){
      move_for(sp);
      turn_left();
      u1();u2();u3();
   }
  else if(u1() < obstacle_distance){
    stop_stop();
    u1();u2();u3();
    calculate_rpm();
    delay(500);
    move_backwards(sp);
    u1();u2();u3();
    delay(800);
    stop_stop();
    u1();u2();u3();
    calculate_rpm();
    delay(200);
    if(u3() > u2()){
        move_for(sp);
        turn_right();
        u1();u2();u3();
        calculate_rpm();
      }
    else if(u2() > u3()){
       move_for(sp);
       turn_left();
       u1();u2();u3();
       calculate_rpm();
    }
   }

}
