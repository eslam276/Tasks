

#include "STD_TYPES.h"
#include "ADC_interface.h"
#include "PORT_interface.h"
#include "DIO_interface.h"
void main (void)
{

    PORT_voidInit();
    ADC_voidInit();
    uint8 Local_u8Volt ;


    while (1)
    {
         Local_u8Volt = ADC_u8GetChannelReading(0);

         DIO_u8SetPortValue(DIO_u8PORTD,Local_u8Volt);

    }
    


    

}