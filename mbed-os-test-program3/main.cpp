#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

int Led(DigitalOut &ledpin, int T);

int main()
{
   myLED = 0;
   myLED2 = 0;
   while (true)
   {
      Led(myLED2, 6);
      Led(myLED, 4);
   }
}