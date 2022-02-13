#include "stm32f10x.h" 
#include "delay.h"
/************************************************
 STM32F103开发板实验工程模板
 作者：MousikaR
 时间：2022年1月25日15:22:35
************************************************/

// void Delay(u32 count)															//计时函数
// {
//   u32 i=0;
//   for(;i<count;i++);
// }
 int main(void)
 {	
  GPIO_InitTypeDef  GPIO_InitStructure;							//定义一个结构体
	 
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	  //使能PC端口时钟，开启时钟
	 
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;			    //引脚：LED0-->PB.5 端口配置
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 	//模式：推挽输出
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;	//速度：IO口速度为50MHz
	 
  GPIO_Init(GPIOC, &GPIO_InitStructure);			      //初始化GPIOB.5
  GPIO_SetBits(GPIOC,GPIO_Pin_13);										//PB.5 输出高，把IO口拉高
	 	 
	delay_init();
	 
  while(1)
	{
	  GPIO_SetBits(GPIOC,GPIO_Pin_13);
		delay_ms(1000);
		GPIO_ResetBits(GPIOC,GPIO_Pin_13);
		delay_ms(1000);
	}
 }
