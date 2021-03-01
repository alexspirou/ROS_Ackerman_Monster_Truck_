void turn_right(){ 
    
      int i{0};
      int center{90};
      for(i=90; i<=180; ++i){
        myservo.write(i);
        delay(5);
       
      }
      for(i=180; i>=90; --i){
          myservo.write(i);
//           Serial.print("-right--");
          delay(5);
         }
}
void turn_left(){ 

      int i{0};
        for(i=90; i>=0; --i){
          myservo.write(i);
          delay(5);
          }
         for(i=0; i<=90; ++i){
          myservo.write(i);
          delay(5);
//          Serial.print("left");
        }


}

void check_servo(){
      
      int i{0};
      int center{90};
      for(i=90; i<=180; ++i){
        myservo.write(i);
        delay(5);
      }
      for(i=180; i>=90; --i){
          myservo.write(i);
          delay(5);
         }
      i = 0;
      center = 90;
        for(i=90; i>=0; --i){
          myservo.write(i);
          delay(5);
          }
         for(i=0; i<=90; ++i){
          myservo.write(i);
          delay(5);
        }

      
    
}
