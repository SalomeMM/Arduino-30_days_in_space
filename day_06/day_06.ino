// Time to fix the battery: the onboardLED will blink with a speed in ms equal to the amount of light we receive in lux

int sensorPin = A0;
int onboardLED = 13;
int sensorValue = 0; // temp variable

void setup() {
  pinMode(onboardLED, OUTPUT);
  Serial.begin(9600); // 9600 = baud rate = data rate in bits/second for serial data transmission
}

void loop() {
  sensorValue = analogRead(sensorPin); // works for inputs like digitalRead
  digitalWrite(onboardLED, HIGH);
  delay(sensorValue);
  digitalWrite(onboardLED, LOW);
  delay(sensorValue);
  Serial.println(sensorValue);
  delay(500);
}
