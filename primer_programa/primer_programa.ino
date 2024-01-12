int blueLED_PIN = 5;
int shortt = 100;
int longt = 200;
int spaced = 900;

String myName = "Iván Sevilla";

void setup() {
  // put your setup code here, to run once:
  pinMode(blueLED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int x = 0; x<3; x++){
    digitalWrite(blueLED_PIN, HIGH);
    delay(shortt);
    digitalWrite(blueLED_PIN, LOW);
    delay(shortt);
  }
  for(int x = 0; x<3; x++){
    digitalWrite(blueLED_PIN, HIGH);
    delay(longt);
    digitalWrite(blueLED_PIN, LOW);
    delay(longt);
  }
  for(int x = 0; x<3; x++){
    digitalWrite(blueLED_PIN, HIGH);
    delay(shortt);
    digitalWrite(blueLED_PIN, LOW);
    delay(shortt);
  }
  delay(spaced);
}
