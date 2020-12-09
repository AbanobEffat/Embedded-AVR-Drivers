/*
 * s_seg_driver.h
 *
 * Created: 12/9/2020 11:12:26 AM
 *  Author: Abanob
 */ 


#ifndef S_SEG_DRIVER_H_
#define S_SEG_DRIVER_H_

#include "s_seg_Config.h"

void sev_seg1_config(void);
void sev_seg2_config(void);

void sev_seg1_write(unsigned char);
void sev_seg2_write(unsigned char);

void sev_seg1_enable(void);
void sev_seg2_enable(void);

void sev_seg1_disable(void);
void sev_seg2_disable(void);



#endif /* S_SEG_DRIVER_H_ */