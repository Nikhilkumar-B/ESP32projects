#include <Arduino.h>
#define pot 32
#define relay 4
float thvoltage=2.2;
float minThv=1.5;
void setup() {
pinMode(relay, OUTPUT);
Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  analogReadResolution(8);
  int a=analogRead(pot);
  
  Serial.println(a);
  delay(600);

  if(a>=231)
  {
    digitalWrite(relay,HIGH);
  }
  if(a<=141)
  {
    digitalWrite(relay,LOW);
  }
  // put your main code here, to run repeatedly:
}