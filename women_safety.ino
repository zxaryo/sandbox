/*zxaryo 20171018
Women Safety Band
External GSM-GPS Alarm Modules

 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Modified from arduino LCD examples
*/
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int i=0;
void setup() 
{
  lcd.begin(16, 2);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(6,INPUT);
  lcd.print("Safe Mode");
}
void help()
{
  lcd.clear();
  lcd.print("Sending Location");
  lcd.setCursor(0,1);
  lcd.print("+91 8281xxxxxx);
  delay(500);
  digitalWrite(7,LOW);
  delay(1500);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Calling For Help");
  lcd.setCursor(0,1);
  lcd.print("+91 8281xxxxxx;
  delay(40000);
}
void loop() 
{
  if(digitalRead(6)==0||i==1) //6 Pulled up using resistor
   {
    help();
    i=1;
    digitalWrite(7,HIGH); //GSM-GPS Module
    digitalWrite(8,HIGH); //Alarm
   }
  delay(50);
}

