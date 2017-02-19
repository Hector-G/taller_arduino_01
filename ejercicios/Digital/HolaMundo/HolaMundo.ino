int LED = 13;               //Asignamos un nombre al PIN 13

void setup() {           //El código de setup se ejecuta sólo una vez
  pinMode(LED,OUTPUT);      //Configuramos el pin como salida
}

void loop() {            //El código de loop se ejecuta en bucle infinitamente
  digitalWrite(LED,HIGH);   //Encender el LED
  delay(1000);              //Dejar encendido 1000 milisegundos
  digitalWrite(LED,LOW);    //Apagar el LED
  delay(1000);              //Dejar apagado 1000 milisegundos
}