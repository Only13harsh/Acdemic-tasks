#include "Arduino.h"
#include "Buzzer.h"
#include "DHT.h"
#include "PIR.h"


// Pin Definitions
#define BUZZER_PIN_SIG	0
#define DHT_PIN_DATA	2
#define MQ2_3V3_PIN_AOUT	12
#define PIR_PIN_SIG	4
#define RELAYMODULE4CH_PIN_IN1	5
#define RELAYMODULE4CH_PIN_IN2	6
#define RELAYMODULE4CH_PIN_IN4	8
#define RELAYMODULE4CH_PIN_IN3	7



// Global variables and defines
//define an array for the 4ch relay module pins
int RelayModule4chPins[] = { RELAYMODULE4CH_PIN_IN1, RELAYMODULE4CH_PIN_IN2, RELAYMODULE4CH_PIN_IN3, RELAYMODULE4CH_PIN_IN4 };
// object initialization
Buzzer buzzer(BUZZER_PIN_SIG);
DHT dht(DHT_PIN_DATA);
PIR pir(PIR_PIN_SIG);


// define vars for testing menu
const int timeout = 10000;       //define timeout of 10 sec
char menuOption = 0;
long time0;

// Setup the essentials for your circuit to work. It runs first every time your circuit is powered with electricity.
void setup() 
{
    // Setup Serial which is useful for debugging
    // Use the Serial Monitor to view printed messages
    Serial.begin(9600);
    while (!Serial) ; // wait for serial port to connect. Needed for native USB
    Serial.println("start");
    
    dht.begin();
    pinMode(RELAYMODULE4CH_PIN_IN1, OUTPUT);
    pinMode(RELAYMODULE4CH_PIN_IN2, OUTPUT);
    pinMode(RELAYMODULE4CH_PIN_IN3, OUTPUT);
    pinMode(RELAYMODULE4CH_PIN_IN4, OUTPUT);
    menuOption = menu();
    
}

// Main logic of your circuit. It defines the interaction between the components you selected. After setup, it runs over and over again, in an eternal loop.
void loop() 
{
    
    
    if(menuOption == '1') {
    // Buzzer - Test Code
    // The buzzer will turn on and off for 500ms (0.5 sec)
    buzzer.on();       // 1. turns on
    delay(500);             // 2. waits 500 milliseconds (0.5 sec). Change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    buzzer.off();      // 3. turns off.
    delay(500);             // 4. waits 500 milliseconds (0.5 sec). Change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    }
    else if(menuOption == '2') {
    // DHT22/11 Humidity and Temperature Sensor - Test Code
    // Reading humidity in %
    float dhtHumidity = dht.readHumidity();
    // Read temperature in Celsius, for Fahrenheit use .readTempF()
    float dhtTempC = dht.readTempC();
    Serial.print(F("Humidity: ")); Serial.print(dhtHumidity); Serial.print(F(" [%]\t"));
    Serial.print(F("Temp: ")); Serial.print(dhtTempC); Serial.println(F(" [C]"));

    }
    else if(menuOption == '3')
    {
    // Disclaimer: The Methane, Butane, LPG and Smoke Gas Sensor - MQ-2 is in testing and/or doesn't have code, therefore it may be buggy. Please be kind and report any bugs you may find.
    }
    else if(menuOption == '4') {
    // Infrared PIR Motion Sensor Module - Test Code
    bool pirVal = pir.read();
    Serial.print(F("Val: ")); Serial.println(pirVal);

    }
    else if(menuOption == '5') {
    // Relay Module 4-Ch - Test Code
    //This loop will turn on and off each relay in the array for 0.5 sec
    for (int i = 0; i < 4; i++) { 
    digitalWrite(RelayModule4chPins[i],HIGH);
    delay(500);
    digitalWrite(RelayModule4chPins[i],LOW);
    delay(500);
    }
    }
    
    if (millis() - time0 > timeout)
    {
        menuOption = menu();
    }
    
}



// Menu function for selecting the components to be tested
// Follow serial monitor for instrcutions
char menu()
{

    Serial.println(F("\nWhich component would you like to test?"));
    Serial.println(F("(1) Buzzer"));
    Serial.println(F("(2) DHT22/11 Humidity and Temperature Sensor"));
    Serial.println(F("(3) Methane, Butane, LPG and Smoke Gas Sensor - MQ-2"));
    Serial.println(F("(4) Infrared PIR Motion Sensor Module"));
    Serial.println(F("(5) Relay Module 4-Ch"));
    Serial.println(F("(menu) send anything else or press on board reset button\n"));
    while (!Serial.available());

    // Read data from serial monitor if received
    while (Serial.available()) 
    {
        char c = Serial.read();
        if (isAlphaNumeric(c)) 
        {   
            
            if(c == '1') 
    			Serial.println(F("Now Testing Buzzer"));
    		else if(c == '2') 
    			Serial.println(F("Now Testing DHT22/11 Humidity and Temperature Sensor"));
    		else if(c == '3') 
    			Serial.println(F("Now Testing Methane, Butane, LPG and Smoke Gas Sensor - MQ-2 - note that this component doesn't have a test code"));
    		else if(c == '4') 
    			Serial.println(F("Now Testing Infrared PIR Motion Sensor Module"));
    		else if(c == '5') 
    			Serial.println(F("Now Testing Relay Module 4-Ch"));
            else
            {
                Serial.println(F("illegal input!"));
                return 0;
            }
            time0 = millis();
            return c;
        }
    }
}
