//#include <LiquidCrystal.h>

#define ENA 10
#define IN1 9
#define IN2 8

//LiquidCrystal lcd(12,11,7,6,5,4);
/*
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 7
 * LCD D5 pin to digital pin 6
 * LCD D6 pin to digital pin 5
 * LCD D7 pin to digital pin 4
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
*/

/*
NOTES :
- Lepas kabel pada Pin RX sebelum melakukan upload program ke Arduino UNO
- Gunakan nilai Serial Baudrate 115200 (Posisi di Sudut kanan Bawah)
- Afktifkan opsi Newline pada Serial monitor ketika Input data melalui Serial ke Arduino UNO (Posisi di Sudut kanan Bawah)
- Format input nilai PWM = $nilai (contoh = $220), lalu tekan enter (ketika akan input nilai PWM, cabut terlebih dahulu kabel yang terhubung ke RX Arduino UNO)
- Range nilai PWM 0 - 255
*/

void setup() {
  // put your setup code here, to run once:
  
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
  Serial.begin(115200);

}

String data;
int pwm = 0, rpm, checkSign, checkSign2;
char buf_rpm[10];
char buf_speed[10];

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  
  if(Serial.available()>0){
    while(1){
    char c = Serial.read();
    if (c == '\n')break;   
    if (c == -1) continue;
    else{data +=c;}
    }
    
    checkSign = data.indexOf('#');
    checkSign2 = data.indexOf('$');    
    if(checkSign == 0){parseCommand(data);}
    if(checkSign2 == 0){parseCommand2(data);}
    
    data="";

   /*
  lcd.setCursor(0, 0);
  lcd.print("RPM = ");
  lcd.setCursor(6, 0);
  sprintf(buf_rpm,"%d      ",rpm);
  lcd.print(buf_rpm);
  */
  
  /*lcd.setCursor(0, 1);
  lcd.print("PWM = ");
  lcd.setCursor(6, 1);
  sprintf(buf_speed,"%d",pwm);
  lcd.print(buf_speed);*/

  Serial.print("PWM : ");
  Serial.print(pwm);
  Serial.print("\t");
  Serial.print("RPM : ");
  Serial.println(rpm);
   
   }
   
 analogWrite(ENA, pwm);  

}

void parseCommand(String com){
  String parsing;
  
  //#1400\n Contoh Format data input RPM dari Serial
  parsing=com.substring(com.indexOf("#")+1);
  rpm=parsing.toInt(); 
}

void parseCommand2(String com){
  String parsing;
  
  //$255\n Format data serial untuk PWM
  parsing=com.substring(com.indexOf("$")+1);
  pwm=parsing.toInt(); 
}

