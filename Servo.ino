#include <ESP32Servo.h>
Servo myservo;
int poten = 27; 

void setup() {
  myservo.attach(16);
  Serial.begin(9600);
  analogWriteResolution(10);
}

void loop() {
  int pot = analogRead(poten); 
  int angle = map(pot, 0, 1023, 0, 180); 
  myservo.write(angle); 
  Serial.println(angle);
   Serial.println(pot);
  delay(500); 
}
