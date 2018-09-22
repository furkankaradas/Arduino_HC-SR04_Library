#include <hc_sr04.h>

UltrasonicSensor sensor(5,3); // (Echo Pin, Trig Pin)

float cm, inch;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    cm = sensor.Cm_distance();
    Serial.print(cm);
    Serial.println(" cm");
    delay(300);
    inch = sensor.Inc_distance();
    Serial.print(inch);
    Serial.println(" inch");
    delay(300);
}