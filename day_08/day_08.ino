// Check whether the battery is fully charged

// PWM:
int blue = 9;
int green = 10;
int red = 11;

void RGB_color(int red_value, int green_value, int blue_value) {
  analogWrite(red, red_value);
  analogWrite(green, green_value);
  analogWrite(blue, blue_value);
  delay(1000);
}

void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  RGB_color(125, 0, 0); // RED
  RGB_color(0, 125, 0); // GREEN
  RGB_color(0, 0, 125); // BLUE
  RGB_color(125, 125, 0); // YELLOW
  RGB_color(125, 0, 125); // PURPLE
  RGB_color(125, 125, 125); // WHITE
}
