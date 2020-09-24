#include <LiquidCrystal.h>

int sensorPin = A0;
int sensorInput;
double temp;
LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  lcd.begin(16,2);
  Serial.begin(9600);
  lcd.print("Temperature: ");
}

void loop()
{
  sensorInput = analogRead(A0);
  temp = (double)sensorInput / 1024;
  temp = temp * 5;
  temp = temp - 0.5;
  temp = temp * 100;
  
  Serial.print ("Temperature: ");
  Serial.println(temp);
  
  lcd.setCursor(0,1);
  lcd.print(temp);

}