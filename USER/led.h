#ifndef __LED_H
#define __LED_H	 
#include "stm32f10x.h"

//LED端口定义
#define LED0 PCout(13)//
#define LED2 PBout(15)
#define LED1 PBout(14)
void LED_Init(void);//初始化

		 				    
#endif
