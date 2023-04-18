// Online C compiler to run C program online
#include <stdio.h>
int calc(char c , int x , int y);

int main() {
    
   int x , y , result ;
   char c ;
   
   printf("Enter The first   number : ");
   scanf("%d",&x);
   printf("Enter The operator       : ");
   scanf(" %c",&c);
   printf("Enter The second  number : ");
   scanf("%d",&y);
   
  result = calc(c,x,y);
  printf("\nThe result is : %d",result);
   
   
   

    return 0;
}

int calc(char c , int x , int y)
{
    int add , sub , mul ;
    float div ;
    
    switch(c)
    {
    case '+' :
    return x+y ;
    break ;
    
    case '-' :
    return x-y ;
    break ;
    
    case '*' :
    return x*y ;
    break ;
    
    case '/' :
    return x/y ;
    break ;
    
    default :
     printf("eror ");
    }
     
     return 0 ;
  
}
