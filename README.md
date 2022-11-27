# Serial communication - Arduino and ESP32

Code to send data from Arduino Uno to ESP32 and from ESP32 to Arduino Uno.

Since the Arduino doesn't have a second serial port, we need to "emulate" a second one with the "SoftwareSerial" library.
The ESP32 does has another serial port so no need to use that library for this purpose.

**Wiring:**

**Arduino**:
Rx = 2;
Tx = 3;

**ESP32:**

Rx = 16;
Tx = 17;

