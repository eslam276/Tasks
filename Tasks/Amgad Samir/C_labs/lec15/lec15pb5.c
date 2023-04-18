#include <stdio.h>



typedef union lec
{
    char first_name[30];
    char last_name[30];
}family_name;




int main ()
{


    family_name test ;




    gets(test.first_name);

    printf("%s   and size = %d",test.last_name,sizeof(family_name));










    return 0 ;
}