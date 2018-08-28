#include <Actuator.h>
#include <BlinkLED.h>
#include <DistanceSensor.h>

#define enFL 5
#define dirFL 4
#define enFR 6
#define dirFR 7
#define enRL 9
#define dirRL 8
#define enRR 10
#define dirRR 11

#define trigPin A3
#define echoPin A2
#define trigPinL A1
#define echoPinL A0
#define trigPinR A5
#define echoPinR A4
#define irSnsr 3
#define ledPin 13

Actuator FL(enFL, dirFL);
Actuator FR(enFR, dirFR);
Actuator RL(enRL, dirRL);
Actuator RR(enRR, dirRR);
DistanceSensor sensor(trigPin, echoPin);
DistanceSensor sensorL(trigPinL, echoPinL);
DistanceSensor sensorR(trigPinR, echoPinR);
BlinkLED led(ledPin, 100, 1000);

long distance = 0;
long distanceL = 0;
long distanceR = 0;
char command = '\0';
String flag = "stop";
int randNum;

void setup() {
  Serial.begin(38400);
  pinMode(irSnsr, INPUT);
  delay(1000);
  Serial.println("Robot ready");
}

void loop() {
  led.doBlink();
  distance = sensor.getDistance();
  distanceL = sensorL.getDistance();
  distanceR = sensorR.getDistance();

  //  Serial.print("Mid distance: ");
  //  Serial.println(distance);
  //  Serial.print("Left distance: ");
  //  Serial.println(distanceL);
  //  Serial.print("Right distance: ");
  //  Serial.println(distanceR);
  //  Serial.print("IR Sensor: ");
    Serial.println(digitalRead(irSnsr));

  if (distance > 25 && distanceL > 25 && distanceR > 25) {
    doLastState(flag);
  }

  if (distance <= 25) {
    randNum = random(3);
    if (randNum == 0) {
      Serial.print("Random: "); Serial.println(randNum);
      Serial.println("Move backward");
      moveBackward();
      delay(500);
    } else if (randNum == 1) {
      Serial.print("Random: "); Serial.println(randNum);
      Serial.println("Rotate right");
      fullRotateRight();
      delay(1000);
    } else {
      Serial.print("Random: "); Serial.println(randNum);
      Serial.println("Rotate left");
      fullRotateLeft();
      delay(1000);
    }
  }

  if (distanceL <= 25 || digitalRead(irSnsr) == 0) {
    Serial.println("Move right");
    moveRight();
  }

  if (distanceR <= 25) {
    Serial.println("Move left");
    moveLeft();
  }

  if (Serial.available() > 0 ) {
    command = Serial.read();
    switch (command) {
      case 'w':
      case 'W':
        Serial.println("Move forward");
        flag = "forward";
        doLastState(flag);
        command = '\0';
        break;
      case 's':
      case 'S':
        Serial.println("Move backward");
        flag = "backward";
        doLastState(flag);
        command = '\0';
        break;
      case 'a':
      case 'A':
        Serial.println("Turn left");
        flag = "left";
        doLastState(flag);
        command = '\0';
        break;
      case 'd':
      case 'D':
        Serial.println("Turn right");
        flag = "right";
        doLastState(flag);
        command = '\0';
        break;
      case 'q':
      case 'Q':
        Serial.println("Stop");
        flag = "stop";
        doLastState(flag);
        command = '\0';
        break;
      default:
        flag = "stop";
        doLastState(flag);
        command = '\0';
        break;
    }
  }
  //  Serial.println("Stop");
  //  frontActuator.stop();
  //  rearActuator.stop();
  //  delay(1000);
  //
  //  Serial.println("Forward");
  //  frontActuator.forward();
  //  rearActuator.forward();
  //  delay(1000);
  //
  //  Serial.println("Reverse");
  //  frontActuator.reverse();
  //  rearActuator.reverse();
  //  delay(1000);
  //
  //  Serial.println("Right");
  //  frontActuator.right();
  //  rearActuator.right();
  //  delay(1000);
  //
  //  Serial.println("Left");
  //  frontActuator.left();
  //  rearActuator.left();
  //  delay(1000);
}

void moveForward() {
  FL.forwardIndependent();
  FR.forwardIndependent();
  RL.forwardIndependent();
  RR.forwardIndependent();

}

void moveBackward() {
  FL.reverseIndependent();
  FR.reverseIndependent();
  RL.reverseIndependent();
  RR.reverseIndependent();
}

void moveLeft() {
  FL.reverseIndependent(100);
  FR.forwardIndependent();
  RL.reverseIndependent(100);
  RR.forwardIndependent();
}

void fullRotateLeft() {
  FL.reverseIndependent();
  FR.forwardIndependent();
  RL.reverseIndependent();
  RR.forwardIndependent();
}

void moveRight() {
  FL.forwardIndependent();
  FR.reverseIndependent(100);
  RL.forwardIndependent();
  RR.reverseIndependent(100);
}

void fullRotateRight() {
  FL.forwardIndependent();
  FR.reverseIndependent();
  RL.forwardIndependent();
  RR.reverseIndependent();
}

void dontMove() {
  FL.stopIndependent();
  FR.stopIndependent();
  RL.stopIndependent();
  RR.stopIndependent();
}

void doLastState(String flag) {
  if (flag == "forward") {
    moveForward();
  } else if (flag == "right") {
    moveRight();
  } else if (flag == "left") {
    moveLeft();
  } else if (flag == "backward") {
    moveBackward();
  } else {
    dontMove();
  }
}
