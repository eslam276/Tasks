#include <stdio.h>

void rev(int arr[],int size);

int main ()
{

    int arr [10]  = {1,2,3,4,5,6,7,8,9,10};
    


    

    rev(arr,10);




    return 0 ;
}

void rev(int arr[],int size)
{
    int i ,  temp , j ;

    for ( i = 0; i < size; i++)
    {

        for(j=size-1 ; j>i ;j--)
        {
            temp = arr[j-1];
            arr[j-1]= arr[j];
            arr[j]=temp;
        }


    }

    
    


    for ( i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

    
    



}
