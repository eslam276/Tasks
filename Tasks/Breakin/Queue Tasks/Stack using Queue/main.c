
#include <stdio.h>
#include "Stack.h"

void Display(QueueEntry e)
{
    printf("\n%d ",e);
}

int main (void)
{

        // gcc -o lec main.c Queue.c Stack.c

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
    
    





    return 0 ;
}