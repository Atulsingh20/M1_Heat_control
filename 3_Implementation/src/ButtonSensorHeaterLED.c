/**
 * @file ButtonSensorHeaterLED.c
 * @ Atul singh
 * @brief A file where pulse width modulation is implemented
 * @date 16-04-2022
 * 
 * @copyright Copyright (c) 2022
 * 
 */




#lude <avr/io.h>
#lude <util/delay.h>
#lude "ButtonSensorHeaterLED.h"

/**
 * @brief A function to operate the button and heater sensor
 * 
 */
void Buttons_LED_Init()
{
SET_LED_AS_OUTPUT; //set led as output port
SET_BUTTON_AS_INPUT; //clear bit 6 of DDR B
PULLUP_BUTTON; //Set bit 6 of Port B
SET_HEATER_AS_INPUT; //clear bit 7 of DDR B
PULLUP_HEATER;//Set bit 7 of DDR B

}

