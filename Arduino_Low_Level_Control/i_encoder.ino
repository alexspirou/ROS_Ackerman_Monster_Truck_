void encoder_counter(){counter1 ++;}
void isr(){
  Timer1.detachInterrupt();  // Stop the timer
  float rotation1 = (counter1/ diskslots) * 60.00;  // calculate RPM for Motor 1
  cm = 0.11*2*3.14 *(rotation1)/60; 
 
  Serial.print("RPM ----: ");
  Serial.println(rotation1);  
  Serial.print("CM/s ----: ");
  Serial.println(cm);
  Serial.print("PWM Pulse ----: ");
  Serial.println(sp);
  counter1 = 0;  //  reset counter to zero
  Timer1.attachInterrupt( isr );  // Enable the timer
//  rpm_msg.data = cm*100;
//  optical_encoder_publisher.publish(&rpm_msg);
  balance_speed(cm, des_cm);
//function for limit the speed of motor, depend what cm/s is given
  
}
void balance_speed(float current_c, float des_c){
   if (sp > 0){
     while (current_c < des_c){
      sp ++;
      delay(1);
      move_for(sp);
      if(sp >= safety_speed){sp -= 5;}
      break;
     }
   }
   while (current_c >= des_c){
        sp --;
        delay(1);
        move_for(sp);
        if(sp >= safety_speed){sp -= 5;}
        break;
    }
}
