int valorLDR;                           //Creamos una variable para almacenar el valor del sensor
int frecuencia;                         //Frecuencia a la que suena el piezo
int pinBuzzer = 10;

void setup() {
  Serial.begin(9600);                   //Abrimos comunicación serie (USB) con el ordenador
  pinMode(pinBuzzer,OUTPUT);
}

void loop() {
  valorLDR = analogRead(A0);            //Leemos el PIN A0 y lo guardamos en valorPot
  Serial.println(valorLDR);             //Escribimos en la consola
  
  frecuencia = map(valorLDR,0,1023,40,2000);
  
  tone(pinBuzzer,frecuencia);
  
  delay(50);                           //Esperamos un poco para que tome bien las lecturas
}
