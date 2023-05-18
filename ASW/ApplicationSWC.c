

/* Add RTE Application header */
#include "Rte_TemControlSWC.h"


void ApplTemperatureControl()
{
	
	float Temperature;
	
	/* Read data from Ecu Abstraction through RTE */
	Rte_Read_RP_Temperature_Temperature(&Temperature);
	
	/* Control Logic */
	if(Temperature > 50 && Temperature < 75)
	{
		/* Start Cooling fan (LowSpeed) */
		Rte_Call_RP_StartMotor_StartMotor(25);
	}
	else if(Temperature > 75)
	{
		/* start cooling fan (HighSpeed) */
		Rte_Call_RP_StartMotor_StartMotor(100);
	}
	else if(Temperature < 50)
	{
		/* Stop the cooling fan */
		Rte_Call_RP_StopMotor_StopMotor();
	}
	
	
}