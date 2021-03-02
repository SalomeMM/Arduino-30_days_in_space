int LED = 12; // output wire
int Switch1 = 2;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Switch1, INPUT); // input because the board is going to be taking in the state of the dip switch
}

void loop() {
  // we want to read the signal of the switch, not write it as with "digitalWrite" for the LED
  if(digitalRead(Switch1) == 1) { // if the switch is in position 1 (on)...
    digitalWrite(LED, HIGH); // ... then turn the LED on with 5V (high)
  }
  else {
    digitalWrite(LED, LOW); // if the switch is 0 (off), turn the led off (ground)
  }
}
