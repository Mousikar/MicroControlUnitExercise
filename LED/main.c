#include "stm32f10x.h" 
#include "delay.h"
#include "led.h"
/************************************************
 STM32F103开发板实验工程模板
 作者：MousikaR
 时间：2022年1月25日15:22:35
************************************************/

 int main(void)
 {	

	My_LED_Init(); 
	delay_init();
	 
  while(1)
	{
	  GPIO_SetBits(GPIOC,GPIO_Pin_13);
		delay_ms(200);
		GPIO_ResetBits(GPIOC,GPIO_Pin_13);
		delay_ms(200);
	  GPIO_SetBits(GPIOC,GPIO_Pin_13);
		delay_ms(200);
		GPIO_ResetBits(GPIOC,GPIO_Pin_13);
		delay_ms(200);
	  GPIO_SetBits(GPIOC,GPIO_Pin_13);
		delay_ms(200);
		GPIO_ResetBits(GPIOC,GPIO_Pin_13);
		delay_ms(200);
	  GPIO_SetBits(GPIOC,GPIO_Pin_13);
		delay_ms(200);
		GPIO_ResetBits(GPIOC,GPIO_Pin_13);
		delay_ms(200);
	  GPIO_SetBits(GPIOC,GPIO_Pin_13);
		delay_ms(200);
		GPIO_ResetBits(GPIOC,GPIO_Pin_13);
		delay_ms(1000);
	}
 }
