

#include <stdlib.h>
#include "Queue.h"

void InintQueue (Queue * pq )
{
    pq->front = NULL ;
    pq->rear = NULL ;

    pq->size = 0 ;
}



int Append (QueueEntry e , Queue * pq )
{
    QueueNode * ptr = (QueueNode *) malloc(sizeof(QueueNode));

    if (!ptr)
    {
        /* code */

        return 0 ;
    }

    else
    {

        ptr->entry = e ;
        ptr->next =NULL;


        if (pq->size == 0)
        {
            pq->front = ptr ;
            pq->rear = ptr;

        
        }

        else
        {
        
            pq->rear->next = ptr;
            pq->rear = ptr ;

        }

        pq->size++;

        return 1 ;
        
     }
        

    
}


void Serve (QueueEntry * e , Queue * pq )
{
    QueueNode * ptr = pq->front ;
   
   if (pq->size > 1)
   {
         pq->front = pq->front->next;
         *e = ptr->entry;

         free(ptr);

          pq->size--;

   }
   else if (pq->size == 1)
   {
        pq->front = NULL ;
        pq->rear = NULL ;

        *e = ptr->entry;

         free(ptr);
         pq->size--;

   }
   
   
}




int QueueEmpty (Queue * pq )
{
    return  (pq->size == 0 ) ;
}


int QueueFull (Queue * pq)
{
    return 0 ;
}



void traverseQueue (Queue * pq , void (*pf)(QueueEntry))
{

    QueueNode * ptr = pq->front ;

    while (ptr!=NULL)
    {
        (*pf)(ptr->entry);

        ptr = ptr->next ;
    }
    

}


void ClearQueue (Queue * pq )
{
    QueueNode * ptr  ;

    while (pq->front !=NULL)
    {
        
        ptr = pq->front ;

        pq->front = pq->front->next ;

        free(ptr);
        
    }

    pq->rear = NULL ;

    pq->size = 0 ;
}



int QueueSize (Queue * pq)
{
    return pq->size ;
}
