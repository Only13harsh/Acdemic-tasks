int led = 8;
int PIR1 = 2;
int PIR2 = 14;
int flag1 = 0;
int flag2 = 0;
int count = 0;

void setup() {
  Serial.begin(9600);
  pinMode(PIR1, INPUT);
  pinMode(PIR2, INPUT);
  pinMode(led, OUTPUT);

  Serial.println("Total students present: ");
  Serial.println(count);
}

void loop() {
  // PIR SENSOR CODE
  int nilai = digitalRead(PIR1);
  if (nilai == HIGH) {
    digitalWrite(led, HIGH);
    Serial.println("Sensor activated!");
    
    // Counting logic for student entry
    if (flag1 == 0) {
      count++;
      Serial.println("Student entered");
      flag1 = 1;
    }
  } else {
    digitalWrite(led, LOW);
    
    // Reset flag1 when PIR1 is not triggered
    flag1 = 0;
  }

  // Counting logic for student exit
  int x2 = digitalRead(PIR2);
  if (x2 == 1 && flag2 == 0) {
    count--;
    if (count < 0) {
      count = 0; 
    }
    Serial.println("Student left");
    flag2 = 1;
  } else if (x2 == 0) {
    flag2 = 0;
  }

  // Display total count
  Serial.print("Total students present: ");
  Serial.println(count);

  // Delay for 5 seconds
  delay(5000);
}
