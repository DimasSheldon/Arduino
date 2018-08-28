int enB = 10; //PWM pin; controls motor speed
int in4 = 9;  //Digital Pin; controls motor direction
int in3 = 8;  //Digital Pin; controls motor direction

void setup() {
  pinMode(enB, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(in3, OUTPUT);
}

void loop() {
  //Clockwise
  digitalWrite(in4, HIGH);
  digitalWrite(in3, LOW);
  analogWrite(enB, 125 );   //Set speed as 125
  delay(1000);
  //Stop the motor
  analogWrite(enB, 0);
  delay(1000);
  // Counter-Clockwise
  digitalWrite(in4, LOW);
  digitalWrite(in3, HIGH);
  analogWrite(enB, 255);    //Set speed as 255
  delay(1000);
}
