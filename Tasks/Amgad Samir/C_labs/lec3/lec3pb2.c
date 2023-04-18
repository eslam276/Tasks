
#include <stdio.h>

int main() {
    
    
    char x ;
    int c ;
    
    scanf("%c",&x);
    
    c = x ;
    
    if ((c>64) && (c<91))
    {
       printf("It's alphabet"); 
    }
    else if ((c>96) && (c<123))
    {
       printf("It's alphabet"); 
    }
    else
    {
         printf("It's not  alphabet"); 
    }
   
    return 0;
    
}
