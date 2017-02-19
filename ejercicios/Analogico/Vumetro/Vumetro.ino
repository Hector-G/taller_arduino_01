int LED1 = 10;                  //Nombres de los pines
int LED2 = 11;
int LED3 = 12;
int LED4 = 13;

int valor;                      //Variable para almacenar la lectura del potenciómetro

void setup() {
  pinMode(LED1,OUTPUT);         //Configuramos los pines
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);  
  pinMode(LED4,OUTPUT);
  
  digitalWrite(LED1,LOW);       //Apagamos los LEDs
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
}

void loop() {
  
  valor = analogRead(0);        //Leemos el potenciómetro y lo guardamos en la variable
  
  if(valor < 256){              //1023 * 1/4 Encender sólo un LED
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
  }

  else if(valor < 512){         //1023 * 2/4 Encender dos LEDs
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
  }

  else if(valor < 768){         //1023 * 3/4 Encender tres LEDs
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, LOW);
  }

  else{                         //Encender todos los LEDs
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
  }

  delay(100);
}
