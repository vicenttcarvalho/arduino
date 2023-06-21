int LED = 13;
int esperaCurto = 200, esperaLongo = 600, esperaEntre = 1000;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  //S
  digitalWrite(LED, HIGH);
  delay(esperaCurto);
  digitalWrite(LED, LOW);
  delay(esperaCurto);

  digitalWrite(LED, HIGH);
  delay(esperaCurto);
  digitalWrite(LED, LOW);
  delay(esperaCurto);


  digitalWrite(LED, HIGH);
  delay(esperaCurto);
  digitalWrite(LED, LOW);
  delay(esperaEntre);

  //O  
  digitalWrite(LED, HIGH);
  delay(esperaLongo);
  digitalWrite(LED, LOW);
  delay(esperaCurto);
  
  digitalWrite(LED, HIGH);
  delay(esperaLongo);
  digitalWrite(LED, LOW);
  delay(esperaCurto);
  
  digitalWrite(LED, HIGH);
  delay(esperaLongo);
  digitalWrite(LED, LOW);
  delay(esperaEntre);

//S
  digitalWrite(LED, HIGH);
  delay(esperaCurto);
  digitalWrite(LED, LOW);
  delay(esperaCurto);

  digitalWrite(LED, HIGH);
  delay(esperaCurto);
  digitalWrite(LED, LOW);
  delay(esperaCurto);

  digitalWrite(LED, HIGH);
  delay(esperaCurto);
  digitalWrite(LED, LOW);
  delay(esperaEntre);

  delay(2000);//espera novamente para reiniciar o envio do SOS  
}
