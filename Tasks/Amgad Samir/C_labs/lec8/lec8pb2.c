#include <stdio.h>

int total(int*ptr , int size,int val);

int main ()
{

    int arr [6]  = {1,2,3,4,4,4};


    int index = total(arr,6,4);


    printf("the index  = %d ",index);




    return 0 ;
}

int total(int*ptr , int size , int val)
{
    int i ,  index = -1 ;

    for ( i = 0; i < size; i++)
    {


        if( ptr[i]==val)
        {
            index = i ;
        }

        
        

    }
    
    return index ;



}
