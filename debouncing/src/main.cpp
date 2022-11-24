#include <Arduino.h>
#define red 4
#define sw1 34
int s1;
int cu;
int pre = 0;
int ctr = 0;
void setup()
{
  pinMode(sw1, INPUT);
  pinMode(red, OUTPUT);
  Serial.begin(9600);
  // digitalWrite(red,LOW);
  //  put your setup code here, to run once:
}

void loop()
{
  s1 = digitalRead(sw1);

  if (s1 == 0)
  {
    cu = millis();
  }
  s1 = digitalRead(sw1);
  if (cu - pre >= 500)
  {
    ctr = ctr + 1;
    Serial.println(ctr);
  }
  if (ctr % 2 == 0)
  {
    digitalWrite(red, HIGH);
    // delay(500);
  }
  if (ctr % 4 == 0)
  {
    digitalWrite(red, LOW);
    // delay(500);
  }
  pre = cu;
  // put your main code here, to run repeatedly:
}