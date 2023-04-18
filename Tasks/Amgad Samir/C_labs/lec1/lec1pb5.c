 
#include <stdio.h>
int main (void )
{

int num1 , num2 , summation, subtraction , anding , oring , xoring ;

printf("\n Please enter the first number : ");
scanf("%d",& num1);
printf("\n Please enter the second number : ");
scanf("%d",& num2);


summation   = num1 + num2 ;
subtraction = num1 - num2 ;
anding      = num1 & num2 ;
oring       = num1 | num2 ;
xoring      = num1 ^ num2 ;


printf(" \n The summation   is : %d ",summation);
printf(" \n The subtraction is : %d ",subtraction);
printf(" \n The anding      is : %d ",anding);
printf(" \n The oring       is : %d ",oring);
printf(" \n The xoring      is : %d ",xoring);


    return 0 ;
}