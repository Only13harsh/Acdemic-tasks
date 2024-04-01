#define BLYNK_TEMPLATE_ID "TMPL696qPpmDD"
#define BLYNK_TEMPLATE_NAME "LED control with Esp32"
#define BLYNK_AUTH_TOKEN "zUME6av74Bbybl3-YfRXQdDgFN0hqoFt"
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Wokwi-GUEST";
char pass[] = "";
#define LED1 13
int SW_State_M = 0;
BLYNK_WRITE (V0)
{
SW_State_M = param.asInt();
if (SW_State_M == 1)
{
digitalWrite(LED1, HIGH);
Serial.println("LED ON");
Blynk.virtualWrite(V1, HIGH);
}
else
{
digitalWrite(LED1, LOW);
Serial.println("LED OFF");
Blynk.virtualWrite(V1, LOW);
}
}
void setup()
{
pinMode(22,INPUT_PULLUP); 
pinMode(LED1, OUTPUT);
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);
}
void loop()
{
 int x =digitalRead(22);
 if(x==0)
{
  Blynk.virtualWrite(V1,HIGH);
  Serial.println("Switch on , LED on");
 }
  else {
    Blynk.virtualWrite(V1,LOW);
     Serial.println("Switch off , LED off");
  } 
Blynk.run();
}
