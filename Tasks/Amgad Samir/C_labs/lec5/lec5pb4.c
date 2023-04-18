// Online C compiler to run C program online
#include <stdio.h>
int count(int x);
int main() {
   
   int x , result ;
   
   printf("Enter the number : ");
   scanf("%d",&x);
   
   result = count(x);
   
   printf("The number of holes = %d",result);
   

    return 0;
}


int count(int x)
{
 int num=0 ,  right  ; 
 
 while(x!=0)
 {
     right = x%10 ;
     x/=10 ;
     
     if(right==0 || right==4)
     {
     num++;
     }
     else if(right==6 || right==9)
     {
     num++;
     }
     else if(right==8)
     {
     num+=2;
     }
     
     
 }
    
    
    return num ;
    
}
