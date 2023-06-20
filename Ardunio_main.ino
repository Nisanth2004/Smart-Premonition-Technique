#include<Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo myservo1;
int pos = 0;
int i=10;
int triger=2;
int echo=3;
int triger1=4;
int echo1=5;
int distance;
int duration;
int distance1;
int duration1;
void setup(){
  pinMode(triger,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(triger1,OUTPUT);
  pinMode(echo1,INPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
  myservo1.attach(13);
  lcd.init();         // initialize the lcd
  lcd.backlight();
}
void loop(){
  digitalWrite(10,HIGH);

  lcd.setCursor(1, 0);
  lcd.print(distance1);
  delay(20);
  lcd.clear();

  digitalWrite(triger,LOW);
  delayMicroseconds(2);
  digitalWrite(triger,HIGH);
  delayMicroseconds(10);
  digitalWrite(triger,LOW);
  delayMicroseconds(10);
  duration=pulseIn(echo,HIGH);
  distance=duration/29/2;
  Serial.println(distance);
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print(distance);
  delay(10);
  if(distance<30)
  {
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("Warning");
    delay(10);
  }
  if(distance<=14){
    {
      digitalWrite(10,LOW);
    for(pos=0;pos<=180;pos+=1)
      myservo1.write(pos);
      delay(40);


  }
  while(i!=0)
  {
    digitalWrite(9,HIGH);
    delay(600);
    digitalWrite(8,HIGH);
    delay(600);
    digitalWrite(8,LOW);
    delay(600);
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("Air bag open");
    delay(1000);
    lcd.clear();
    lcd.print("Message Transfered");

    delay(1000);
    lcd.clear();
  }
    
  }
  delay(500);
}
