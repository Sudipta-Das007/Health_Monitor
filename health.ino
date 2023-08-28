#include <LiquidCrystal.h>
const int rs=13, en=12, d4=9, d5=8, d6=7, d7=6;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int temp = A0;
int heart_rate = A2;

int temp_data = 0;
int heart_ratedata=0;

void setup(){
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0, 0);
  lcd.print(" Health ");
  lcd.setCursor(0, 1);
  lcd.print(" Monitoring ");
  delay(1000);
}

void loop(){
  temp_data = analogRead(temp);
  heart_ratedata = analogRead(heart_rate);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp=");
  lcd.print(temp_data);
  lcd.setCursor(0, 1);
  lcd.print("Heart_Rate=");
  lcd.print(heart_ratedata);
  delay(20);
}