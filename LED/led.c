  #include "led.h"
	
	void My_LED_Init(void)
	{
	GPIO_InitTypeDef  GPIO_InitStructure;							//����һ���ṹ��
	 
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	  //ʹ��PC�˿�ʱ�ӣ�����ʱ��
	 
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;			    //���ţ�LED0-->PB.5 �˿�����
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 	//ģʽ���������
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;	//�ٶȣ�IO���ٶ�Ϊ50MHz
	 
  GPIO_Init(GPIOC, &GPIO_InitStructure);			      //��ʼ��GPIOB.5
  GPIO_SetBits(GPIOC,GPIO_Pin_13);										//PB.5 ����ߣ���IO������
	}