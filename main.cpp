/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

#define WAIT_TIME_MS 1000 
DigitalOut led1(LED1);
#include "Ultrasonic.h"
 
 void dist(int distance);

 
Ultrasonic mu(D8, D9);  

int main()
{
     mu.start();//start mesuring the distance

    while (true)
    {
         float dist=mu.read();
        led1 = !led1;
        thread_sleep_for(WAIT_TIME_MS); 
        printf("%f\n",dist);
    }
}
