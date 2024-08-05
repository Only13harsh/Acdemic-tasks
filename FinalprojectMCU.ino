#define BLYNK_TEMPLATE_ID "TMPL3Ic1lZCVz"
#define BLYNK_TEMPLATE_NAME "IoT Smart Exhaust Fan"
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);


#include <SPI.h>
#include <MFRC522.h>
#include <string.h>
#include <ESP8266WiFi.h> // Include WiFi library if needed 
#include <Servo.h>

char auth[] = "EMMYy9CtqSvX83hYK164hUSUlcijyhgd";
char ssid[] = "LAPTOP-AR1TDME3 5270";
char pass[] = "123456780";

#define DHTPIN 10
#define DHTTYPE DHT11
#define DO_PIN D0                                                                                                                // FIRE



/////////////// RFID + SERVO  ////////////////////////

// Define pins connected to the MFRC522 reader
#define SS_PIN D4  // Chip Select
#define RST_PIN D3 // Reset

String a = "";
Servo myservo;

// Create an instance of the MFRC522 reader
MFRC522 mfrc522(SS_PIN, RST_PIN);


///////////////////////////////////////





const int gasSensorPin = A0;
const int relayPin = 3;

const int gasThreshold = 30;

DHT dht(DHTPIN, DHTTYPE);

bool manualMode = false;  // Default to manual mode initially
bool fire = false;



void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.clear();
  lcd.backlight();
  lcd.print("Connecting.....");
  dht.begin();
  Blynk.begin(auth, ssid, pass);

  pinMode(10,INPUT);

  pinMode(relayPin, OUTPUT);
  pinMode(gasSensorPin, INPUT);

  // Ensure relay starts off (LOW)
  digitalWrite(relayPin, LOW);
  pinMode(DO_PIN, INPUT);                                                                                           //FIRE


///////////////// RFID + SERVO  ////////////////////////



 myservo.attach(D8,500, 2400);

  // Initialize SPI communication
  SPI.begin();

  // Initialize MFRC522 reader
  mfrc522.PCD_Init();
  Serial.println("MFRC522 Reader Initiated");
    myservo.write(0);





////////////////////////////////////////////////////////////////////////
  
  delay(2000);
}

BLYNK_WRITE(V3) {
  int blink_relay_value = param.asInt();
  

  {
    if (blink_relay_value) {
      manualMode = true;
      digitalWrite(relayPin, LOW);
      
    } else {
      digitalWrite(relayPin, HIGH);
    
      manualMode = false;
    }

    Serial.print("Blink relay value : ");
    Serial.println(blink_relay_value);
    delay(1000);
  
  }

  
}

void loop() {
  Blynk.run();

  myservo.write(0);
  int sensorValue = analogRead(gasSensorPin);
  int gas_percentage = map(sensorValue, 0, 1023, 0, 100);

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println("%");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C ");

  Serial.print("Gas sensor value: ");
  Serial.println(sensorValue);

  Serial.print("Gas Percentage: ");
  Serial.print(gas_percentage);
  Serial.println("%");

  Serial.println();

  // Turn on relay based on gas sensor and manual mode
  if (manualMode ==false && gas_percentage > gasThreshold) {
    digitalWrite(relayPin, LOW);
    Blynk.virtualWrite(V3, HIGH);
  } else if(manualMode ==false) {
    digitalWrite(relayPin, HIGH);
    Blynk.virtualWrite(V3, LOW);
  }
  


///////////////// RFID + SERVO  ////////////////////////






  // Check for a new RFID card
  if (mfrc522.PICC_IsNewCardPresent()) {
    // Read the card's serial number (UID)
    if (mfrc522.PICC_ReadCardSerial()) {
      // Serial.print("Tag UID: ");

      // Print each byte of the UID in hexadecimal format
      for (byte i = 0; i < mfrc522.uid.size; i++) {
        // Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? "0" : "");
        // Serial.print(mfrc522.uid.uidByte[i], HEX);
        a += String(mfrc522.uid.uidByte[i], HEX);
      }
      Serial.println();
      a.toUpperCase();

      // Compare UID with the target stri/ng
      if (a == "EA3BD247") {
          Serial.println("UID Matched!");
          rotateClockwise();
          
          delay(5000);
          rotateAnticlockwise();

      } else {
          Serial.println("UID Missmatched!");
          // rotateClockwise();
          
      }

      // Halt communication with the card
      mfrc522.PICC_HaltA();
      a = ""; // Clear the string for next UID
    }
  }




////////////////////////////////////////////////////////////////////




/////////////////////////////// FIRE SYSTEM //////////////////////////

  int flame_state = digitalRead(DO_PIN);

  if (flame_state == HIGH)
    {
      Serial.println("No flame => No fire detected");
      Blynk.virtualWrite(V4, LOW);
      fire =false;
    }
  else
  {
        Serial.println("Flame present => Fire detected");                                                                         // FIRE ALERT 
          Blynk.virtualWrite(V4, HIGH);
          fire =true;
  }

////////////////////////////////////////////////////////////////////////////


  // digitalWrite(2, HIGH);
  // delay(1000);
  // digitalWrite(2, LOW);
  // delay(1000);
  
lcd.clear();
  Blynk.virtualWrite(V0, gas_percentage);
  lcd.setCursor(0,0);
  lcd.print("G:");
  lcd.print(gas_percentage);
  lcd.print("%");

  Blynk.virtualWrite(V1, temperature);
  lcd.setCursor(6,0);
  lcd.print("T:");
  lcd.print(temperature);
  lcd.print("*C");



  Blynk.virtualWrite(V2, humidity);
  lcd.setCursor(0,1);
  lcd.print("H:");
  lcd.print(int(humidity));

  lcd.setCursor(8,1);
  if(fire){
    lcd.clear();
    lcd.print("Fire:NO");}
  else
   lcd.print("Fire:YES");
    

  delay(1000);
}



void rotateClockwise() {
  int angle =180,  speed =15;
  for (int pos = 0; pos <= angle; pos += speed) {
    myservo.write(pos);
    delay(speed);
  }
}

// Function to rotate anticlockwise
void rotateAnticlockwise() {
  int angle =180,  speed =15;
  for (int pos = angle; pos >= 0; pos -= speed) {
    myservo.write(pos);
    delay(speed);
  }
}
