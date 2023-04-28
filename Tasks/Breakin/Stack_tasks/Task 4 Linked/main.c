

#include <stdio.h>
#include "Linked_Stack.h"


void Display(int e )
{
    printf(" \n %d",e);
}


int main (void)
{


    Stack s ;
    Stack new;

    InitStack(&s);
    InitStack(&new);

    
    int i ;
    int e ;


    for ( i = 0; i < 10; i++)
    {
       if (! StackFull(&s))
       {
            Push(i,&s);
       }
       
    }



    printf("\n\nStack size = %d\n\n",StackSize(&s));


    TraverseStack( &s , &Display );



    
    CopyStack(&s,&new);

    

     printf("\n\nStack size = %d\n\n",StackSize(&new));

    TraverseStack( &new , &Display );




    return 0 ;
}

























