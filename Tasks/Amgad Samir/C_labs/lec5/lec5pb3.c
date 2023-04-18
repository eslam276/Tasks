// Online C compiler to run C program online
#include <stdio.h>

void show_prime(int x , int y);
int main() {
    int x , y ;
    
    printf("Enter the two numbers : ");
    scanf("%d%d",&x,&y);
    
    show_prime(x,y);
    

    return 0;
}

void show_prime(int x , int y)
{
    int num ;
    
    
    if (x>y)
    {
       num = y +1 ;
       while(num<x)
       {
       
        if(num==2)
        printf("%d ",num);
        else if (num==3)
        printf("%d ",num);
      
        else if(num%2!=0 && num%3!=0)
       {
            printf("%d ",num);
       }
      
       num++;
       }
       
    }
    
    
    if (y>x)
    {
       num = x +1 ;
       while(num<y)
       {
        
        if(num==2)
        printf("%d ",num);
        else if (num==3)
        printf("%d ",num);
      
        else if(num%2!=0 && num%3!=0)
       {
            printf("%d ",num);
       }
      
       num++;
       }
       
    }
}