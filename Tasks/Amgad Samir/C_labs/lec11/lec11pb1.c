#include <stdio.h>

void fillarray(int*ptr,int size);
void sum(int arr[],int size);

int main (void)
{

    int arr[10];
    int*ptr = arr ;

    fillarray(ptr,10);
    sum(arr,10);




    return 0 ;
}

void fillarray(int*ptr,int size)
{
    int i ; 
    for(i=0 ; i<size ; i++)
    {
        printf("Enter the element number %d  : ",i+1);
        scanf("%d",ptr+i);
    }

}


void sum(int arr[],int size)
{

    int i , sum = 0 ;

    for(i=0 ; i<size ; i++)
    {
        sum+=*arr+i;
    }

    printf("\n the sum of the elements :  %d ",sum);

}
