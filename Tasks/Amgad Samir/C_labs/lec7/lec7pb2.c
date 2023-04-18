#include <stdio.h>

int main (void)
{
    int i , x ;
    int arr [100]={1};

    for(i=1 ; i<100 ; i++)
    {
        arr[i] = arr[i-1]+2 ;
    }

    printf("Enter the number fo the term you want : ");
    scanf("%d",&x);
    printf("\nthe result is :  %d",arr[x-1]);










    return 0 ;
}