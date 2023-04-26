

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


    for ( i = 1; i < 10; i++)
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

    printf("\n The first element is %d ",First(&s));
    
    






    return 0 ;
}

























