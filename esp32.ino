void setup() {
  Serial.begin(9600); //Main serial of the ESP32
  Serial2.begin(9600); //Second serial of the ESP32 (responsible for the communcation with the Arduino)
}

String msg;

void loop() {
  
  Serial2.println("Esp para Arduino"); //Message that will be sent to the Arduino
  delay(2000); //2 seconds delay to avoid interference

  if (Serial2.available() > 0) // If Arduino's serial is available
  {
    msg = Serial2.readString(); //received message coming from Arduino
    Serial.println(msg); //Writes on ESP32's serial monitor the message from Arduino
  }
  

}
