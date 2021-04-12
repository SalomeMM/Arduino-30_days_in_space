// Check whether the battery is fully charged
// Show different colors for different battery levels

int sensorPin = A0; // select the input pin for the potentiometer
int sensorValue = 0; // temp variable to store the value coming from the sensor
unsigned int batteryCapacity = 50000; // max value that our battery is gonna hold
unsigned int batteryLevel = 0; // starting value

// RGB LED PINS
int blue = 9;
int green = 10;
int red = 11;

void RGB_color(int red_value, int green_value, int blue_value) {
  analogWrite(red, red_value);
  analogWrite(green, green_value);
  analogWrite(blue, blue_value);
}

double getBatteryPercentage(){
  return(((double)batteryLevel / (double)batteryCapacity)*100);
}

void setup() {
  // declare the ledPin as an OUTPUTs:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
  // Start serial monitor
  Serial.begin(9600); // 9600 = baud rate = data rate in bits/second for serial data transmission
}

void loop() {
  sensorValue = analogRead(sensorPin); // read the value from the sensor:
  batteryLevel += sensorValue;
 
  double percentage = getBatteryPercentage();
 
  if (percentage >= 100) { // if fully charged
    RGB_color(0, 0, 255); // blue
    batteryLevel = batteryCapacity; // to prevent integer overflow errors
    percentage = 100; // to prevent from displaying over 100%
  } // missing 75-100?!
  else if (percentage < 100 && percentage > 75) {
    RGB_color(0, 255, 0); // green
  }
  else if (percentage <= 75 && percentage > 50) {
    RGB_color(255, 255, 0); // yellow
  }
  else if (percentage <= 50 && percentage > 25){
    RGB_color(255, 100, 0); // orange
  }
  else if (percentage > 0 && percentage <= 25){
    RGB_color(255, 0, 0); // red
  }
 
  Serial.print(percentage);
  Serial.println("%");
 
  delay(10);
}
