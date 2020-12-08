#include <util/delay.h>

#include "led_driver.h"

int main(void)

{
	
	led_Config(lED_PORT,LED_1);
	led_ON(lED_PORT,LED_1);
	
	led_Config(lED_PORT,LED_2);
	led_ON(lED_PORT,LED_2);
	led_Config(lED_PORT,LED_3);
	led_ON(lED_PORT,LED_3);
	
	

	while (TRUE)
	{
		_delay_ms(1000);
		led_Toggle(lED_PORT,LED_1);
	}
}