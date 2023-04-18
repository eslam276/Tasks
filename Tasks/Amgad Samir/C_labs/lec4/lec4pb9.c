// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int i , x , y , b=0 , d=0;
    
    for (i=0 ; i<5 ; i++)
    {
         for(y=0; y < i ; y++)
        {
            printf(" ");
        }
        printf("*");
        
        for(x=8 ; x > b ; x--)
        {
            printf(" ");
        }
        
        printf("*");
        printf("\n");
         b+=2;
    }
    
    for (i=5 ; i>0 ; i--)
    {
         for(y=0; y < i-1 ; y++)
        {
            printf(" ");
        }
        printf("*");
        
        for(x=0 ; x < d ; x++)
        {
            printf(" ");
        }
        
        printf("*");
        printf("\n");
         d+=2;
    }
    

    return 0;
}
