int led = 11;
char cmd = '\0';
void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);

}

void loop() {
  if (Serial.available() > 0) {
    cmd = Serial.read();

    switch (cmd) {
      case '1':
        digitalWrite(led, HIGH);
        break;
      case '2':
        analogWrite(led, 255);
        break;
      case '3':
        digitalWrite(led, LOW);
        break;
      case '4':
        analogWrite(led, 0);
        break;

      case '5':
        analogWrite(led, 100);
        break;
      default:
        digitalWrite(led, LOW);
        break;
    }
  }

}
