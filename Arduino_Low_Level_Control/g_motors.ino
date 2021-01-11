void move_for(int& sp){
    if (sp > 0){
    analogWrite(en_a, sp);
    digitalWrite(in_1, LOW);
    digitalWrite(in_2, HIGH);
    }
}

void stop_stop(int& sp)
{
//  if (sp == 0)
  //{
    digitalWrite(in_1, HIGH);
    digitalWrite(in_2, LOW);
    for(int j=sp-sp/2; j==0; --j)
    {
      analogWrite(en_a, j);
    }
  //}
}

void move_backwards(int& sp){
   
   if (sp < 0)
   {
   digitalWrite(in_1, HIGH);
   digitalWrite(in_2, LOW);
   analogWrite(en_a, abs(sp));
   }
;
  
}
