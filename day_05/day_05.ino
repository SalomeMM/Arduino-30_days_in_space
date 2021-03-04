int LED1 = 12;
int LED2 = 11;
int LED3 = 10;
int LED4 = 9;
int Switch1 = 2;
int Switch2 = 3;
int Switch3 = 4;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(Switch1, INPUT);
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
}

void loop() {
  // Switch/LED 1 ON/OFF
  if(digitalRead(Switch1) == 1) {
    digitalWrite(LED1, HIGH);
  }
  else {
    digitalWrite(LED1, LOW);
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
    digitalWrite(LED3, LOW);
  }
    // LED 4 ON/OFF by turning all 3 switches on
  if((digitalRead(Switch1) == 1) && (digitalRead(Switch2) == 1) && (digitalRead(Switch3) ==1)) {
    digitalWrite(LED4, HIGH);
  }
  else {
    digitalWrite(LED4, LOW);
  }
}
