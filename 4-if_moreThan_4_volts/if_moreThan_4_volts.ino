int myPin = A3;
int readVal;
float V2;
int dt = 250;
int redPin = 9;
//6
void setup()
{
  Serial.begin(9600);
  pinMode(myPin, INPUT);
  pinMode(redPin, OUTPUT);
}
//13
void loop()
{
  readVal = analogRead(myPin);
  V2 = (5. / 1023.) * readVal;
  Serial.print("Potentionmeter Voltage: ");
  Serial.println(V2);
  
  if(V2 > 4.0){
    Serial.println("!!! Warning");
     digitalWrite(redPin, HIGH);
  }
  else{
    digitalWrite(redPin, LOW);
  }
  
  delay(dt);
}
