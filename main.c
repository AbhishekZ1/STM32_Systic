# include "gpio_driver.h"
#include "stm32f10x.h" 
#include "systick_timer.h"

int signal;
int main()
{
	Gpio_init(PortA,0,IN,I_GP_PP);
	Gpio_init(PortC,13,out50,O_GP_PP);
	Gpio_init(PortA,12,out50,O_GP_PP);
	Gpio_write(PortC,13,LOW);
	Gpio_write(PortA,12,LOW);
	systick_init_timer_interrupt();
	
	while (1)
	{
		if (signal==1000)
		{
				signal=0;
			  Gpio_Toggle(PortC,13);  
		}
		if (Gpio_read(PortA,0))
		{
			Gpio_write(PortA,12,HIGH);  
		}
		else
		{
		 Gpio_write(PortA,12,LOW);  
		}
		
		 
	}
	
 }

void SysTick_Handler(void)
	{
    signal++;
   
	}

