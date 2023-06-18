

#include "STD_TYPES.h"
#include "ADC_interface.h"
#include "ADC_reg.h"
#include "ADC_cfg.h"
#include "BIT_MATH.h"


void ADC_voidInit(void)
{


    /* Set voltage refrence to VCC */

    SET_BIT(ADMUX,6);
    CLR_BIT(ADMUX,7);

    /* Set ADC Left Adjust Result */

    SET_BIT(ADMUX,5);


    /* Disable Auto trigger */

    // CLR_BIT(ADCSRA,5);


    /* Set ADC prescaler */

    SET_BIT(ADCSRA,0);
    SET_BIT(ADCSRA,1);
    SET_BIT(ADCSRA,2);


    /* ADC Enable */

    SET_BIT(ADCSRA,7); 






}



uint8 ADC_u8GetChannelReading(uint8 Copy_u8Channel)
{

    ADMUX |= Copy_u8Channel ;



    /* Start Conversion */

    SET_BIT(ADCSRA,6);

    /* Reading the flag */

    while (GET_BIT(ADCSRA,4))
    {
        /* code */
    }

    SET_BIT(ADCSRA,4);


    return ADCH ;

}


