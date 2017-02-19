int pinLED = 13;                //Conectamos el LED al pin 13
int pinBoton = 3;               //Conectamos el botón al pin 2

void setup() {
  pinMode(pinLED,OUTPUT);       //Configuramos el pin del LED
  pinMode(pinBoton,INPUT);      //Configuramos el pin del botón
}

void loop() {
  if(digitalRead(pinBoton) == HIGH){  //Si estamos pulsando
      digitalWrite(pinLED,HIGH);      //Encender el LED
  }
  else{
      digitalWrite(pinLED,LOW);       //Apagar el LED
  }
  delay(100);
}