// Online C compiler to run C program online
#include <stdio.h>
 int counter (int x) ;
int main() {
   
int x , num ;

printf("Enter the number : ");
scanf("%d",&x);

num = counter(x);

printf("The number of zeros = %d  ",num);


    return 0;
}


int counter (int x)
{
    int y = x , num = 0 , count = 0 ;
    
    while(y>0)
    {
        if(y%2!=0)
        {
            y = y >> 1 ;
            count = 0;
            
            while(y%2==0 && y>0)
            {
                count++ ;
                y = y>>1;
            }
            
            
            if (count> num )
            num = count;
        }
        else 
        y = y >> 1 ;
    }
    
    
    
    
    
    
    
    
    
    
    return num ;
}