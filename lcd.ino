#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 4, 5, 19, 21, 22);
int ledPin = 13;

void setup()
{
    lcd.begin(16, 2);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    if (Serial.available() > 0) {
        String x = Serial.readStringUntil('\n');
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Input: ");
        lcd.setCursor(0, 1);
        lcd.print(x);
        if (x=="ON"){
            digitalWrite(ledPin, HIGH); 
        } else if (x=="OFF") {
            digitalWrite(ledPin, LOW);
        }
    }
}
