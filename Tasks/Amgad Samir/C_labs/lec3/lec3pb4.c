
#include <stdio.h>

int main (void)

{


int temp ; 

printf("Enter the temperature : ");
scanf("%d",&temp);


if (temp >= 0  &&  temp <= 30)
{
    printf("\n heating time = 7 mins ");
}
else if (temp >= 30  &&  temp <= 60)
{
    printf("\n heating time = 5 mins ");
}
else if (temp >= 60  &&  temp <= 90)
{
    printf("\n heating time = 3 mins ");
}
else if (temp > 90)
{
    printf("\n heating time = 1 mins ");
}
else if (temp > 100)
{
    printf("\n Invalid input");
}


    return  0 ;
}