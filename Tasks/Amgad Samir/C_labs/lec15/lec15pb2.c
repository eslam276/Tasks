#include <stdio.h>


typedef struct lec
{
    int real;
    int imaginary;
}num;


num add(num n1,num n2);



int main()
{


    num n1 , n2 , n3;

    printf("Enter the real part of the first number : ");
    scanf("%d",&n1.real);
    printf("Enter the imaginary part of the first number : ");
    scanf("%d",&n1.imaginary);





    printf("Enter the real part of the second number : ");
    scanf("%d",&n2.real);
    printf("Enter the imaginary part of the second number : ");
    scanf("%d",&n2.imaginary);



    n3 = add(n1,n2);


    printf("\n The result = %d + %d i  ",n3.real,n3.imaginary);













    return 0 ;
}



num add(num n1,num n2)
{
    num n3 ;

    n3.real = n1.real + n2.real ;
    n3.imaginary = n1.imaginary + n2.imaginary ;



    return n3 ;
}
