int piezo = 10;

void setup() {
    pinMode(piezo,OUTPUT);
}

void loop() {
    tone(piezo,440);            //Pin de salida, frecuencia en Hz
    delay(2000);
    noTone(piezo);              //Detiene el sonido
    delay(1000);
}
