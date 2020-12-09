/*
 * lcd_driver.c
 *
 * Created: 12/9/2020 8:49:43 PM
 *  Author: Abanob
 */ 
#include "lcd_driver.h"
#include <util/delay.h>

void lcd4Init(void){
	
	gpio_UPPER_Direction(LCD4_DATA_PORT, OUT);
	gpio_PIN_Direction(LCD4_CTRL_PORT, LCD4_EN, OUT);
	gpio_PIN_Direction(LCD4_CTRL_PORT, LCD4_RS, OUT);
	gpio_PIN_Direction(LCD4_CTRL_PORT, LCD4_RW, OUT);
	
	lcd4SendCommand(0x33);
	lcd4SendCommand(0x32);
	lcd4SendCommand(0x28);// 4-bit Mode, 2-lines and Format 5*8
	lcd4On(); // LCD ON
	lcd4Clear(); // Clear LCD	
	
}
void lcd4SendCommand(unsigned char command){
			
	gpio_PIN_WRITE(LCD4_CTRL_PORT, LCD4_RS, LOW);
	gpio_PIN_WRITE(LCD4_CTRL_PORT, LCD4_RW, LOW);
	gpio_UPPER_WRITE(LCD4_DATA_PORT, (command>>4));
	_delay_us(39);
	gpio_PIN_WRITE(LCD4_CTRL_PORT, LCD4_EN, HIGH);
	_delay_ms(10);
	gpio_PIN_WRITE(LCD4_CTRL_PORT, LCD4_EN, LOW);
	_delay_ms(10);
	gpio_UPPER_WRITE(LCD4_DATA_PORT, command);
	_delay_us(39);
	gpio_PIN_WRITE(LCD4_CTRL_PORT, LCD4_EN, HIGH);
	_delay_ms(10);
	gpio_PIN_WRITE(LCD4_CTRL_PORT, LCD4_EN, LOW);
	_delay_ms(10);
	
}
void lcd4SendChar(unsigned char character){

	gpio_PIN_WRITE(LCD4_CTRL_PORT, LCD4_RS, HIGH);
	gpio_PIN_WRITE(LCD4_CTRL_PORT, LCD4_RW, LOW);
	gpio_UPPER_WRITE(LCD4_DATA_PORT, (character>>4));
	_delay_us(39);
	gpio_PIN_WRITE(LCD4_CTRL_PORT, LCD4_EN, HIGH);
	_delay_ms(10);
	gpio_PIN_WRITE(LCD4_CTRL_PORT, LCD4_EN, LOW);
	_delay_ms(10);
	gpio_UPPER_WRITE(LCD4_DATA_PORT, character);
	_delay_us(39);
	gpio_PIN_WRITE(LCD4_CTRL_PORT, LCD4_EN, HIGH);;
	_delay_ms(10);
	gpio_PIN_WRITE(LCD4_CTRL_PORT, LCD4_EN, LOW);
	_delay_ms(10);
	
}
void lcd4On(void){
	lcd4SendCommand(0x0C);
}
void lcd4Clear(void){
	lcd4SendCommand(0x01);
	_delay_ms(50);
}
void lcd4SendString(unsigned char* string){
	unsigned char i = 0;
	while(string[i]!='\0')
		lcd4SendChar(string[i++]);

}

void lcd4ShiftRight(void){
	lcd4SendCommand(0x1C);
}
void lcd4ShiftLeft(void){
	lcd4SendCommand(0x18);
}

void lcd4GotoXY(unsigned char x, unsigned char y){
	unsigned char charPos[]= { 0x80, 0xc0, 0x94, 0xd4};
	lcd4SendCommand(charPos[x-1] + y-1);
}