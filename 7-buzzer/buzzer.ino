// Did not worked from Paul McWhorter.

// Referred:
// https://create.arduino.cc/projecthub/SURYATEJA/use-a-buzzer-module-piezo-speaker-using-arduino-uno-89df45

int buzzPin = 9; 
int dtime = 500;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
}

void loop()
{
  Serial.println("Enter a number: ");
  while(!Serial.available()) { } // Waiting for input
  
  int x = Serial.parseInt();
  if (x > 0) {
    Serial.println("Buzz !!");
    analogWrite(buzzPin, x);
     // tone(buzzPin, 1000); // Send 1KHz sound signal...
     // tone(pin, frequency); 
     // OR
     // tone(pin, frequency, duration);
    delay(dtime);
    analogWrite(buzzPin, 0);
    // noTone(buzzPin); // Stop sound...
  }
}
