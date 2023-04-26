
#include <stdio.h>
#include "STACK_ARR.h"


void Display(int e )
{
    printf(" \n %d",e);
}


int main (void)
{


    Stack s , new ;

    InitStack(&s);

    
    int i ;
    int e;


    for ( i = 0; i < 10; i++)
    {
       if (! StackFull(&s))
       {
            Push(i,&s);
       }
       
    }



    printf("Stack size = %d",StackSize(&s));


    TraverseStack( &s , &Display );



    Pop(&e , &s);
    printf(" \n the top element %d  ",e);


    Pop(&e , &s);
    printf(" \n the top element %d  ",e);



    Pop(&e , &s);
    printf(" \n the top element %d  ",e);


    StackTop(&e , &s);
    printf(" \n the top element %d  ",e);

    StackTop(&e , &s);
    printf(" \n the top element %d  ",e);


     InitStack(&new);
    copy(&s,&new);

    TraverseStack( &new , &Display );
    
    






    return 0 ;
}



