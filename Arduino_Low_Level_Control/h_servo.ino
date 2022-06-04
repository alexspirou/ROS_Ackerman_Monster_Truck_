void turn_right(){ 
    
      int i{0};
      int center{90};
      for(i=90; i<=180; ++i){
        myservo.write(i);
        delay(1);
       
      }
      for(i=180; i>=90; --i){
          myservo.write(i);
//           Serial.print("-right--");
          delay(1);
         }
}
void turn_left(){ 

      int i{0};
        for(i=90; i>=0; --i){
          myservo.write(i);
          delay(1);
          }
         for(i=0; i<=90; ++i){
          myservo.write(i);
          delay(1);
//          Serial.print("left");
        }


}
void manual_turn_right()
{
  
  myservo.write(180);
  
}

void manual_turn_left()
{
  myservo.write(0);
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
