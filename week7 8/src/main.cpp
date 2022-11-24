#include <Arduino.h>
#define led 4
int n,bin,rem,place=1;
void setup() {
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  while(n>0)
  {
    rem=n%10;
    bin=bin+(rem*place);
    place=place*10;
    

  }

  // put your main code here, to run repeatedly:
}