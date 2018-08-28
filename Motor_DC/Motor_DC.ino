  /* 
   *  Driver Motor :
   *  ENA for IN1 & IN2
   *  ENB for IN3 & IN4
   *  
   */
  
  #define ENA 10   // Pin ENB/ENB from Motor Driver to pin 10
  #define IN1 9    // pin IN1,2,3,4 from Motor Driver
  #define IN2 8    // pin IN1,2,3,4 from Motor Driver

void setup() {
  // put your setup code here, to run once:


  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(ENA, 80);

  

}
