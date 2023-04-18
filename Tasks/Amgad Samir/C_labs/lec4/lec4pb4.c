
#include <stdio.h>

int main() {
    
  
    int number , power , i , result=1;
    
    
    printf("Enter the number and the power : ");
    scanf("%d%d",&number,&power);
    
    
    for( i=1; i<=power ; i++)
    {
        result = result * number ;
       
    }
    
    printf("The resultt is : %d",result);
    
   
    
   
    return 0;
}