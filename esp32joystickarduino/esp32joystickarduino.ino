// Define pin connections for the joystick
const int Joystick_x  =  0;
const int Joystick_y  =  1;
const int Button      = 10;

int ButtonState = 0;
int xVal = 0;
int yVal = 0;

void setup() {
  // Initialize serial communication
  Serial.begin(115200);

  // Set joystick button pin as input
  pinMode(Button, INPUT_PULLUP);

  Serial.println("Joystick initialized!");
}

void loop() {
  // Read joystick X and Y axis values
  int xValue = analogRead(Joystick_x);
  int yValue = analogRead(Joystick_y);

  // Read joystick button state
  int ButtonState = digitalRead(Button);

  // Print the values to the Serial Monitor
  //Serial.print("X-axis: ");
  Serial.print(xValue);
  Serial.print(",");
  //Serial.print("Y-axis: ");
  Serial.print(yValue);
  Serial.print(",");
  //Serial.print("Button: ");
  if (ButtonState == LOW) {
    Serial.println(3250);
  } else {
    Serial.println(0);
  }

  // Add a short delay for stability
  delay(100);
}