/*
 * lcd_driver.h
 *
 * Created: 12/9/2020 7:31:38 PM
 *  Author: Abanob
 */ 


#ifndef LCD_DRIVER_H_
#define LCD_DRIVER_H_

#include "lcd_config.h"

void lcd4Init(void);
void lcd4SendCommand(unsigned char command);
void lcd4SendChar(unsigned char character);
void lcd4On(void);
void lcd4Clear(void);
void lcd4SendString(unsigned char* string);
void lcd4GotoXY(unsigned char x, unsigned char y);
void lcd4ShiftRight(void);
void lcd4ShiftLeft(void);

#endif /* LCD_DRIVER_H_ */