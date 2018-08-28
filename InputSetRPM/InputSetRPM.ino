#include <LiquidCrystal.h>

#define ENA 10
#define IN1 9
#define IN2 8

//LiquidCrystal lcd(12,11,5,4,3,2);

//int backLight = 7;
/*
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD BackLight pin to digital pin 7
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
*/

/*
NOTES :
- Lepas kabel pada Pin RX sebelum melakukan upload program ke Arduino UNO
- Gunakan nilai Serial Baudrate 115200 (Posisi di Sudut kanan Bawah)
- Aktifkan opsi Newline pada Serial monitor ketika Input data melalui 
  Serial ke Arduino UNO (Posisi di Sudut kanan Bawah)
- Format input nilai RPM initial (RPM yang akan dicapai)
  = $nilai (contoh = $1200), lalu tekan enter (ketika akan 
  input nilai RPM, cabut terlebih dahulu kabel yang terhubung ke RX Arduino UNO)
*/

void setup() {
  // put your setup code here, to run once:
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
  Serial.begin(115200);
//  pinMode(backLight, OUTPUT);
//  digitalWrite(backLight, HIGH);
//  lcd.begin(16, 2);
  
  //------- Label untuk debug Serial ---------//
  /*
  Serial.print("PWM");
  Serial.print("\tSpeed");
  Serial.println("\tSet Speed");
  */
 
}

int rpm;
String data, data2;
int setRPM = 0, startSpeed = 0, checkSign, checkSign2;  //startSpeed = nilai PWM 8 bit
char buf_rpm[10];
char buf_speed[10];

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  
  //setRPM = 1500;   //Set nilai RPM yang akan dicapai Motor DC
  
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

     
  if(rpm < setRPM && startSpeed <= 255){analogWrite(ENA, startSpeed ++);} //rpm = nilai Integer dari data serial
  if(rpm > setRPM && startSpeed <= 255){analogWrite(ENA, startSpeed --);}
  if(rpm == setRPM){analogWrite(ENA, startSpeed);}
  if(startSpeed > 254){analogWrite(ENA, startSpeed --);}  
  
  //lcd.clear();

  
//  lcd.setCursor(0, 0);
//  lcd.print("RPM = ");
//  lcd.setCursor(6, 0);
//  sprintf(buf_rpm,"%d",rpm);
//  lcd.print(buf_rpm);
//  
//  
//  lcd.setCursor(0, 1);
//  lcd.print("PWM = ");
//  lcd.setCursor(6, 1);
//  sprintf(buf_speed,"%d",startSpeed);
//  lcd.print(buf_speed);
  
  
  //lcd.print("          ");
  
  
  //----------- Untuk Debug lewat Serial -----------//

  Serial.print("PWM : ");
  Serial.print(startSpeed);
  Serial.print("\t");
  Serial.print("RPM : ");
  Serial.println(rpm);
  //Serial.print("\t");
  //Serial.println(setRPM);
  

   }
}

void parseCommand(String com){
  String parsing;
  String parsing2;
  
  //#1423\n Format data serial dari ATmega128
  parsing=com.substring(com.indexOf("#")+1);
  rpm=parsing.toInt(); 
}

void parseCommand2(String com){
  String parsing;
  
  //$1423\n Format data serial untuk PWM
  parsing=com.substring(com.indexOf("$")+1);
  setRPM=parsing.toInt(); 
}


