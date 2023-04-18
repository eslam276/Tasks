
#include <stdio.h>

int main (void)
{
int x,y,z;

printf("Please Enter the number and the position of the bit : ");
scanf("%d%d",&x,&y);

z = x & (1<<y) ;
z = z>>y ;

printf("\n The value of this bit is : %d ",z);


}

 