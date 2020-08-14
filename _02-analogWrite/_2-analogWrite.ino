int redPin = 9;
int brightness = 255;

void setup()
{
  pinMode(redPin, OUTPUT);
}

void loop()
{
  analogWrite(redPin, brightness);
  delay(500);
  analogWrite(redPin, int(brightness / 10));
  delay(500);
  analogWrite(redPin, int(brightness / 20));
  delay(500);
}
