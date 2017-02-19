int pinLED = 10;                //Conectamos el LED al pin 10
int valorPot;                   //Lectura del potenciómetro
int valorLED;                   //Intensidad del LED

void setup() {
  Serial.begin(9600);           //Abrimos comunicación serie
  pinMode(pinLED,OUTPUT);       //Configuramos el pin del LED
}

void loop() {
  valorPot = analogRead(A0);    //Leemos el potenciómetro
  Serial.println(valorPot);  //Mostramos el valor por consola
  
  valorLED = valorPot/4;        //Rango pot(0-1023), rango led(0-255)

  analogWrite(pinLED, valorLED);    //Escribimos el valor de intensidad del LED
  
  delay(100);
}