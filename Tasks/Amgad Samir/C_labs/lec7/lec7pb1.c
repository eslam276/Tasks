#include <stdio.h>
int main (void)
{

int  i , x , z=0;
int arr [10] ;

for (i=0 ; i<10 ; i++)
{
    printf("Enter the element number %d : ",i+1);
    scanf("%d",&arr[i]);
}

printf("Enter the required number : ");
scanf("%d",&x);

for (i=0 ; i<10 ; i++)
{
    if (x==arr[i])
    {
        printf("The first occurance of the number %d is at index : %d",x,i);
        z=0 ;
        break;
    }

    else
    z=1;

}

if(z)
printf("we didn't find the number :(");


    return 0 ;
}