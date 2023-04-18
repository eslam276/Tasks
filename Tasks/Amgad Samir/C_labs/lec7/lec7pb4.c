#include <stdio.h>
int fab1 (int x);
int main (void)
{
    int x , result ;
    printf("Enter the number fo the term you want : ");
    scanf("%d",&x);

    result = fab1(x);
    printf("\nthe result is :  %d",result);




    return 0 ;
}

int fab1 (int x)
{
    int i ;
    int arr[100]={1,1};

    for(i=2 ; i<100 ; i++)
    {
        arr[i] = arr[i-2] + arr[i-1] ;
    }

    return arr[x-1] ;
}

