// Auto-sweeping Servo

#include <Servo.h>

Servo myservo; // membuat objek servo untuk mengontrol motor servo

int pos = 0; // variabel untuk menyimpan posisi servo
const int servoPin = 9;

void setup()
{
  // attach servo ke pin 9
  myservo.attach(servoPin);
}
  
void loop()
{  
  // berputar dari 0 derajat ke 180 derajat 
  for(pos = 0; pos <= 180; pos +=1)
  {
    myservo.write(pos);
    delay(15);
  }
  // berputar dari 180 derajat ke 0 derajat
  for(pos = 180; pos >= 0; pos -=1)
  {
    myservo.write(pos);
    delay(15);
  }
}
