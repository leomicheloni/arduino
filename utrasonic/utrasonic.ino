#include "hc_sr04.h"

Ultrasonic ultrasonic(7,8);

void setup() {
  Serial.begin(9600); 
}

void loop()
{
  Serial.print(ultrasonic.Ranging());
  Serial.println(" cm" );
  delay(100);
}
