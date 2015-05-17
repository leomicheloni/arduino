class Ultrasonic
{
  public:
    Ultrasonic(int TP, int EP);
    long Ranging(int sys);

  private:
    int Trig_pin;
    int Echo_pin;
    long Time_out;
    long duration,distacne;
};

Ultrasonic::Ultrasonic(int TP, int EP)
{
   pinMode(TP,OUTPUT);
   pinMode(EP,INPUT);
   Trig_pin=TP;
   Echo_pin=EP;
   Time_out=3000;
}

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

  distacne = duration /29 / 2 ;
  return distacne;
}
