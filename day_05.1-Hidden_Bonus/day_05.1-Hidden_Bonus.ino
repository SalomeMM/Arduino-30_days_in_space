// tripwire alarm that will trigger when the line has broken

int tripWirePin = 8;
int buzzerPin = 9;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
}
 
// the loop function runs over and over again forever
void loop() {
  if(digitalRead(tripWirePin) != 0) { // if not = 0, not low, then the system is OK
    Serial.println("System Armed");
  }
  else { // if = 0, the line has been brooken, thief detected!
    tone(buzzerPin, 650, 1000);
    delay(5000);
    Serial.println("RED ALERT! TRIPWIRE ERROR DETECTED!");
    noTone(buzzerPin);
    delay(2000);
  }
}
