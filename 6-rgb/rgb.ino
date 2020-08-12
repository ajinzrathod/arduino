int redPin = 8;
int greenPin = 9;
int bluePin = 10;

String myColor;
String msg1 = "Enter Red Color: ";
String msg2 = "Enter Green Color: ";
String msg3 = "Enter Blue Color: ";

void setup()
{
  Serial.begin(9600);
  
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  // Red Color Input
  Serial.println(msg1);
  while(!Serial.available()) {// waiting for input
  }
  int red = Serial.parseInt();
  
  
  // Green Color Input
  Serial.println(msg2);
  while(!Serial.available()) {// waiting for input
  }
  int green = Serial.parseInt();
 
 
  // Blue Color Input
  Serial.println(msg3);
  while(!Serial.available()) {// waiting for input
  }
  int blue = Serial.parseInt();
  
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
  
  Serial.println(String(red) + ":" + String(green) + ":" +  String(blue));
  
}
