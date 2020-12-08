/*
 * GPIO.h
 *
 * Created: 12/8/2020 6:05:31 PM
 *  Author: Abanob
 */ 


#ifndef GPIO_H_
#define GPIO_H_

#include "macros.h"

void gpio_PORT_Direction(unsigned char port, unsigned char direction);
void gpio_PORT_WRITE(unsigned char port, unsigned char direction);
unsigned char gpio_PORT_READ(unsigned char port);

void gpio_UPPER_Direction(unsigned char port, unsigned char direction);
void gpio_UPPER_WRITE(unsigned char port, unsigned char direction);
unsigned char gpio_UPPER_READ(unsigned char port);

void gpio_LOWER_Direction(unsigned char port, unsigned char direction);
void gpio_LOWER_WRITE(unsigned char port, unsigned char direction);
unsigned char gpio_LOWER_READ(unsigned char port);

void gpio_PIN_Direction(unsigned char port, unsigned char pin, unsigned char direction);
void gpio_PIN_WRITE(unsigned char port, unsigned char pin, unsigned char direction);
unsigned char gpio_PIN_READ(unsigned char port, unsigned char pin);




#endif /* GPIO_H_ */