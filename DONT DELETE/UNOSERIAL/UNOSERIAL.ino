int led = 13;
char cmd = '\0';

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    cmd = Serial.read();
    Serial.println(cmd);

    switch (cmd) {
      case '1':
        digitalWrite(led, HIGH);
        cmd = '\0';
        break;
      case '0':
        digitalWrite(led, LOW);
        cmd = '\0';
        break;
      default:
        digitalWrite(led, LOW);
        cmd = '\0';
        break;
    }
  }
}
