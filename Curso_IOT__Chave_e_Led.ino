
//Declaração das constantes
const int led = D4;   //constante led refere-se ao pino digital 4.
const int botao = D1; //constante botão refere-se ao pino digital 1.
 
//Variável que conterá os estados do botão (0 LOW, 1 HIGH).
int estadoBotao = 0;
 
//Método setup, executado uma vez ao ligar o Arduino.
void setup() {
  Serial.begin(9600); //Ver programa rodando
  pinMode(led,OUTPUT);  //Definindo pino digital 8 como de saída.
  pinMode(botao,INPUT_PULLUP); //Definindo pino digital 2 como de entrada. 
}
 
//Método loop, executado enquanto o Arduino estiver ligado.
void loop() {  
  //Lendo o estado do pino 1, constante botao, e atribuindo 
  //o resultado a variável estadoBotao.
  estadoBotao = digitalRead(botao);
  
  //Verificando o estado do botão para definir se acenderá ou
  //apagará o led.  
  if (estadoBotao == HIGH) {
    digitalWrite(led,LOW);//Botão pressionado, acende o led.
    Serial.print("Status=");
    Serial.println(estadoBotao);
    
  }else{
    digitalWrite(led,HIGH);  //Botão não pressionado, apaga o led.
    Serial.print("Status=");
    Serial.println(estadoBotao);
      
}
       
}
