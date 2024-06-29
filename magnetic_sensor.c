/*
    Project name : Arduino Uno Magnetic Sensor (Hall Effect)
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-magnetic-sensor
*/

// Pin connected to the Hall effect sensor's signal output
const int sensorPin = 2;

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  pinMode(sensorPin, INPUT_PULLUP);  // Set sensor pin as input with internal pull-up resistor
}

void loop() {
  int sensorValue = digitalRead(sensorPin);  // Read sensor state

  if (sensorValue == LOW) {
    Serial.println("Magnetic field detected");
  } else {
    Serial.println("No magnetic field");
  }

  delay(500);  // Delay for readability
}
