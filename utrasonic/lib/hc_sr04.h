// helper lib for working with distance ultrasonic sensor
// based on https://github.com/JRodrigoTech/Ultrasonic-HC-SR04
class Ultrasonic
{
  public:
    Ultrasonic(int TP, int EP);
    long Ranging();

  private:
    int Trig_pin;
    int Echo_pin;
    long Time_out;
    long duration;
};

