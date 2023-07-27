// for our LCD 
#include <LiquidCrystal.h>
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

//for the ultrasonic sensor
const int trigpin= 10,echopin=9;
long duration;
float distance1,distance2;

void setup(){
  //for the LCD 
  lcd.begin(16,2);
  //for the sensor 
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
 }
void loop(){
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);

 duration = pulseIn(echopin,HIGH);
 distance1= duration*0.034/2;
 distance2= duration*0.00034/2;

lcd.setCursor(0,0);
lcd.print(distance1);
lcd.setCursor(5,0);
lcd.print("cm");

delay(100);
lcd.setCursor(0,1);
lcd.print(distance2);
lcd.setCursor(5,1);
lcd.print("m");   
delay(100 );


}
