#include <stdio.h>

int main() {
    
     int num , base = 1 , result = 1 ;
     
     scanf("%d",&num);
     
     
    while (result < num)
    {
        base++;
        result = base * base ;
    
    }
    
    if (result == num)
    {
        printf("perfect");
    }
    
    else 
    {
        printf("bad");
    }
    

    return 0;
}