/*
 * button_driver.c
 *
 * Created: 12/8/2020 9:00:50 PM
 *  Author: Abanob
 */ 

#include "button_driver.h"

void button_Config(unsigned char port, unsigned char pin){
	gpio_PIN_Direction(port, pin, IN);
}

unsigned char button_Read(unsigned char port, unsigned char pin){
	return gpio_PIN_READ(port, pin);
}