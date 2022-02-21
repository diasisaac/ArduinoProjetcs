// A variável que caracteriza o pino digital conectado ao buzzer
int buzzer = 8;

void setup() {

  pinMode(buzzer, OUTPUT);
}

void loop() {
    // Ao colocar em estado LOW o buzzer emite um som 
    // constante como na funcao SETUP(). Dai, em HIGH não é emitido som.
    digitalWrite(buzzer, HIGH);
}
