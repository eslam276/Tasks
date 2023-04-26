

#include <stdio.h>
#include "Linked_Stack.h"


void Display(int e )
{
    printf(" \n %d",e);
}


int main (void)
{


    Stack s ;

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

    printf("Stack size = %d",StackSize(&s));
    
    






    return 0 ;
}

























