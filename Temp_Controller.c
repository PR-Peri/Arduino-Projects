
#include "DHT.h"//DHT sensor Library
#include <LiquidCrystal.h>//LCD Library 
#define DHTPIN 12 //Define sensor pin(pin 12)
#define DHTTYPE DHT22 //What sensor use

DHT dht(DHTPIN, DHTTYPE);//Create sensor object
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);//Create lcd object using this pins 8,9,4,6,7

boolean a=LOW,b=HIGH;
float h=0,t=0;
const int ledPin = 3; //LED pins for temperature control 
const int ledPin2 = 2;
long previousMillis = 0;
long interval = 2000; //Read sensor each 2 seconds

void setup() {
lcd.begin(16, 2);              //Start lcd 
lcd.setCursor(0,0);            //Set in position 0,0
// set the digital pin as output:
pinMode(ledPin, OUTPUT);//Change to output my pins
pinMode(ledPin2, OUTPUT);
dht.begin();//Start DHT22 sensor
digitalWrite(ledPin2,LOW);//Turn off LED
digitalWrite(ledPin,LOW);//Turn off LED
lcd.print("Tempera:");// print in lcd this word 
lcd.setCursor(0,1);//Change cursor position
lcd.print("Humedad:");// print in lcd this word 
}

void loop()
{
  unsigned long currentMillis = millis();//time elapsed
  if(currentMillis - previousMillis > interval) //Comparison between the elapsed time and the time in which the action is to be executed
  {
    previousMillis = currentMillis; //"Last time is now"

     h = dht.readHumidity();//humidity value
     t = dht.readTemperature();//temperature value centigrades if you want farenheit change to
     //t = dht.readTemperature(true);
     //Below is for print data sensors in lcd 
     lcd.setCursor(10,0);
     lcd.print(t);
     lcd.setCursor(10,1);
     lcd.print(h);
    
    if(t>=25 && a==LOW)//if temperature above of 25 degrees
    {
      digitalWrite(ledPin,HIGH);//Active air conditioner
      digitalWrite(ledPin2,LOW);
      a=HIGH;
      b=LOW;
     
    }
    else if(t<=23&&b==LOW)//if temperature is under 23 degrees
    {
      digitalWrite(ledPin2,HIGH);
      digitalWrite(ledPin,LOW);//Turn off air conditioner
      a=LOW;
      b=HIGH;
    }
    
  }
}
