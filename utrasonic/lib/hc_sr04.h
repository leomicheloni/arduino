
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

