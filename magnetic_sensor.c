/*
    Project name : Magnetic Sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-magnetic-sensor
*/

const int sensorPin = 2; // Digital pin connected to the magnetic sensor
const int ledPin = 13;   // Digital pin connected to the LED

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
  pinMode(sensorPin, INPUT_PULLUP); // Set the sensor pin as an input with internal pull-up resistor
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue = digitalRead(sensorPin); // Read the digital value from the sensor
  Serial.print("Sensor value: ");
  Serial.println(sensorValue); // Print the sensor value to the serial monitor
  
  if (sensorValue == LOW) {  // Check if the sensor detects a magnetic field
    digitalWrite(ledPin, HIGH); // Turn on the LED if the magnetic field is present
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED if the magnetic field is absent
  }
  
  delay(500); // Delay for stability
}
