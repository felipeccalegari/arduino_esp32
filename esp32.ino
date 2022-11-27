void setup() {
  Serial.begin(9600); //Serial principal da ESP
  Serial2.begin(9600); //Segunda serial da ESP (comunica com o Arduino)
}

String msg;

void loop() {
  
  Serial2.println("Esp para Arduino"); //Mensagem que será enviada para o Arduino
  delay(2000); //é feito um delay de 2s para que não haja interferência com o que está sendo enviado pelo Arduino

  if (Serial2.available() > 0) // Se a serial do Arduino estiver disponível
  {
    msg = Serial2.readString(); //mensagem será o que estiver sendo escrito na serial do Arduino
    Serial.println(msg); //Escreve no serial monitor da ESP o que está recebendo do Arduino
  }
  

}
