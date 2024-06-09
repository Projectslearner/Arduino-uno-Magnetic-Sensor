# Magnetic Sensor with Arduino

#### Project Overview

This project demonstrates how to use an Arduino Uno with a magnetic sensor to detect the presence or absence of a magnetic field. When a magnetic field is detected, an LED connected to the Arduino Uno illuminates.

#### Components Needed

1. **Arduino Uno**
2. **Magnetic Sensor (Hall Effect Sensor or Reed Switch)**
3. **LED**
4. **220Ω Resistor**
5. **Jumper Wires**

### Block Diagram



#### Instructions

1. **Circuit Setup:**
   - Connect the output pin of the magnetic sensor to digital pin 2 on the Arduino Uno.
   - Connect one terminal of the LED to digital pin 13 on the Arduino Uno via a 220Ω current-limiting resistor.
   - Connect the other terminal of the LED to the ground (GND) pin on the Arduino Uno.

2. **Initialization:**
   - Initialize serial communication at a baud rate of 9600 in the `setup()` function.
   - Set the sensor pin as an input with the internal pull-up resistor enabled using `pinMode(sensorPin, INPUT_PULLUP)`.

3. **Sensor Reading and LED Control:**
   - Read the digital value from the magnetic sensor using the `digitalRead()` function.
   - Print the sensor value to the Serial Monitor for monitoring.
   - Use an `if` statement to check if the sensor detects a magnetic field (sensor value is `LOW`).
   - If a magnetic field is detected, turn on the LED by setting the corresponding pin to `HIGH`.
   - If no magnetic field is detected, turn off the LED by setting the corresponding pin to `LOW`.

4. **Testing:**
   - Upload the code to the Arduino Uno and open the Serial Monitor.
   - Observe the sensor value displayed on the Serial Monitor.
   - Bring a magnet close to the magnetic sensor to observe the LED turning on when a magnetic field is detected.

5. **Adjustments:**
   - Ensure proper orientation and connection of the magnetic sensor to the Arduino Uno.
   - Experiment with different magnet strengths and distances to understand the sensor's sensitivity and range.
   - Adjust the code as needed for specific application requirements.

#### Applications

- **Proximity Detection:** Use magnetic sensors for proximity detection applications, such as door/window sensors or proximity switches.
- **Position Detection:** Detect the position of magnetic objects or magnets in various applications.
- **Security Systems:** Incorporate magnetic sensors into security systems to detect the presence of magnets or magnetic objects.

#### Notes

- Ensure proper orientation and connection of the magnetic sensor and LED to the Arduino Uno.
- Experiment with different magnet strengths and distances to optimize the sensitivity and range of the sensor.

---

🌐 [projectslearner.com](https://projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner