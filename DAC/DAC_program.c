

#include "STD_TYPES.h"
#include "DIO_interface.h"

#include "DAC_cfg.h"




void DAC_voidSetAnanlogVolt(uint8 Copy_u8Volt)
{

    DIO_u8SetPortValue(DAC_PORT,Copy_u8Volt);

}
