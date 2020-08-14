int LEDPin = 8;
int buttonPin = 12;
int buttonRead;
int dt = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonRead = digitalRead(buttonPin);
  if(!buttonRead) {
   digitalWrite(LEDPin, HIGH); 
  }
  else {
    digitalWrite(LEDPin, LOW);
  }
  Serial.println(buttonRead);
  delay(dt);
}

