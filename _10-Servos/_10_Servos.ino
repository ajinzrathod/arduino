#include<Servo.h>

int servoPin = 9;
int servoPos = 90;
Servo myServo;

void setup()
{
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop()
{
  myServo.write(servoPos);
}
