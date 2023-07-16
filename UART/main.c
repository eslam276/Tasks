
#include "STD_TYPES.h"
#include <util/delay.h>

#include "PORT_interface.h"
#include "UART_interface.h"


int main (void)
{

    PORT_voidInit();

    UART_voidInit();


    while (1)
    {
       UART_voidSendData('H');
       _delay_ms(10);
    }
    


    return 0 ;
}