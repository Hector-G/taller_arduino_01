int pinLED = 10;                //Conectamos el LED al pin 10

void setup() {
  pinMode(pinLED,OUTPUT);       //Configuramos el pin del LED
}

void loop() {
    
  for(int i = 0; i <= 255; i++){
      analogWrite(pinLED,i);    //Incrementamos la intensidad del LED
      delay(10);
  }
  
  for(int i = 255; i >= 0; i--){
      analogWrite(pinLED,i);    //Decrementamos la intensidad del LED
      delay(10);
  }
  
}