#include <stdio.h>

int count (int x);

int main (void)
{

int x , num ;

printf("Enter the number : ");
scanf("%d",&x);

num = count(x);

printf("The number of ones = %d  ",num);

    return 0 ;
}


int count (int x)
{
    int  i , y , num = 0 , z ;

    for (i=0 ; i<32 ; i++)
    {

         z = x>>i ;
         y = z & 1 ;
         if (y)
         num++;

    }


    return num ;
}