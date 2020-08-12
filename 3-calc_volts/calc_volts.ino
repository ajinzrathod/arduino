int readPin = A3; 
float V2 = 0;
int readVal;
int delayTime = 500;
void setup()
{
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  V2 = analogRead(readPin);
  //Serial.print("Out of 1023: ");
  //Serial.println(V2);
  
  readVal = analogRead(readPin);
  V2 = (5. / 1023.) * readVal;
  Serial.print("In volts: ");
  Serial.println(V2);
  
  //delay(delayTime);
}
