/*
 * DIO.c
 *
 *  Created on: Oct 7, 2023
 *      Author: hany Nagy
 */

#include "DIO.h"
#include "../tm4c123gh6pm.h"





/*** Enumerations ***/


#define PORTA   0U
#define PORTB   1U
#define PORTC   2U
#define PORTD   3U
#define PORTE   4U
#define PORTF   5U


Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
    uint8 Port = ChannelId / 8;
    uint8 pin_num = ChannelId % 8;
    Dio_LevelType Level;
    switch (Port)
    {
        case PORTA:
            Level = READ_BIT(GPIO_PORTA_DATA_R, pin_num);
            break;
        case PORTB:
            Level = READ_BIT(GPIO_PORTB_DATA_R, pin_num);
            break;
        case PORTC:
            Level = READ_BIT(GPIO_PORTC_DATA_R, pin_num);
            break;
        case PORTD:
            Level = READ_BIT(GPIO_PORTD_DATA_R, pin_num);
            break;
        case PORTE:
            Level = READ_BIT(GPIO_PORTE_DATA_R, pin_num);
            break;
        case PORTF:
            Level = READ_BIT(GPIO_PORTF_DATA_R, pin_num);
            break;
        default:
            Level = 0x00;
            break;
    }
    
    return Level;
}

void Dio_WriteChannel (Dio_ChannelType ChannelId, Dio_LevelType Level)
{
    uint8 Port = ChannelId / 8;
    uint8 pin_num = ChannelId % 8;
    switch (Port)
    {
        case PORTA:
            INSERT_BIT(GPIO_PORTA_DATA_R, pin_num, Level);
            break;
        case PORTB:
            INSERT_BIT(GPIO_PORTB_DATA_R, pin_num, Level);
            break;
        case PORTC:
            INSERT_BIT(GPIO_PORTC_DATA_R, pin_num, Level);
            break;
        case PORTD:
            INSERT_BIT(GPIO_PORTD_DATA_R, pin_num, Level);
            break;
        case PORTE:
            INSERT_BIT(GPIO_PORTE_DATA_R, pin_num, Level);
            break;
        case PORTF:
            INSERT_BIT(GPIO_PORTF_DATA_R, pin_num, Level);
            break;
    }
    
}


Dio_PortLevelType Dio_ReadPort (Dio_PortType PortId)
{
    Dio_PortLevelType Level = 0;
    switch (PortId)
    {
        case PORTA:
            Level = GPIO_PORTA_DATA_R;
            break;
        case PORTB:
            Level = GPIO_PORTB_DATA_R;
            break;
        case PORTC:
            Level = GPIO_PORTC_DATA_R;
            break;
        case PORTD:
            Level = GPIO_PORTD_DATA_R;
            break;
        case PORTE:
            Level = GPIO_PORTE_DATA_R;
            break;
        case PORTF:
            Level = GPIO_PORTF_DATA_R;
            break;
        default:
            Level = 0x00000000;
            break;
    }

    return Level;
}


void Dio_WritePort (Dio_PortType PortId, Dio_PortLevelType Level)
{
    switch (PortId)
    {
        case PORTA:
            GPIO_PORTA_DATA_R = Level;
            break;
        case PORTB:
            GPIO_PORTB_DATA_R = Level;
            break;
        case PORTC:
            GPIO_PORTC_DATA_R = Level;
            break;
        case PORTD:
            GPIO_PORTD_DATA_R = Level;
            break;
        case PORTE:
            GPIO_PORTE_DATA_R = Level;
            break;
        case PORTF:
            GPIO_PORTF_DATA_R = Level;
            break;
        default:
            break;
    }
}



