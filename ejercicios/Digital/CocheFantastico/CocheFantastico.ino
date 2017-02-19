int LED1 = 10;              //Nombramos los pines
int LED2 = 11;
int LED3 = 12;
int LED4 = 13;

int tiempo = 200;           //Tiempo de espera


void setup() {              //Aquí el código se ejecuta sólo una vez
  pinMode(LED1,OUTPUT);     //Configuramos los pines
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);  
  pinMode(LED4,OUTPUT);
  
  digitalWrite(LED1,LOW);   //Iniciamos los LEDs apagados
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
}


void loop() {               //Aquí el código se ejecuta en bucle
  digitalWrite(LED1,HIGH);  //Secuencia de encender y apagar LEDs
  delay(tiempo);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(tiempo);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  delay(tiempo);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,HIGH);
  delay(tiempo);
  digitalWrite(LED4,LOW);
  digitalWrite(LED3,HIGH);
  delay(tiempo);
  digitalWrite(LED3,LOW);
  digitalWrite(LED2,HIGH);
  delay(tiempo);
  digitalWrite(LED2,LOW);
}  