#include <stdio.h>

void fillarray(int*ptr,int size);
void copy(int arr[],int arr2[],int size);

int main (void)
{

    int arr[10];
    int arr2[10];
    int*ptr = arr ;

    fillarray(ptr,10);
    copy(arr,arr2,10);


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

void copy(int arr[],int arr2[],int size)
{
    int i  ;
    for ( i = 0; i < size; i++)
    {

        *(arr2+i)= *(arr+i);

    }

    for(i=0 ; i<size ; i++)
    {
        printf("\n the element number %d  = %d ",i+1,*(arr2+i));
        
    }
    
}