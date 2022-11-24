#include <Arduino.h>
#define green 2
#define switch2 35
int ledstate=0;
int s2;
hw_timer_t* timer1=NULL;
void blink();

void blink()
{
  //if(s2==LOW)
  
    ledstate++;
    if(ledstate==1)
    {
    digitalWrite(green,HIGH);
  }
  else
  {
    digitalWrite(green,LOW);
    ledstate=0;
  }
}
void setup() {
  pinMode(green,OUTPUT);
  pinMode(switch2,INPUT);


attachInterrupt(digitalPinToInterrupt(switch2),blink,FALLING);

  // put your setup code here, to run once:
}

void loop() {
  s2=digitalRead(switch2);
if(s2==LOW){
timer1=timerBegin(0,80,true);
timerAttachInterrupt(timer1,&blink,true);
timerAlarmWrite(timer1,1000000,true);
timerAlarmEnable(timer1);
s2=HIGH;
}
  // put your main code here, to run repeatedly:
}