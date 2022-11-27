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

It was used 2 resistors (1k ohm and 2k ohm) as voltage divider since the ESP32 operates with 3.3V and the Arduino operates with 5V.

The circuit can be seen below

![Circuit for the Serial Communication between Arduino and ESP32](/diagram.png "Circuit")
