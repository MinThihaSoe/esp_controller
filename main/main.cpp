#include "Arduino.h"

extern "C" void app_main()
{
    initArduino();
    digitalWrite(10, HIGH);
}
