#define LED1 2   // GPIO2 or D4
#define LED2 16  // GPIO16 or D0

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  // Turn on LED1
  digitalWrite(LED1, HIGH);
  delay(500);

  // Turn off LED1
  digitalWrite(LED1, LOW);

  // Turn on LED2
  digitalWrite(LED2, HIGH);
  delay(500);

  // Turn off LED2
  digitalWrite(LED2, LOW);
}
