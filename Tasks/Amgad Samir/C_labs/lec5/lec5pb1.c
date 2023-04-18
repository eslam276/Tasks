#include <stdio.h>

void cube(int num);
int main() {
   
   int num ;
   printf("Enter the number : ");
   scanf("%d",&num);
   
   cube(num);
   
    return 0;
}

void cube(int num)
{
    int result = num*num*num ;
    printf("The cube of %d = %d",num,result);
}
