void move_for(int sp){
    

    digitalWrite(in_1, LOW);
    digitalWrite(in_2, HIGH);
    analogWrite(en_a, sp);
   
    

}
void stop_stop()
{
    
    digitalWrite(in_1, LOW);
    digitalWrite(in_2, LOW);
    analogWrite(en_a, sp);
    
    

}
void move_backwards(int sp){
   
 
   digitalWrite(in_1, HIGH);
   digitalWrite(in_2, LOW);
   analogWrite(en_a, abs(sp));
   rpm_publisher();
   

}
void check_motors(){
   
    
   digitalWrite(in_1, LOW);
   digitalWrite(in_2, HIGH);
   for(int i{0}; i < 20; i ++){
      analogWrite(en_a, i);
      delay(40);
   }
    delay(2000);
    digitalWrite(in_1, HIGH);
    digitalWrite(in_2, LOW);
    for(int i{0}; i < 25; i ++){
      analogWrite(en_a, i);
      delay(40);
    }
    delay(2000);
    digitalWrite(in_1, HIGH);
    digitalWrite(in_2, LOW);
    analogWrite(en_a, 0);
}
