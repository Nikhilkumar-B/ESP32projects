#include <Arduino.h>
#define red 4
#define green 2
#define blue 13

int ledstate = 0;
hw_timer_t *timer1 = NULL;
hw_timer_t *timer2 = NULL;
void IRAM_ATTR timercall1();
void IRAM_ATTR timercall2();

void setup()
{
  pinMode(red, OUTPUT);
  
  //pinMode(blue, OUTPUT);

  timer1 = timerBegin(1, 80, true);
  timerAttachInterrupt(timer1, &timercall1, true);
  timerAlarmWrite(timer1, 1000000, true);
  timerAlarmEnable(timer1);
  // timerDetachInterrupt();
  
  pinMode(green, OUTPUT);
  timer1 = timerBegin(1, 80, true);
  timerAttachInterrupt(timer1, &timercall2, true);
  timerAlarmWrite(timer1, 200000, true);
  timerAlarmEnable(timer1);
  /* timer2 = timerBegin(2, 40, true);
   timerAttachInterrupt(timer2, &timercall2, true);
   timerAlarmWrite(timer2, 100000, true);
   timerAlarmEnable(timer2);
   */

  // put your setup code here, to run once:
}

void loop()
{

  // put your main code here, to run repeatedly:
}
void IRAM_ATTR timercall1()
{
  ledstate = !ledstate;

  digitalWrite(red, ledstate);
  // ledstate = !ledstate;

  // ledstate=0;
}

void IRAM_ATTR timercall2()
{
  ledstate = !ledstate;
  if (ledstate)
  {
    digitalWrite(green, HIGH);
  }
  else
  {
    digitalWrite(green, LOW);
  }
  // ledstate=0;
}
