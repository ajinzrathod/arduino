 #include "dht.h"
#define dhtpin A0 
#include<LiquidCrystal.h>

int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


dht DHT; 
void setup()
{ 
  Serial.begin(9600);
   lcd.begin(16, 2); 
  delay(500);
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000); 
} 
void loop()
{ 
    DHT.read11(dhtpin);    
    lcd.setCursor(0, 0);
    
    lcd.print("Humidity:");
    lcd.print(DHT.humidity);
    lcd.print("%");
    
    lcd.setCursor(0, 1);
    lcd.println("Temp: ");
    lcd.print(DHT.temperature); 
    lcd.println(" C ");    
    
    Serial.print("Temp: ");
    Serial.println(DHT.temperature); 
    Serial.print(" C");    
    
    delay(500);
    lcd.clear();
} 


