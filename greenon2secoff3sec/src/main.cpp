#include <Arduino.h>

void setup() {
  pinMode(2,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(2,HIGH);
  delay(2000);
  digitalWrite(2,LOW);
  delay(3000);
  // put your main code here, to run repeatedly:
}