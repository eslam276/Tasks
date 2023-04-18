#include <stdio.h>

int main(void)
{

int num1 , num2 ;

printf("Please enter the two numbers :  ");
scanf("%d",& num1 );
scanf("%d",& num2 );
int Result = ((num1 + num2) * 3) - 10 ;
printf("\nThe result is : %d ", Result);

    return 0 ;
}