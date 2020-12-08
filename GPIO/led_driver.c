/*
 * CFile1.c
 *
 * Created: 12/8/2020 6:03:12 PM
 *  Author: Abanob
 */ 
#include "led_driver.h"

void led_Config(unsigned char port, unsigned char pin){
	gpio_PIN_Direction(port, pin, OUT);
}
void led_ON(unsigned char port, unsigned char pin){
	gpio_PIN_WRITE(port, pin, HIGH);
}
void led_OFF(unsigned char port, unsigned char pin){
	gpio_PIN_WRITE(port, pin, LOW);
}
void led_Toggle(unsigned char port, unsigned char pin){
	if(Is_ON(port, pin))
		led_OFF(port, pin);
	else
		led_ON(port, pin);
}
bool Is_ON(unsigned char port, unsigned char pin){
	return (WRITE(port)&(1<<pin));
}
