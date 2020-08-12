// Some Error persists. Need to check 
int lightPen = A0;
int redLight = 13;
int greenLight = 12;
int blueLight = 8;


void setup()
{
  pinMode(lightPen, INPUT);
  pinMode(redLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
  pinMode(blueLight, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int lightVal = analogRead(lightPen);
  Serial.lightPen(lightVal);
  
  if(lightVal > 300){
    digitalWrite(greenLight, LOW);
    digitalWrite(redLight, HIGH);
  }
  else {
    digitalWrite(redLight, LOW);
    digitalWrite(greenLight, HIGH);
  }
}

