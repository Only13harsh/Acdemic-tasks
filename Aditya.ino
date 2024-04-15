#include <WiFi.h>
#include "ThingSpeak.h"

#include <Wire.h>

uint32_t tsLastReport = 0;
 
#include <dht.h>

dht DHT;
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2); 
#define DHT11_PIN 23
int mq135s=0;
int irs=0;
const int mq135=15;
const int ir=27;
const int buzz=18;
const int led=25;
const char* ssid = "iPhone";   // your network SSID (name) 
const char* password = "1234567890";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1;
const char * myWriteAPIKey = "5D8I6VX83XWYZQZF";

// Timer variables
unsigned long lastTime = 0;
unsigned long timerDelay = 20000;




void setup()
{
   lcd.init();
  lcd.clear();         
  lcd.backlight();
  Serial.begin(115200); //set up Arduino's hardware serial UART
 pinMode(mq135,INPUT);
  pinMode(ir,INPUT);
   pinMode(buzz,OUTPUT);
    pinMode(led,OUTPUT);
     digitalWrite(led,LOW);
 digitalWrite(buzz,LOW);
  ThingSpeak.begin(client); //turn on LED so fps can see fingerprint
}

void loop()
{
  mq135s=digitalRead(mq135);
  irs=digitalRead(ir);
    Serial.print(mq135s);
     Serial.print(irs);
  lcd.clear();
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  int t=DHT.temperature;
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  lcd.setCursor(0,0);   //Set cursor to character 2 on line 0
  lcd.print("temp:");
  lcd.setCursor(5,0);   //Move cursor to character 2 on line 1
  lcd.print(DHT.temperature);
   lcd.setCursor(0,1);   //Set cursor to character 2 on line 0
  lcd.print("hum :");
  lcd.setCursor(5,1);   //Move cursor to character 2 on line 1
  lcd.print(DHT.humidity);
  lcd.setCursor(11,0);
   lcd.print("GAS");
   lcd.setCursor(15,0);
   lcd.print(mq135s);
   lcd.setCursor(11,1);   //Set cursor to character 2 on line 0
  lcd.print("M :");
   lcd.setCursor(15,1);   //Set cursor to character 2 on line 0
  lcd.print(irs);
  if(mq135s==HIGH)
  {
    digitalWrite(buzz,HIGH);
    delay(1000);
  }
  if(irs==LOW)
  {
    digitalWrite(led,HIGH);
    delay(1000);
  }
  digitalWrite(led,LOW);
 digitalWrite(buzz,LOW);
  delay(1000);
//oximeter();
 if ((millis() - lastTime) > timerDelay) {
    
    // Connect or reconnect to WiFi
    if(WiFi.status() != WL_CONNECTED){
      Serial.print("Attempting to connect");
      while(WiFi.status() != WL_CONNECTED){
        WiFi.begin(ssid, password); 
        delay(5000);     
      } 
      Serial.println("\nConnected.");
    }
    if(mq135s==HIGH)
  {
    digitalWrite(buzz,HIGH);
    delay(1000);
  }
  if(irs==LOW)
  {
    digitalWrite(led,HIGH);
    delay(1000);
  }
  digitalWrite(led,LOW);
 digitalWrite(buzz,LOW);
  // Make sure to call update as fast as possible
int t=DHT.temperature;
int h=DHT.humidity;
      ThingSpeak.setField(1,t);
      ThingSpeak.setField(2,h);
      ThingSpeak.setField(3,mq135s);
       ThingSpeak.setField(4,irs);
      
      
     
  
int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
  if(x == 200){
    Serial.println("Channel update successful.");
  }
  else{
    Serial.println("Problem updating channel. HTTP error code " + String(x));
  }
   
    lastTime = millis();
     
  
  }

  
  // Identify fingerprint test
