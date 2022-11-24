#include <Arduino.h>
#define red 4
#define green 2
#define blue 13
int alphabet;
int number;
void setup() {
    pinMode(red,OUTPUT);
    pinMode(green,OUTPUT);
    pinMode(blue,OUTPUT);
Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  Serial.print("enter the character");
  Serial.println();
while (Serial.available()==0)
  {
    
  }
  alphabet=Serial.read();
  number=alphabet;
  

  if((number==114)||(number==82))
  {
    digitalWrite(red,HIGH);
  }
  else if((number==103)||(number==71))
  {
    digitalWrite(green,HIGH);
  }
  else if((number==98)||(number==66))
  {
    digitalWrite(blue,HIGH);
  }
  else
  {
    digitalWrite(red,LOW);
   digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
  }

  // put your main code here, to run repeatedly:
}