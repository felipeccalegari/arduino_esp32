#include <SoftwareSerial.h>

const byte rxPin = 2; //RX Pin - Arduino
const byte txPin = 3; //TX Pin - Arduino
/**
Since the Arduino only has one serial port available,
its needed to create an "emulated" serial port to send and receive the data
to the ESP32 with the "SoftwareSerial" library.
*/

SoftwareSerial SerialEmulado(rxPin, txPin);

void setup() {
  Serial.begin(9600);
  SerialEmulado.begin(9600);

}

String mensagem;

void loop() {
  delay(1000);
  
  SerialEmulado.println("Arduino para ESP"); //Message that will be sent to the ESP32
  delay(1000);
  
  if (SerialEmulado.available() > 0) //If ESP32's serial is available
  {
    mensagem = SerialEmulado.readString(); //message coming from the ESP32
    Serial.println(mensagem); //Print's on ESP32's serial monitor the message from ESP32
  }

}
