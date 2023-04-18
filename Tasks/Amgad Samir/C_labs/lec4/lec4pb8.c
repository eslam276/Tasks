#include <stdio.h>

int main() {
     
    int x, y , i , b = 0 ;
   
    
    
    
    
    
    for (x =0 ; x<10 ; x+=2)
    {
        
        for( i=4 ; i>=b ; i-- )
        {
            printf(" ");
        }
        for(y = 0 ; y < (x+1);y++)
        {
            
            printf("*");
        }
         printf("\n");
          b++;
    }
    return 0;
}