int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
int pin7 = 7;
int waitTime = 1000;

void setup() {
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
}

void loop() {
  // 0
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  delay(waitTime);
  // 1
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, HIGH);
  delay(waitTime);
  // 2
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, LOW);
  delay(waitTime);
  // 3
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, HIGH);
  delay(waitTime);
  // 4
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  delay(waitTime);
  // 5
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, HIGH);
  delay(waitTime);
  // 6
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, LOW);
  delay(waitTime);
  // 7
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, HIGH);
  delay(waitTime);
  // 8
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  delay(waitTime);
  // 9
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, HIGH);
  delay(waitTime);
  // 10
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, LOW);
  delay(waitTime);
  // 11
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, HIGH);
  delay(waitTime);
  // 12
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  delay(waitTime);
  // 13
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, HIGH);
  delay(waitTime);
  // 14
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, LOW);
  delay(waitTime);
  // 15
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, HIGH);
  delay(waitTime);
}