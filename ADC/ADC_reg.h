

#ifndef ADC_REG_H_
#define ADC_REG_H_


#include "STD_TYPES.h"


#define SFIOR    *( (volatile uint8*) 0x50)

#define ADMUX    *( (volatile uint8*) 0x27)

#define ADCSRA   *( (volatile uint8*) 0x26)

#define ADCH     *( (volatile uint8*) 0x25)

#define ADCL     *( (volatile uint8*) 0x24)








#endif