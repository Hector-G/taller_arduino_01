int valorLDR;                           //Creamos una variable para almacenar el valor del sensor
int valorLED;                           //Variable para la intensidad del LED
int pinLED = 10;

void setup() {
  Serial.begin(9600);                   //Abrimos comunicación serie (USB) con el ordenador
  pinMode(pinLED,OUTPUT);
}

void loop() {
  valorLDR = analogRead(A0);            //Leemos el PIN A0 y lo guardamos en valorPot
  Serial.println(valorLDR);             //Escribimos en la consola
  
  valorLED = map(valorLDR,0,1023,0,255);
  
  analogWrite(pinLED,valorLED);
  
  delay(100);                           //Esperamos un poco para que tome bien las lecturas
}
