#include <util/delay.h>

#include "led_driver.h"
#include "button_driver.h"

int main(void)

{
	
	led_Config(lED_PORT,LED_1);
	led_ON(lED_PORT,LED_1);
	
	
	led_Config(lED_PORT,LED_2);
	led_ON(lED_PORT,LED_2);
	led_Config(lED_PORT,LED_3);
	led_ON(lED_PORT,LED_3);
		
	button_Config(BUTTON_PORT, BUTTON_1);
	

	while (TRUE)
	{
		if(button_Read(BUTTON_PORT, BUTTON_1))
			led_OFF(lED_PORT,LED_1);
		else led_ON(lED_PORT,LED_1);
	}
}