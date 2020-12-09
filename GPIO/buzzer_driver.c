/*
 * buzzer_driver.c
 *
 * Created: 12/9/2020 11:03:47 AM
 *  Author: Abanob
 */ 

#include "Buzzer_driver.h"

void buzzer_Config(unsigned char port, unsigned char pin){
	gpio_PIN_Direction(port, pin, OUT);
}
void buzzer_ON(unsigned char port, unsigned char pin){
	gpio_PIN_WRITE(port, pin, HIGH);
}
void buzzer_OFF(unsigned char port, unsigned char pin){
	gpio_PIN_WRITE(port, pin, LOW);
}

