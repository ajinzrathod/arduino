 #include "dht.h"
#define dhtpin A0 
dht DHT; 
void setup()
{ 
  Serial.begin(9600);
  delay(500);
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000); 
} 
void loop()
{ 
    DHT.read11(dhtpin);    
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");    
} 

