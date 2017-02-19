int valorPot;                           //Creamos una variable para almacenar el valor del sensor

void setup() {
  Serial.begin(9600);                   //Abrimos comunicación serie (USB) con el ordenador 
}

void loop() {
  valorPot = analogRead(A0);            //Leemos el PIN A0 y lo guardamos en valorPot
  Serial.println(valorPot);             //Escribimos en la consola
  
  delay(100);                           //Esperamos un poco para que tome bien las lecturas
}
