//Seven Nation Army de The White Stripes
//Hector-G 2017

int piezo = 10;

void setup() {
    pinMode(piezo,OUTPUT);
}

void loop() {
    tone(piezo,440);
    delay(500);
    noTone(piezo);
    delay(250);
    tone(piezo,440);
    delay(125);
    noTone(piezo);
    delay(125);
    tone(piezo,523);
    delay(250);
    noTone(piezo);
    delay(125);
    tone(piezo,440);
    delay(250);
    noTone(piezo);
    delay(125);
    tone(piezo,392);
    delay(125);
    noTone(piezo);
    delay(125);
    tone(piezo,349);
    delay(750);
    noTone(piezo);
    delay(250);
    tone(piezo,330);
    delay(750);
    noTone(piezo);
    delay(250);
}
