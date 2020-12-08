/*
 * IncFile1.h
 *
 * Created: 12/8/2020 5:58:15 PM
 *  Author: Abanob
 */ 


#ifndef LED_DRIVER_H_
#define LED_DRIVER_H_

#include "led_config.h"


void led_Config(unsigned char, unsigned char);
void led_ON(unsigned char, unsigned char);
void led_OFF(unsigned char, unsigned char);
void led_Toggle(unsigned char, unsigned char);
bool Is_ON(unsigned char, unsigned char);


#endif /* LED_DRIVER_H_*/