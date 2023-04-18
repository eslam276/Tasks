// Online C compiler to run C program online
#include <stdio.h>
int func(int x);
int main() {
    int x , y ;
    
    printf("Enter the number : ");
    scanf("%d",&x); 
    
     y = func(x); 
     
     printf("  %d ",y);
    

    return 0;
}

int func(int x)
{
    int num = -1  ;
    
    if(x%2==0)
    {
        
        while(x>1)
        {
            if(x==2)
            num = 1 ;
            else
            num = -1 ;
            x/=2;
        }
        
        
        
    }
    
    else if(x%3==0)
    {
          
        while(x>1)
        {
            if(x==3)
            num = 0 ;
            else
            num = -1 ;
            x/=3;
        }
        
    }   
    
    
    return num ;
}
