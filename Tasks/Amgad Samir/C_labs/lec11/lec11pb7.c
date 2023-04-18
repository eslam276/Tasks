
#include <stdio.h>

void func(char arr[],char arr2[],int size);

int main (void)
{
    int i ;

    char arr[10];
    char arr2[3];

    printf("Enter the string : ");
    gets(arr);

    func(arr,arr2,10);

    for ( i = 0; i < 3; i++)
    {
        printf("%c",*(arr2+i));
    }
    






    return 0 ;
}

void func(char arr[],char arr2[],int size)
{

    int num = 0 , i = 0 ;


    while (*(arr+i) != '\0')
    {

        num++ ;
        i++;
    
    }

    *(arr2)=*(arr+(i-1));
    *(arr2+1)=' ';
    *(arr2+2)=*(arr+(i-2));
    

}
