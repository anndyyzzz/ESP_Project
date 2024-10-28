#include <stdio.h>
#include "SevenSegment.h"

SevenSegment s1(0) ;
SevenSegment s2(4) ;

extern "C" void app_main(void)
{
    while(1)
    {
        s1.DisplayNum(1);
        s1.DisplayOn();
        vTaskDelay(10/portTICK_PERIOD_MS);
        s1.DisplayOff();

        s2.DisplayNum(5);
        s2.DisplayOn();
        vTaskDelay(10/portTICK_PERIOD_MS);
        s2.DisplayOff();
    } 
}