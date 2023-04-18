#include <stdio.h>
int main (void)
{

float r , area , circumference ;

printf("Enter the Raduis : ");
scanf("%f",&r);

area           = 3.14 * r * r ;
circumference  = 2 * 3.14 * r ;

printf(" \n The area is : %f ",area );
printf(" \n The circumference is : %f ",circumference );


    return 0 ;
}