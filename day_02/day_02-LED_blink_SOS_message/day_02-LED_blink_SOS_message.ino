int LED = 12; // output wire

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW); // high sends 5V
}

void loop() {
  digitalWrite(LED, HIGH); // s1
  delay(100);
  digitalWrite(LED, LOW);
  delay(100);
  digitalWrite(LED, HIGH); // s2
  delay(100);
  digitalWrite(LED, LOW);
  delay(100);
  digitalWrite(LED, HIGH); // s3
  delay(100);
  digitalWrite(LED, LOW); // ...
  delay(1000);
  digitalWrite(LED, HIGH); // 01
  delay(500);
  digitalWrite(LED, LOW);
  delay(100);
  digitalWrite(LED, HIGH); // 02
  delay(500);
  digitalWrite(LED, LOW);
  delay(100);
  digitalWrite(LED, HIGH); // 03
  delay(500);
  digitalWrite(LED, LOW); // ...
  delay(1000);
  digitalWrite(LED, HIGH); // s1
  delay(100);
  digitalWrite(LED, LOW);
  delay(100);
  digitalWrite(LED, HIGH); //s2
  delay(100);
  digitalWrite(LED, LOW);
  delay(100);
  digitalWrite(LED, HIGH); // s3
  delay(100);
  digitalWrite(LED, LOW); // ...,.
  delay(3000);
}
