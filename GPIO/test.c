#include <util/delay.h>


#include "led_driver.h"
#include "button_driver.h"
#include "Buzzer_driver.h"
#include "s_seg_driver.h"
int main(void)

{
	
	led_Config(lED_PORT,LED_1);
	led_ON(lED_PORT,LED_1);
	
	led_Config(lED_PORT,LED_2);
	led_ON(lED_PORT,LED_2);
	
	led_Config(lED_PORT,LED_3);
	led_ON(lED_PORT,LED_3);
		
	button_Config(BUTTON_PORT, BUTTON_1);
	
	buzzer_Config(BUZZER_PORT, BUZZER_1);
	
	sev_seg1_config();
	sev_seg2_config();
	
	sev_seg1_enable();
	sev_seg2_enable();
	
	sev_seg1_write(2);
	
	

	while (TRUE)
	{
		if(button_Read(BUTTON_PORT, BUTTON_1))
			buzzer_ON(BUZZER_PORT, BUZZER_1);
		else buzzer_OFF(BUZZER_PORT, BUZZER_1);
		
		
		
		
		
		
		
		
	}
}