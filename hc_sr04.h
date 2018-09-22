#ifndef hc_sr04_h
#define hc_sr04_h

#if ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class UltrasonicSensor
{
    private:
        int Trig_pin;
        int Echo_pin;
        float time;
        float distance;
    public:
        UltrasonicSensor(int Echo, int Trig);
        float Timer();
        float Cm_distance();
        float Inc_distance();
};

#endif