#include "hc_sr04.h"

UltrasonicSensor::UltrasonicSensor(int Echo, int Trig)
{
    Echo_pin = Echo;
    Trig_pin = Trig;
    pinMode(Echo, INPUT);
    pinMode(Trig, OUTPUT);
}

float UltrasonicSensor::Timer()
{
    digitalWrite(Trig_pin, LOW);
    delayMicroseconds(2);
    digitalWrite(Trig_pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(Trig_pin, LOW);
    time = pulseIn(Echo_pin, HIGH);
    return time;
}

float UltrasonicSensor::Cm_distance()
{
    Timer();
    distance = (this->time/2) / 29.1;
    return distance;
}

float UltrasonicSensor::Inc_distance()
{
    float cm = Cm_distance();
    float inch = cm * 0.39370;
    return inch;
}