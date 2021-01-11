void update_encoder(){encoder_value ++;}

int calculate_rpm(){
  current_millis = millis();
  if (current_millis - previus_millis > interval){
    previus_millis = current_millis;

    rpm = (int)(encoder_value *60 / enc_count);

//    if(sp > 0 || rpm > 0){
//     Serial.print("PWM VALUE: ");
//      Serial.print(i);
///     Serial.print('\t');
//      Serial.print(" PULSES: ");
///     Serial.print(encoder_value);
//      Serial.print('\t');
//      Serial.print(" SPEED: ");
//      Serial.print(rpm);
//      Serial.println(" RPM");
//    }
    
    encoder_value = 0;
  }
  return rpm;
}

//void balance_speed(){
//   
//    while (calculate_rpm() < desirable_rpm){
//    sp ++;
//    delay(100);
//    Serial.print("Increasing SPdwedede : ");
//    Serial.println(sp);
//    move_for(sp);
//    Serial.println("Out of increasing loop.");
//    if(sp >= safety_speed){sp /= 2;}
//    }
//    while (calculate_rpm() > desirable_rpm *2){
//        sp --;
//        delay(10);
//        Serial.print("Decreasing SP : ");
//        Serial.println(sp);
//        move_for(sp);
//        Serial.println("Out of increasing loop.");
//        if(sp >= safety_speed){sp /= 2;}
//    }
//    
//}
