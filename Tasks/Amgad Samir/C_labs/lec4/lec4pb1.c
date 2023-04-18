
#include <stdio.h>

int main (void)
{

     int x ;
    
    scanf("%d",&x);
    
   
    
    if (x==2 || x==3)
    {
        printf("it's prime number");
    }
    
    else if (x%2!=0 && x%3!=0)
    {
        printf("it's prime number");
    }
    
    else
    {
         printf("it's composite number");
    }
   




    return 0 ;
}