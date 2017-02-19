int LED1 = 10;                  //Nombramos los pines
int LED2 = 11;
int LED3 = 12;
int LED4 = 13;

int pinBotonA = 2;              //Conectamos el botónA al pin 2
int pinBotonB = 3;              //Conectamos el botónB al pin 3

void setup() {
  pinMode(LED1,OUTPUT);         //Configuramos los pines
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  
  pinMode(pinBotonA,INPUT);     
  pinMode(pinBotonB,INPUT);     
}

void loop() {
  
  if(digitalRead(pinBotonA) == HIGH){          //Si estamos pulsandoA
      digitalWrite(LED1,HIGH);    //Encender LEDs
      digitalWrite(LED2,HIGH);
      digitalWrite(LED3,HIGH);
      digitalWrite(LED4,HIGH);
  }
  if(digitalRead(pinBotonB) == HIGH){
      digitalWrite(LED1,LOW);    //Apagar LEDs
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,LOW);
      digitalWrite(LED4,LOW);
  }
}