int ledA = 3;
int inA = A0;
int ledB = 6;
int inB = A1;
int ledC = 9;
int inC = A2;
int ledD = 12;
int inD = A3;

int ledE = 4;
int ledF = 5;
int ledG = 7;
int ledH = 8;
int ledI = 10;
int ledJ = 11;
void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  pinMode(ledA, OUTPUT);
  pinMode(inA, INPUT);
  pinMode(ledB, OUTPUT);
  pinMode(inB, INPUT);
  pinMode(ledC, OUTPUT);
  pinMode(inC, INPUT);
  pinMode(ledD, OUTPUT);
  pinMode(inD, INPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledH, OUTPUT);
  pinMode(ledI, OUTPUT);
  pinMode(ledJ, OUTPUT);
  runningLed();
  runningLed2();
  collisionLed3();
  collisionLed1();
  collisionLed2();
  blinkBlink();
  blinkBlink2();
  collisionLed3();
  blinkEachOne();
  blinkEachOne2();
  collisionLed3();
  blinkZig();
  blinkZigReverse();
}

void loop() {
  if (digitalRead(inA) == HIGH) {
    digitalWrite(ledA, HIGH);
  }
  else {
    digitalWrite(ledA, LOW);
  }

  if (digitalRead(inB) == HIGH) {
    digitalWrite(ledB, HIGH);
  }
  else {
    digitalWrite(ledB, LOW);
  }

  if (digitalRead(inC) == HIGH) {
    digitalWrite(ledC, HIGH);
  }
  else {
    digitalWrite(ledC, LOW);
  }

  if (digitalRead(inD) == HIGH) {
    digitalWrite(ledD, HIGH);
  }
  else {
    digitalWrite(ledD, LOW);
  }
}

void runningLed() {
  digitalWrite(ledA, HIGH);
  delay(25);
  digitalWrite(ledA, LOW);
  digitalWrite(ledE, HIGH);
  delay(25);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  delay(25);
  digitalWrite(ledF, LOW);

  digitalWrite(ledB, HIGH);
  delay(25);
  digitalWrite(ledB, LOW);
  digitalWrite(ledG, HIGH);
  delay(25);
  digitalWrite(ledG, LOW);
  digitalWrite(ledH, HIGH);
  delay(25);
  digitalWrite(ledH, LOW);

  digitalWrite(ledC, HIGH);
  delay(25);
  digitalWrite(ledC, LOW);
  digitalWrite(ledI, HIGH);
  delay(25);
  digitalWrite(ledI, LOW);
  digitalWrite(ledJ, HIGH);
  delay(25);
  digitalWrite(ledJ, LOW);
  digitalWrite(ledD, HIGH);
  delay(25);
  digitalWrite(ledD, LOW);
}

void runningLed2() {
  digitalWrite(ledD, HIGH);
  delay(25);
  digitalWrite(ledD, LOW);
  digitalWrite(ledJ, HIGH);
  delay(25);
  digitalWrite(ledJ, LOW);
  digitalWrite(ledI, HIGH);
  delay(25);
  digitalWrite(ledI, LOW);
  digitalWrite(ledC, HIGH);
  delay(25);
  digitalWrite(ledC, LOW);

  digitalWrite(ledH, HIGH);
  delay(25);
  digitalWrite(ledH, LOW);
  digitalWrite(ledG, HIGH);
  delay(25);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, HIGH);
  delay(25);
  digitalWrite(ledB, LOW);

  digitalWrite(ledF, HIGH);
  delay(25);
  digitalWrite(ledF, LOW);
  digitalWrite(ledE, HIGH);
  delay(25);
  digitalWrite(ledE, LOW);
  digitalWrite(ledA, HIGH);
  delay(25);
  digitalWrite(ledA, LOW);
}

void collisionLed1() {
  //aefbg djich
  digitalWrite(ledA, HIGH);
  digitalWrite(ledD, HIGH);
  delay(50);
  digitalWrite(ledA, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledJ, HIGH);
  delay(50);
  digitalWrite(ledE, LOW);
  digitalWrite(ledJ, LOW);
  digitalWrite(ledI, HIGH);
  digitalWrite(ledF, HIGH);
  delay(50);
  digitalWrite(ledF, LOW);
  digitalWrite(ledI, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledB, HIGH);
  delay(50);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledH, HIGH);
  digitalWrite(ledG, HIGH);
  delay(50);
  digitalWrite(ledG, LOW);
  digitalWrite(ledH, LOW);
}

void collisionLed2() {
  //aefbg djich
  digitalWrite(ledH, HIGH);
  digitalWrite(ledG, HIGH);
  delay(50);
  digitalWrite(ledH, LOW);
  digitalWrite(ledG, LOW);

  digitalWrite(ledC, HIGH);
  digitalWrite(ledB, HIGH);
  delay(50);
  digitalWrite(ledC, LOW);
  digitalWrite(ledB, LOW);

  digitalWrite(ledI, HIGH);
  digitalWrite(ledF, HIGH);
  delay(50);
  digitalWrite(ledI, LOW);
  digitalWrite(ledF, LOW);

  digitalWrite(ledJ, HIGH);
  digitalWrite(ledE, HIGH);
  delay(50);
  digitalWrite(ledE, LOW);
  digitalWrite(ledJ, LOW);

  digitalWrite(ledA, HIGH);
  digitalWrite(ledD, HIGH);
  delay(50);
  digitalWrite(ledA, LOW);
  digitalWrite(ledD, LOW);
}

void blinkBlink() {
  digitalWrite(3, HIGH);
  digitalWrite(12, HIGH);
  delay(75);
  digitalWrite(3, LOW);
  digitalWrite(12, LOW);
  delay(75);
  digitalWrite(3, HIGH);
  digitalWrite(12, HIGH);
  delay(75);
  digitalWrite(3, LOW);
  digitalWrite(12, LOW);

  digitalWrite(4, HIGH);
  digitalWrite(11, HIGH);
  delay(75);
  digitalWrite(4, LOW);
  digitalWrite(11, LOW);
  delay(75);
  digitalWrite(4, HIGH);
  digitalWrite(11, HIGH);
  delay(75);
  digitalWrite(4, LOW);
  digitalWrite(11, LOW);

  digitalWrite(5, HIGH);
  digitalWrite(10, HIGH);
  delay(75);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);
  delay(75);
  digitalWrite(5, HIGH);
  digitalWrite(10, HIGH);
  delay(75);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);

  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(75);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  delay(75);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(75);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);

  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(12, HIGH);
  delay(75);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(12, LOW);
  delay(75);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(12, HIGH);
  delay(75);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(12, LOW);
}

void blinkBlink2() {
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  delay(50);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  delay(50);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  delay(50);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(75);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  delay(75);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(75);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);

  digitalWrite(5, HIGH);
  digitalWrite(10, HIGH);
  delay(75);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);
  delay(75);
  digitalWrite(5, HIGH);
  digitalWrite(10, HIGH);
  delay(75);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);

  digitalWrite(4, HIGH);
  digitalWrite(11, HIGH);
  delay(75);
  digitalWrite(4, LOW);
  digitalWrite(11, LOW);
  delay(75);
  digitalWrite(4, HIGH);
  digitalWrite(11, HIGH);
  delay(75);
  digitalWrite(4, LOW);
  digitalWrite(11, LOW);

  digitalWrite(3, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  delay(75);
  digitalWrite(3, LOW);
  digitalWrite(12, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  delay(75);
  digitalWrite(3, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  delay(75);
  digitalWrite(3, LOW);
  digitalWrite(12, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
}


void collisionLed3() {
  //aefbg djich
  digitalWrite(ledA, HIGH);
  digitalWrite(ledD, HIGH);
  delay(25);
  digitalWrite(ledA, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledJ, HIGH);
  delay(25);
  digitalWrite(ledE, LOW);
  digitalWrite(ledJ, LOW);
  digitalWrite(ledI, HIGH);
  digitalWrite(ledF, HIGH);
  delay(25);
  digitalWrite(ledF, LOW);
  digitalWrite(ledI, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledB, HIGH);
  delay(25);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledH, HIGH);
  digitalWrite(ledG, HIGH);
  delay(25);
  digitalWrite(ledG, LOW);
  digitalWrite(ledH, LOW);
}

void blinkEachOne() {
  digitalWrite(3, HIGH);
  delay(75);
  digitalWrite(3, LOW);
  delay(75);
  digitalWrite(4, HIGH);
  delay(75);
  digitalWrite(4, LOW);
  delay(75);
  digitalWrite(5, HIGH);
  delay(75);
  digitalWrite(5, LOW);
  delay(75);
  digitalWrite(6, HIGH);
  delay(75);
  digitalWrite(6, LOW);
  delay(75);
  digitalWrite(7, HIGH);
  delay(75);
  digitalWrite(7, LOW);
  delay(75);
  digitalWrite(8, HIGH);
  delay(75);
  digitalWrite(8, LOW);
  delay(75);
  digitalWrite(9, HIGH);
  delay(75);
  digitalWrite(9, LOW);
  delay(75);
  digitalWrite(10, HIGH);
  delay(75);
  digitalWrite(10, LOW);
  delay(75);
  digitalWrite(11, HIGH);
  delay(75);
  digitalWrite(11, LOW);
  delay(75);
  digitalWrite(12, HIGH);
  delay(75);
  digitalWrite(12, LOW);
  delay(75);
}

void blinkEachOne2() {
  digitalWrite(12, HIGH);
  delay(75);
  digitalWrite(12, LOW);
  delay(75);
  digitalWrite(11, HIGH);
  delay(75);
  digitalWrite(11, LOW);
  delay(75);
  digitalWrite(10, HIGH);
  delay(75);
  digitalWrite(10, LOW);
  delay(75);
  digitalWrite(9, HIGH);
  delay(75);
  digitalWrite(9, LOW);
  delay(75);
  digitalWrite(8, HIGH);
  delay(75);
  digitalWrite(8, LOW);
  delay(75);
  digitalWrite(7, HIGH);
  delay(75);
  digitalWrite(7, LOW);
  delay(75);
  digitalWrite(6, HIGH);
  delay(75);
  digitalWrite(6, LOW);
  delay(75);
  digitalWrite(5, HIGH);
  delay(75);
  digitalWrite(5, LOW);
  delay(75);
  digitalWrite(4, HIGH);
  delay(75);
  digitalWrite(4, LOW);
  delay(75);
  digitalWrite(3, HIGH);
  delay(75);
  digitalWrite(3, LOW);
  delay(75);
}

void sos() {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(1000);

  //O
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(1000);

  //s
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(1000);
}

void blinkZig() {
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  delay(100);

  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  delay(100);

  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  delay(100);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  delay(100);

  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  delay(100);

  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  delay(100);

  digitalWrite(10, HIGH);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  delay(100);

  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  delay(100);

  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  delay(100);
}

void blinkZigReverse() {
  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  delay(100);

  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);
  delay(100);

  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  delay(100);

  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  delay(100);

  digitalWrite(8, HIGH);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  delay(100);

  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  delay(100);

  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  delay(100);

  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  delay(100);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  delay(100);
}
