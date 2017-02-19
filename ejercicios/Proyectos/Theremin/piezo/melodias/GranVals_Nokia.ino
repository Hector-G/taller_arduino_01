//Gran Vals (Melodía Nokia) de Francisco Tárrega
//Hector-G 2017

int piezo = 10;

void setup() {
    pinMode(piezo,OUTPUT);
}

void loop() {
    tone(piezo,1319);
    delay(120);
    noTone(piezo);
    delay(30);
    tone(piezo,1174);
    delay(120);
    noTone(piezo);
    delay(30);
    tone(piezo,740);
    delay(200);
    noTone(piezo);
    delay(100);
    tone(piezo,831);
    delay(200);
    noTone(piezo);
    delay(100);
    
    tone(piezo,1109);
    delay(120);
    noTone(piezo);
    delay(30);
    tone(piezo,988);
    delay(120);
    noTone(piezo);
    delay(30);
    tone(piezo,587);
    delay(200);
    noTone(piezo);
    delay(100);
    tone(piezo,659);
    delay(200);
    noTone(piezo);
    delay(100);
    
    tone(piezo,988);
    delay(120);
    noTone(piezo);
    delay(30);
    tone(piezo,880);
    delay(120);
    noTone(piezo);
    delay(30);
    tone(piezo,554);
    delay(200);
    noTone(piezo);
    delay(100);
    tone(piezo,659);
    delay(200);
    noTone(piezo);
    delay(100);
    
    tone(piezo,880);
    delay(600);
    noTone(piezo);
    delay(300);
    
}