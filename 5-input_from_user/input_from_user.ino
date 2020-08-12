int led = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT); 
}

void loop()
{
  Serial.println("Enter [0: 255]");
  
  while(!Serial.available()) {
    // Waiting for user Input
  }
  int num = Serial.parseInt();
  analogWrite(led, num);
}
