/*
 * GPIO.c
 *
 * Created: 12/8/2020 5:11:26 PM
 *  Author: Abanob
 */ 
#include "GPIO.h"

void gpio_PORT_Direction(unsigned char port, unsigned char direction){
	switch (direction)
	{
		case IN : DIR(port) |= 0xFF;  
			break;
		case OUT: DIR(port) &= ~(0xFF);  
	}
}
void gpio_PORT_WRITE(unsigned char port, unsigned char direction){
	
	WRITE(port) = direction;
}
unsigned char gpio_PORT_READ(unsigned char port){
	return READ(port);
}

void gpio_UPPER_Direction(unsigned char port, unsigned char direction){
	switch (direction)
	{
		case OUT : DIR(port) |= 0xF0;
		break;
		case IN: DIR(port) &= ~(0xF0);
	}
}
void gpio_UPPER_WRITE(unsigned char port, unsigned char direction){
	WRITE(port) &= ~(0xf0);
	WRITE(port) |= direction <<4;
}
unsigned char gpio_UPPER_READ(unsigned char port){
	return (READ(port) >> 4);
}

void gpio_LOWER_Direction(unsigned char port, unsigned char direction){
	switch (direction)
	{
		case OUT: DIR(port) |= 0x0F;
		break;
		case IN : DIR(port) &= ~(0x0F);
	}
}
void gpio_LOWER_WRITE(unsigned char port, unsigned char direction){
	WRITE(port) &= ~(0x0f);
	WRITE(port) |= ((direction <<4) >>4);
}
unsigned char gpio_LOWER_READ(unsigned char port){
	return ((READ(port)<<4) >> 4);
}

void gpio_PIN_Direction(unsigned char port, unsigned char pin, unsigned char direction){
	switch (direction)
	{
		case OUT: DIR(port) |= (1<<pin);
		break;
		case IN : DIR(port) &= ~(1<<pin);
	}
}
void gpio_PIN_WRITE(unsigned char port, unsigned char pin, unsigned char direction){
	switch (direction)
	{
		case OUT: WRITE(port) |= (1<<pin);
		break;
		case IN : WRITE(port) &= ~(1<<pin);
	}}
unsigned char gpio_PIN_READ(unsigned char port, unsigned char pin){
	return (READ(port) & (1 << pin)) ? HIGH : LOW;
}