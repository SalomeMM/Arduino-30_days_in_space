// Check whether the battery is fully charged

int sensorPin = A0;
int onboardLED = 13;
int sensorValue = 0; // temp variable
unsigned int batteryCapacity = 50000; // max value that our battery is gonna hold
unsigned int batteryLevel = 0; // starting value

void PrintBatteryPercentage(){
  Serial.print(((double)batteryLevel / (double)batteryCapacity)*100);
  Serial.println("%");
}

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(onboardLED, OUTPUT);
  Serial.begin(9600); // 9600 = baud rate = data rate in bits/second for serial data transmission
}

void loop() {
  sensorValue = analogRead(sensorPin); // works for inputs like digitalRead
  batteryLevel += sensorValue; // same as "batteryLevel = batteryLevel + sensorValue"
  if (batteryLevel >= batteryCapacity) {
    Serial.println("Fully Charged!");
    batteryLevel = batteryCapacity;
  } else {
    PrintBatteryPercentage();
  }
  delay(50);
}
