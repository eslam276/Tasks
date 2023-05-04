
#include <stdio.h>
#include "Queue.h"

void Display(QueueEntry e)
{
    printf("\n%d ",e);
}

int main (void)
{

        // gcc -o lec main.c Queue.c 

    Queue q ;

    InintQueue(&q);

    int element , i ;


    for ( i = 0; i < 10; i++)
    {
        Append(i,&q);
    }


    Serve(&element,&q);
    printf("\nThe served element = %d ",element);

     Serve(&element,&q);
    printf("\nThe served element = %d ",element);
     Serve(&element,&q);
    printf("\nThe served element = %d ",element);



    traverseQueue(&q,&Display);

    ClearQueue(&q);


    
    


    return 0 ;
}