int LED = 12; // output wire

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH); // high sends 5V
}

void loop() { // 1 second each
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
}
