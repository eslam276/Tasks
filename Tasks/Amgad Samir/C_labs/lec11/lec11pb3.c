#include  <stdio.h>
void fillarray(int*ptr,int size);
void print(int arr[],int size);

int main (void)
{

    int arr[10];
    int*ptr = arr ;

    fillarray(ptr,10);
    print(arr,10);




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

void print(int arr[],int size)
{
    int i ;
    
    for ( i = size - 1; i >=0; i--)
    {
        printf(" %d ",*(arr+i));
    }
    
}
