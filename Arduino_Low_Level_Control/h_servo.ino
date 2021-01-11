void turn_right()
  { 
//  if(servo_command == 1)
//  {
    int i{0};
    int center{90};
    for(i=90; i<=180; ++i)
    {
    myservo.write(i);
    delay(15);
    }
    for(i=180; i>=90; --i)
    {
    myservo.write(i);
    delay(15);
    }
//  }
}
void turn_left(){ 
//  if (servo_command == 2)
//  {
    int i{0};
    int center{90};
    for(i=90; i>=0; --i)
    {
    myservo.write(i);
    delay(15);
    }
    for(i=0; i<=90; ++i)
    {
    myservo.write(i);
    delay(15);
    }
//  }
}
