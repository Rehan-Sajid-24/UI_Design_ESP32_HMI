const int ledPin = 23;  // Pin where the LED is connected
String receivedData = "";  // String to store incoming data

void setup() {
  Serial.begin(115200);  // Start serial communication
  pinMode(ledPin, OUTPUT);  // Set LED pin as an output
  digitalWrite(ledPin, LOW);  // Make sure the LED is off initially
}

void loop() {
  // Check if there's any data available to read
  if (Serial.available() > 0) {
    char incomingChar = Serial.read();  // Read a character from serial

    // If the newline character is received, the string is complete
    if (incomingChar == '\n') {
      if (receivedData == "Yellow") {
        digitalWrite(ledPin, HIGH);  // Turn on LED
      } 

      receivedData = "";  // Clear the string for new input
    } else {
      receivedData += incomingChar;  // Append character to received data
    }
  }
}
