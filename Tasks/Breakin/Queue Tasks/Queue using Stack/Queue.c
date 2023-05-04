

#include "Linked_Stack.h"
#include "Queue.h"

#include <stdlib.h>



void InintQueue (Queue * pq)
{
    InitStack(pq);
}



void Append (QueueEntry e , Queue *pq)
{

     Push(e,pq);
}




void Serve (QueueEntry * e , Queue *pq)
{
    if (pq->size >1)
    {

            StackNode * ptrT = pq->top ;

            while (pq->top->next->next != NULL)
            {
            pq->top = pq->top->next;
            }

            StackNode * ptr = pq->top ;
            pq->top = pq->top->next;

            Pop(e,pq);

            pq->top = ptrT;

            ptr->next = NULL ;


    }

    else if (pq->size == 1)
    {
       Pop(e,pq);
    }
    
    
    





    
}


int QueueEmpty (Queue *pq)
{
    return StackEmpty(pq);
}


int QueueFull (Queue *pq)
{
    return StackFull(pq);
}


void traverseQueue (Queue * pq , void (*pf)(QueueEntry))
{
    TraverseStack(pq,pf);
}

void ClearQueue (Queue * pq)
{
    ClearStack(pq);
}
