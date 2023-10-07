/*
 * port.c
 *
 *  Created on: Oct 7, 2023
 *      Author: hany Nagy
 */


#include "port.h"
#include <stdint.h>
#include "../tm4c123gh6pm.h"


void Port_Init()
{
    /* Enable clock to GPIO Port F */
    SYSCTL_RCGCGPIO_R |= (1 << 5);

    /* Wait until the clock is stable for GPIO Port F */
    while ((SYSCTL_PRGPIO_R & 0x00000020) == 0);

    /* Unlock GPIO Port F (necessary for certain configurations) */
    GPIO_PORTF_LOCK_R = 0x4c4f434b;

    /* Allow changes to the GPIO Port F configuration (commit) */
    GPIO_PORTF_CR_R |= 0xFF;

    /* Set Pins 1, 2, and 3 of Port F as outputs (LED pins) */
    GPIO_PORTF_DIR_R |= 0x0E;

    /* Enable pull-up resistors for Pins 0 and 4 of Port F */
    GPIO_PORTF_PUR_R = 0x11;

    /* Enable digital functionality for all pins of Port F */
    GPIO_PORTF_DEN_R = 0x1F;
}


