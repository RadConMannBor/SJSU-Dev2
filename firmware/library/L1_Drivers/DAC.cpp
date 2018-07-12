
#include "DAC.h"
#include "lpc408x.h"

bool DAC::Init(void)
{
	LPC_CLK->PCLKDIV=1;  //Set Clock Divider to 1
	LPC_IOCON->IOCON_P0_26;  //Enable DAC Pin P0.26
	LPC_DACR->CR&=`(1<<16);  //Set Update Rate to 1MHz
}

DAC::DAC(void)
{

}                                                            
   
   
	bool DAC::WriteDAC(uint16_t dac_output)
	{
		if()
		LPC_DACR->CR=(dac_output<<6);
		return true;
	}
	void DAC::SineDAC(uint32_t frequency_hz)      //Demonstration Function
	{
		for(uint8_t i = 0;i<256;i++)
		{
			LPC_DACR->CR=(sine_lookup[i]<<6);
		}
		
	}
	void DAC::SawtoothDAC(uint32_t frequency_hz)  //Demonstration Function
	{
		for(uint8_t i = 0;i<256;i++)
		{
			LPC_DACR->CR=(sawtooth_lookup[i]<<6);
		}
	}
	void DAC::TriangleDAC(uint32_t frequency_hz)
	{
		for(uint8_t i = 0;i<256;i++)
		{
			LPC_DACR->CR=(triangle_lookup[i]<<6);
		}
	} 
	
	void SetBIAS(bool bias_level)
	{
		LPC_DACR->CR=(bias_level<<16);
	}