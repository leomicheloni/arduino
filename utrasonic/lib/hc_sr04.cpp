#include "Arduino.h"
#include "hc_sr04.h"

// TP => trigger digital input, EP => echo digital input
Ultrasonic::Ultrasonic(int TP, int EP)
{
   pinMode(TP,OUTPUT);
   pinMode(EP,INPUT);
   Trig_pin=TP;
   Echo_pin=EP;
   Time_out=3000;
}

// return distance in centimetres
long Ultrasonic::Ranging()
{
  digitalWrite(Trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig_pin, LOW);
  
  duration = pulseIn(Echo_pin,HIGH,Time_out);
  
  if ( duration == 0 ) {
	duration = Time_out; 
  }

  return duration /29 / 2 ;
}
