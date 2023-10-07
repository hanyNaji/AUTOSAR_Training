/*
 * DIO.h
 *
 *  Created on: Oct 7, 2023
 *      Author: hany Nagy
 */

#ifndef DIO_H_
#define DIO_H_


#include "../Std_Types.h"


/*
 The following values define the bit field for the ui8Pins argument to
 several of the APIs. 
 */ 
#define GPIO_PIN_0              0x00000001  /* GPIO pin 0 */ 
#define GPIO_PIN_1              0x00000002  /* GPIO pin 1 */ 
#define GPIO_PIN_2              0x00000004  /* GPIO pin 2 */ 
#define GPIO_PIN_3              0x00000008  /* GPIO pin 3 */ 
#define GPIO_PIN_4              0x00000010  /* GPIO pin 4 */ 
#define GPIO_PIN_5              0x00000020  /* GPIO pin 5 */ 
#define GPIO_PIN_6              0x00000040  /* GPIO pin 6 */ 
#define GPIO_PIN_7              0x00000080  /* GPIO pin 7 */ 

/*
Values that can be passed to GPIODirModeSet as the ui32PinIO parameter, and
returned from GPIODirModeGet.
*/
#define GPIO_DIR_MODE_IN        0x00000000  /* Pin is a GPIO input */
#define GPIO_DIR_MODE_OUT       0x00000001  /* Pin is a GPIO output */
#define GPIO_DIR_MODE_HW        0x00000002  /* Pin is a peripheral function */



typedef uint8 Dio_ChannelType;

typedef uint8 Dio_LevelType;

typedef uint8 Dio_PortType;

typedef uint32 Dio_PortLevelType;




Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);

void Dio_WriteChannel (Dio_ChannelType ChannelId, Dio_LevelType Level);


Dio_PortLevelType Dio_ReadPort (Dio_PortType PortId);

void Dio_WritePort (Dio_PortType PortId, Dio_PortLevelType Level);




#endif  /* DIO_H_ */