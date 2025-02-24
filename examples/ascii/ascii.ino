#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>
#include <BigFont01_I2C.h>

LiquidCrystal_PCF8574 lcd(0x27); //address
BigFont01_I2C     big(&lcd); // construct large font object, passing to it the name of our lcd object

void setup()
{
  lcd.begin(16, 2);
  big.begin();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write ('  BigFont01_I2C ');
  lcd.setCursor(0,1);
  lcd.write ('  ============= ');
  delay(2000);
  lcd.clear();
}

void loop()
{
  //char
  int ms = 1000;
  lcd.clear(); big.writechar(0,5,'0'); delay(ms);
  lcd.clear(); big.writechar(0,5,'1'); delay(ms);
  lcd.clear(); big.writechar(0,5,'2'); delay(ms);
  lcd.clear(); big.writechar(0,5,'3'); delay(ms);
  lcd.clear(); big.writechar(0,5,'4'); delay(ms);
  lcd.clear(); big.writechar(0,5,'5'); delay(ms);
  lcd.clear(); big.writechar(0,5,'6'); delay(ms);
  lcd.clear(); big.writechar(0,5,'7'); delay(ms);
  lcd.clear(); big.writechar(0,5,'8'); delay(ms);
  lcd.clear(); big.writechar(0,5,'9'); delay(ms);
  lcd.clear(); big.writechar(0,5,'-'); delay(ms);
  lcd.clear(); big.writechar(0,5,'+'); delay(ms);
  lcd.clear(); big.writechar(0,5,'!'); delay(ms);
  lcd.clear(); big.writechar(0,5,'@'); delay(ms);
  lcd.clear(); big.writechar(0,5,'#'); delay(ms);
  lcd.clear(); big.writechar(0,5,'$'); delay(ms);
  lcd.clear(); big.writechar(0,5,'%'); delay(ms);
  lcd.clear(); big.writechar(0,5,'^'); delay(ms);
  lcd.clear(); big.writechar(0,5,'&'); delay(ms);
  lcd.clear(); big.writechar(0,5,'*'); delay(ms);
  lcd.clear(); big.writechar(0,5,'('); delay(ms);
  lcd.clear(); big.writechar(0,5,')'); delay(ms);
  lcd.clear(); big.writechar(0,5,'A'); delay(ms);
  lcd.clear(); big.writechar(0,5,'B'); delay(ms);
  lcd.clear(); big.writechar(0,5,'C'); delay(ms);
  lcd.clear(); big.writechar(0,5,'D'); delay(ms);
  lcd.clear(); big.writechar(0,5,'E'); delay(ms);
  lcd.clear(); big.writechar(0,5,'F'); delay(ms);
  lcd.clear(); big.writechar(0,5,'G'); delay(ms);
  lcd.clear(); big.writechar(0,5,'H'); delay(ms);
  lcd.clear(); big.writechar(0,5,'I'); delay(ms);
  lcd.clear(); big.writechar(0,5,'J'); delay(ms);
  lcd.clear(); big.writechar(0,5,'K'); delay(ms);
  lcd.clear(); big.writechar(0,5,'L'); delay(ms);
  lcd.clear(); big.writechar(0,5,'M'); delay(ms);
  lcd.clear(); big.writechar(0,5,'N'); delay(ms);
  lcd.clear(); big.writechar(0,5,'O'); delay(ms);
  lcd.clear(); big.writechar(0,5,'P'); delay(ms);
  lcd.clear(); big.writechar(0,5,'Q'); delay(ms);
  lcd.clear(); big.writechar(0,5,'R'); delay(ms);
  lcd.clear(); big.writechar(0,5,'S'); delay(ms);
  lcd.clear(); big.writechar(0,5,'T'); delay(ms);
  lcd.clear(); big.writechar(0,5,'U'); delay(ms);
  lcd.clear(); big.writechar(0,5,'V'); delay(ms);
  lcd.clear(); big.writechar(0,5,'W'); delay(ms);
  lcd.clear(); big.writechar(0,5,'X'); delay(ms);
  lcd.clear(); big.writechar(0,5,'Y'); delay(ms);
  lcd.clear(); big.writechar(0,5,'Z'); delay(ms);
  lcd.clear();
}