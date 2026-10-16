#include <LiquidCrystal.h>

#include <DHT.h>
#include <DHT_U.h>

LiquidCrystal lcd(12,11,5,4,3,2);

#define Type DHT11
DHT HT(6,Type);

float humidity;
float tempC;

int button=7;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin();
  pinMode(button,INPUT_PULLUP);
  lcd.begin(16,2);
  lcd.setCursor(3,0);
  lcd.print("Welcome To");
  lcd.setCursor(3,1);
  lcd.print("TempCheck");
  delay(3000);
  humidity=HT.readHumidity();
  tempC=HT.readTemperature();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Humidity: ");
  lcd.print(humidity);
  lcd.setCursor(0,1);
  lcd.print("Temp: ");
  lcd.print(tempC);
  lcd.print("C");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button)==LOW){
    lcd.clear();
    lcd.print("Refreshing");
    delay(500);
    lcd.print(".");
    delay(500);
    lcd.print(".");
    delay(500);
    lcd.print(".");
    delay(500);
    lcd.clear();
    humidity=HT.readHumidity();
    tempC=HT.readTemperature();
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Humidity: ");
    lcd.print(humidity);
    lcd.setCursor(0,1);
    lcd.print("Temp: ");
    lcd.print(tempC);
    lcd.print("C");
  }

}
