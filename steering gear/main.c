#include "stm32f10x.h" 
#include "delay.h"
#include "led.h"
#include "pwm.h"

/************************************************
 STM32F103������ʵ�鹤��ģ��
 ���ߣ�MousikaR
 ʱ�䣺2022��1��25��15:22:35
************************************************/

 int main(void)
 {	

	My_LED_Init(); 
	delay_init();
	My_TIM3_Init(19999,71);//����Ϊ20ms,(arr+1)(psc+1)/Tclk=20000*72/72000000=0.02s
	
  while(1)
	{
		GPIO_ResetBits(GPIOC,GPIO_Pin_13);
		TIM_SetCompare1(TIM3,500);//���ñȽ�ֵ500/20000=0.5/20�������ת�٣�
		delay_ms(1000);
		GPIO_SetBits(GPIOC,GPIO_Pin_13);
		TIM_SetCompare1(TIM3,1500);//���ñȽ�ֵ1500/20000=1.5/20�ٶ�Ϊ0��
		delay_ms(1000);
		GPIO_ResetBits(GPIOC,GPIO_Pin_13);
		TIM_SetCompare1(TIM3,2500);//���ñȽ�ֵ2500/20000=2.5/20�������ת�٣�
		delay_ms(1000);
		GPIO_SetBits(GPIOC,GPIO_Pin_13);
		TIM_SetCompare1(TIM3,1500);//���ñȽ�ֵ1500/20000=1.5/20�ٶ�Ϊ0��
		delay_ms(1000);
	}
 }
