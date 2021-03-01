#include "mbed.h"

void Led(DigitalOut &ledpin, int T)
{
   for (int i = 0; i < T; ++i)
   {                     //blink for 10 times
      ledpin = !ledpin; // toggle led
      ThisThread::sleep_for(100ms);
   }
}