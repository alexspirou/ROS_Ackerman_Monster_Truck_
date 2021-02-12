void encoder_counter(){counter1 ++;}
float encoder_fun(){
  Timer1.detachInterrupt();  // Stop the timer
  float rotation1 = (counter1/ diskslots) * 60.00;  // calculate RPM for Motor 1
  cm = 0.11*2*3.14 *(rotation1)/60; 
  //Serial.print("RPM ----: ");Serial.println(rotation1); Serial.print("CM/s ----: ");Serial.println(cm);Serial.print("PWM Pulse ----: ");Serial.println(sp);
  counter1 = 0;  //  reset counter to zero
  Timer1.attachInterrupt( encoder_fun );
  // Enable the timer
 turn_right();
 turn_left();
  return cm;
//rpm_msg.data = cm*100;
//optical_encoder_publisher.publish(&rpm_msg);
  
}
void balance_speed(float current_cm, float des_c, int& pwm_){
   if (sp > 0){
     while (current_cm < des_c){
      sp ++;
      delay(1);
      if(sp >= safety_speed){sp -= 5;}
      
      break;
     }
   }
   while (current_cm >= des_c){
      
        sp --;
        delay(1);
        if(sp >= safety_speed){sp -= 5;}
        
        break;
    }
}
