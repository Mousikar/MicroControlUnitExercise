#include "stm32f10x.h" 
#include "delay.h"
#include "led.h"
/************************************************
 STM32F103������ʵ�鹤��ģ��
 ���ߣ�MousikaR
 ʱ�䣺2022��1��25��15:22:35
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
