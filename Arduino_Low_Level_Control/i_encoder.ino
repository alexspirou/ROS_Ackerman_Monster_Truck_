void update_encoder(){encoder_value ++;}

float calculate_rpm(){
  current_millis = millis();
  if (current_millis - previus_millis > interval){
    previus_millis = current_millis;

    rpm = (float)(encoder_value *60 / enc_count);
//    if(sp >0 || rpm > 0){
//      Serial.print("PWM VALUE: ");
//      Serial.print(sp);
//       Serial.print('\t');
//      Serial.print(" PULSES: ");
//      Serial.print(encoder_value);
//      Serial.print('\t');
//      Serial.print(" SPEED: ");
//      Serial.print(rpm);
//      Serial.println(" RPM");
//       Serial.print(cm);
//      Serial.println(" CM/s");
//    }
      cm = (0.11*2*3.14 *(rpm)/60); 
    encoder_value = 0;
  }
  rpm_msg.data = int(cm*10);
  optical_encoder_publisher.publish(&rpm_msg);
  return cm;
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
