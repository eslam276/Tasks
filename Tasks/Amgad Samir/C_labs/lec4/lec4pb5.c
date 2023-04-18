#include <stdio.h>

int main() {
  
    
    int x, y ;
    
    printf("Please enter the number : ");
    scanf("%d",&x);
    
    while (x > 0)
    {
        y = x % 10 ;
        x /= 10 ;
        printf("%d",y);
    }
   

    return 0;
}