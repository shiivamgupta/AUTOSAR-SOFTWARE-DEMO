

/* Include RTE Application header */
#include "Rte_TempHBridgeSWC.h"


/* Code for Runnable - Read Temperature */
void ReadTemperature_Function()
{
	uint16 ADCResult; 
	float PinVoltage, Temperature;
	
	/* Trigger ADC Conversion and read results */
	Adc_StartGroupConversion(1);
	Adc_ReadGroup(1, &ADCResult);
	
	
	/* Convert ADC raw vaule to Voltage */
	/* 10bit ADC with voltage ref-2.5V */
	PinVoltage = (2.5/1024)*ADCResult;
	
	
	/* Convert voltage to temperature */
	/* Resp. sensor actuator SWC on Application layer */
	/* Sensor -> for 35deg output voltage is 0.35V */
	Temperature = PinVoltage * 100;
	
	/* Write temperature results to RTE */
	Rte_Write_PP_Temperature_Temperature(Temperature);
	
	
}


/* Code for Runnable - StartMotor (Server) */
void StartMotor_Function(uint8 Fanspeed)
{
	
	if(Fanspeed < 50)
	{
		/* Trigger cooling fan with half speed */
		/* H-Bridge settings logic to (1,0) */
		Dio_WriteChannel(10, STD_HIGH);
		Dio_WriteChannel(11, STD_LOW);
		
	}
	else  /* Run fan at full speed */ 
	{
		/* H- Bridge settings logic to (1,1) */
		Dio_WriteChannel(10, STD_HIGH);
		Dio_WriteChannel(11, STD_HIGH);
	}
	
}

/* Code for Runnable - Stop Motor */
void StopMotor_Function()
{
	/* H-Bridge settings logic (0,0) */
	Dio_WriteChannel(10, STD_LOW);
	Dio_WriteChannel(11, STD_LOW);
	
}