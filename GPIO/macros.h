/*
 * IncFile1.h
 *
 * Created: 12/8/2020 5:11:59 PM
 *  Author: Abanob
 */ 


/************************************************************************/
/*						      GPIO Registers		                    */
/************************************************************************/
#ifndef MACROS_H_
#define MACROS_H_

/*
#define PORTA 0x19U
#define PORTB 0x16U
#define PORTC 0x13U
#define PORTD 0x10U
*/
#define PORTD 0x30U
#define PORTC 0x33U
#define PORTB 0x36U
#define PORTA 0x39U

#define PIN 0x00U
#define DDR 0x01U
#define PORT 0x02U

#define READ(port_Base)  *(volatile unsigned char*)(port_Base+PIN) 
#define DIR(port_Base)   *(volatile unsigned char*)(port_Base+DDR) 
#define WRITE(port_Base) *(volatile unsigned char*)(port_Base+PORT)

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
#define PIN8 8
#define PIN9 9

#define HIGH 1
#define LOW 0

#define OUT 1
#define IN 0

typedef enum {FALSE, TRUE} bool;



#endif /* MACROS_H_ */