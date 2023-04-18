#include <stdio.h>

void fillarray(int*ptr,int size);
void smallest(int arr[],int size);

int main (void)
{

    int arr[10];
    int*ptr = arr ;

    fillarray(ptr,10);
    smallest(arr,10);


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

void smallest(int arr[],int size)
{
    int i  , min = *(arr) ;
    for ( i = 1; i < size; i++)
    {

        if(*(arr+i)< min)
        min = *(arr+i);


    }

    printf("The smallest value = %d",min);
    
}