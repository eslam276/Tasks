
#include <stdio.h>

int main (void)
{

/*Write a program that reads two integers and checks
if the first is multiple of the second.*/


int x , y , check ;

printf("Enter the two numbers : ");
scanf("%d%d",&x,&y);

check =( ((float)x/y)*10)%10 ;

if (check == 0)
{
    printf("the first is multiple of the second");
}
else
{
    printf("the first is not multiple of the second");
}









    return 0 ;
}