/*
 * File:   main_program.c
 * Author: Avijit Singh Kalsi
 *
 * Created on May 29, 2021, 4:09 PM
 */



#include <stdio.h>
#include <stdlib.h>
#include "CONFIG_PIC16F15325.h"

#define LED1 LATAbits.LATA5 // define LATA5 (GPIO RA5) as LED1

int main(void) {
    CONFIG_RA5_AS_DIGITAL_OUTPUT();
    LED1 = 1;
    while(1)
    {
        __delay_ms(500); // delay in ms
        LED1 = !LED1; // toggle led
    } //end while
}
