
#include <stdio.h>

void find_lenght(char arr[],int size);

int main (void)
{

    char arr[10];

    printf("Enter the string : ");
    gets(arr);

    find_lenght(arr,10);




    return 0 ;
}

void find_lenght(char arr[],int size)
{

    int num = 0 , i = 0 ;


    while (*(arr+i) != '\0')
    {

        num++ ;
        i++;
    
    }

    printf("The lenght of the given string = %d ",num);
    

}
