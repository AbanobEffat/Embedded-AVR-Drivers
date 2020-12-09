/*
 * s_seg_driver.c
 *
 * Created: 12/9/2020 11:18:05 AM
 *  Author: Abanob
 */ 
#include "s_seg_driver.h"

void sev_seg1_config(void){
	gpio_UPPER_Direction(SEVEN_SEG_PORT, OUT);
	gpio_PIN_Direction(SEVEN_SEG_PORT, SEVEN_SEG1_EN, OUT);
}
void sev_seg2_config(void){
	gpio_UPPER_Direction(SEVEN_SEG_PORT, OUT);
	gpio_PIN_Direction(SEVEN_SEG_PORT, SEVEN_SEG2_EN, OUT);
}

void sev_seg1_write(unsigned char data){
	gpio_UPPER_WRITE(SEVEN_SEG_PORT, data);
}
void sev_seg2_write(unsigned char data){
	gpio_UPPER_WRITE(SEVEN_SEG_PORT, data);
}

void sev_seg1_enable(void){
	gpio_PIN_WRITE(SEVEN_SEG_PORT, SEVEN_SEG1_EN, HIGH);
}
void sev_seg2_enable(void){
	gpio_PIN_WRITE(SEVEN_SEG_PORT, SEVEN_SEG2_EN, HIGH);
}

void sev_seg1_disable(void){
	gpio_PIN_WRITE(SEVEN_SEG_PORT, SEVEN_SEG1_EN, LOW);
}
void sev_seg2_disable(void){
	gpio_PIN_WRITE(SEVEN_SEG_PORT, SEVEN_SEG2_EN, LOW);
}