
#include <stdio.h>

int main (void)
{
int num,x,y,z;

printf("Enter the number : ");
scanf("%d",&num);


x = num / 100 ;
y = (num / 10 )-x*10 ;
z = num -(x*100 + y*10);


printf("\n   %d   %d   %d",x,y,z);



}

 