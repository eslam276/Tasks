#include <stdio.h>

void swap(int arr[], int arr2[],int size);

int main ()
{

    int arr [10]  = {7,2,9,0,56,7,88,55,3,2};
    int arr2[10] = {1,2,3,4,5,6,7,8,9,10};


    

    swap(arr,arr2,10);




    return 0 ;
}

void swap(int arr[], int arr2[],int size)
{
    int i ,  temp  ;

    for ( i = 0; i < size; i++)
    {


        temp = arr[i];
        arr[i]= arr2[i];
        arr2[i]=temp ;

        
        

    }

    
    for ( i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    

    printf("\n");


    for ( i = 0; i < size; i++)
    {
        printf("%d ",arr2[i]);
    }

    
    



}
