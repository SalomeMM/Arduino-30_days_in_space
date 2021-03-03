int LED1 = 12; // output wire
int LED2 = 11;
int LED3 = 10;
int Switch1 = 2;
int Switch2 = 3;
int Switch3 = 4;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(Switch1, INPUT); // input because the board is going to be taking in the state of the dip switch
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
}

void loop() {
  // Switch/LED 1 ON/OFF
  if(digitalRead(Switch1) == 1) { // if the switch is in position 1 (on)...
    digitalWrite(LED1, HIGH); // ... then turn the LED on with 5V (high)
  }
  else {
    digitalWrite(LED1, LOW); // if the switch is 0 (off), turn the led off (ground)
  }
  // Switch/LED 2 ON/OFF
  if(digitalRead(Switch2) == 1) {
    digitalWrite(LED2, HIGH);
  }
  else {
    digitalWrite(LED2, LOW);
  }
  // Switch/LED 3 ON/OFF
  if(digitalRead(Switch3) == 1) {
    digitalWrite(LED3, HIGH);
  }
  else {
    digitalWrite(LED3, LOW); //
  }
}
