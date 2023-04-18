#include <stdio.h>

int total(int*ptr , int size);

int main ()
{

    int arr [10] = { 1,2,3,4,5,6,7,8,9,10};


    int sum = total(arr,10);


    printf("the total = %d ",sum);




    return 0 ;
}

int total(int*ptr , int size)
{
    int i ,  sum = 0 ;

    for ( i = 0; i < size; i++)
    {
        sum += *ptr+i;

    }
    
    return sum ;



}
