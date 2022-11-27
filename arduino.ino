#include <SoftwareSerial.h>

const byte rxPin = 2; //Pino RX no Arduino
const byte txPin = 3; //Pino TX no Arduino

//Como o Arduino possui apenas uma porta Serial nativa
//é necessário criar uma Serial "Emulada" para enviar os dados
//para a ESP com o auxílio da biblioteca Software Serial.

SoftwareSerial SerialEmulado(rxPin, txPin);

void setup() {
  Serial.begin(9600);
  SerialEmulado.begin(9600);

}

String mensagem;

void loop() {
  delay(1000);
  
  //Mensagem que irá para a serial da ESP
  SerialEmulado.println("Arduino para ESP");
  delay(1000);
  
  if (SerialEmulado.available() > 0) //Se a serial da ESP estiver disponível
  {
    mensagem = SerialEmulado.readString(); //mensagem será o que estiver escrito na serial da ESP
    Serial.println(mensagem); //Escreve no serial monitor do Arduino o que está sendo enviado pela ESP
  }

}
