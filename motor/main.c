#include "stm32f10x.h" 
#include "delay.h"
#include "led.h"
#include "pwm.h"

/************************************************
 STM32F103开发板实验工程模板
 作者：MousikaR
 时间：2022年1月25日15:22:35
************************************************/

 int main(void)
 {	

	My_LED_Init(); 
	delay_init();
	My_TIM3_Init(19999,71);//周期为20ms,(arr+1)(psc+1)/Tclk=20000*72/72000000=0.02s
	
  while(1)
	{
		GPIO_ResetBits(GPIOC,GPIO_Pin_13);
		TIM_SetCompare1(TIM3,10000);
		TIM_SetCompare2(TIM3,500);//设置比较值500/20000=0.5/20正向最大转速；
		delay_s(2);
		GPIO_SetBits(GPIOC,GPIO_Pin_13);
		TIM_SetCompare1(TIM3,500);//设置比较值1500/20000=1.5/20速度为0；
		TIM_SetCompare2(TIM3,10000);
		delay_s(2);
		GPIO_ResetBits(GPIOC,GPIO_Pin_13);
		TIM_SetCompare1(TIM3,8000);
		TIM_SetCompare2(TIM3,500);//设置比较值500/20000=0.5/20正向最大转速；
		delay_s(2);
		GPIO_SetBits(GPIOC,GPIO_Pin_13);
		TIM_SetCompare1(TIM3,500);//设置比较值1500/20000=1.5/20速度为0；
		TIM_SetCompare2(TIM3,8000);
		delay_s(2);
		GPIO_ResetBits(GPIOC,GPIO_Pin_13);
		TIM_SetCompare1(TIM3,5000);
		TIM_SetCompare2(TIM3,500);//设置比较值500/20000=0.5/20正向最大转速；
		delay_s(2);
		GPIO_SetBits(GPIOC,GPIO_Pin_13);
		TIM_SetCompare1(TIM3,500);//设置比较值1500/20000=1.5/20速度为0；
		TIM_SetCompare2(TIM3,5000);
		delay_s(2);
	}
 }
