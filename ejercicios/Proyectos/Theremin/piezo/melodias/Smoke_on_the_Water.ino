//Smoke on the Water de Deep Purple
//Hector-G 2017

int piezo = 10;

void setup() {
    pinMode(piezo,OUTPUT);
}

void loop() {
    tone(piezo,440);
    delay(300);
    noTone(piezo);
    delay(300);
    tone(piezo,523);
    delay(300);
    noTone(piezo);
    delay(300);
    tone(piezo,587);
    delay(600);
    noTone(piezo);
    delay(300);
    tone(piezo,440);
    delay(300);
    noTone(piezo);
    delay(300);
    tone(piezo,523);
    delay(300);
    noTone(piezo);
    delay(300);
    tone(piezo,622);
    delay(200);
    noTone(piezo);
    delay(100);
    tone(piezo,587);
    delay(900);
    noTone(piezo);
    delay(300);
    tone(piezo,440);
    delay(300);
    noTone(piezo);
    delay(300);
    tone(piezo,523);
    delay(300);
    noTone(piezo);
    delay(300);
    tone(piezo,587);
    delay(600);
    noTone(piezo);
    delay(300);
    tone(piezo,523);
    delay(300);
    noTone(piezo);
    delay(300);
    tone(piezo,440);
    delay(900);
    noTone(piezo);
    delay(1200);
}
