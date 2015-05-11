/*
  SerialEcho.ino
  Reads a character from the serial port (UART), and echos it
  This example code is in the public domain.
*/

char inByte;

// the setup routine runs once when you press reset:
void setup() {
    // initialize serial communication at 9600 bits per second:
    Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
    if (Serial.available() > 0) {
        inByte = Serial.read();
        Serial.write(inByte);
    }
}

