#include <HardwareSerial.h>
#define led 2
HardwareSerial SerialPort(2);


void setup() {
  SerialPort.begin(9600,SERIAL_8N1,16,17);
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  if(SerialPort.available())
  {}
  int num=SerialPort.read();
  if(num=='0')
  {
    digitalWrite(led,LOW);
  }
  if(num=='1')
  {
    digitalWrite(led,HIGH);
  }
  // put your main code here, to run repeatedly:
}