#define pinLDR A0
#define buzzer 8

int valorLDR;
int valorLimiteLDR = 800;

void acionarAlarme(bool ligar)
{
  if (ligar) // ligar som alarme
  {
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);

  }
  else // desligar o alarme
  {
    // Ao colocar em estado LOW o buzzer emite um som
    // constante como na funcao SETUP(). Dai, em HIGH não é emitido som.
    digitalWrite(buzzer, HIGH);

  }

}

void vigiar(int valorLDR)
{

  if (valorLDR > valorLimiteLDR) // recebe luz do laser
  {
    acionarAlarme(false);

  } else { // cortou a luz do laser

    acionarAlarme(true);

  }

}

void setup() {

  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  valorLDR = analogRead(A0);
  Serial.println(valorLDR);

  vigiar(valorLDR);

}
