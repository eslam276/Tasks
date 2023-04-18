#include <stdio.h>

void fillarray(int*ptr,int size);
void swap(int arr[],int arr2[],int size);

int main (void)
{

    int arr[10];
    int arr2[10];
    int*ptr = arr ;
    int*ptr2 = arr2 ;


    printf("Enter the first array : \n");
    fillarray(ptr,10);
    printf("Enter the second array : \n");
    fillarray(ptr2,10);
    swap(arr,arr2,10);


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

void swap(int arr[],int arr2[],int size)
{
    int i  , temp ;
    for ( i = 0; i < size; i++)
    {

        temp = *(arr+i);
        *(arr+i) = *(arr2+i);
        *(arr2+i) = temp ;

    }


    printf("The Array number 1 " );

    for(i=0 ; i<size ; i++)
    {
        printf(" %d ",*(arr+i));
        
    }


    printf("\nThe Array number 2 " );
    for(i=0 ; i<size ; i++)
    {
        printf(" %d ",*(arr2+i));
        
    }
    
}