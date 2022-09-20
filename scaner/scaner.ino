int ledAzul = 11;
int ledVermelho = 10;
int ledVerde = 9;
int tempo = 600;

void deligarLeds(int azul, int verm, int verd) {
    digitalWrite(azul, HIGH);
    digitalWrite(verm, HIGH);
    digitalWrite(verd, HIGH);


}

void setup()
{
    pinMode(ledAzul, OUTPUT);
    pinMode(ledVermelho, OUTPUT);
    pinMode(ledVerde, OUTPUT);
    deligarLeds(ledAzul, ledVermelho, ledVerde);

}

void loop()
{
    //branco
    digitalWrite(ledAzul, LOW);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, LOW);

    delay(tempo);
    deligarLeds(ledAzul, ledVermelho, ledVerde);

    //vermelho
    digitalWrite(ledAzul, HIGH);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);

    delay(tempo);
    deligarLeds(ledAzul, ledVermelho, ledVerde);

    //AZUL
    digitalWrite(ledAzul, LOW);
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, HIGH);

    delay(tempo);
    deligarLeds(ledAzul, ledVermelho, ledVerde);

    //VERDE
    digitalWrite(ledAzul, HIGH);
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);

    delay(tempo);
    deligarLeds(ledAzul, ledVermelho, ledVerde);

    //AMARELO
    digitalWrite(ledAzul, HIGH);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, LOW);

    delay(tempo);
    deligarLeds(ledAzul, ledVermelho, ledVerde);

    //AZUL  CLARO
    digitalWrite(ledAzul, LOW);
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);

    delay(tempo);
    deligarLeds(ledAzul, ledVermelho, ledVerde);

    //ROSA
    digitalWrite(ledAzul, LOW);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);

    delay(tempo);
    deligarLeds(ledAzul, ledVermelho, ledVerde);

}