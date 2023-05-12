

#include "Queue.h"
#include <stdlib.h>



#if QUEUE_TYPE == ARRAY

void InintQueue (Queue * pq )
{
    pq->size=0;
    pq->front=0;
    pq->rear = -1;

}

void Append (QueueEntry e , Queue * pq)
{
    if (pq->rear == MAXQUEUE -1 )
    {
        pq->rear = 0 ;
    }

    else
    {
        pq->rear++;
    }

    pq->entry[pq->rear] = e ;

    pq->size++;
    
}

void Serve (QueueEntry * pe , Queue * pq )
{


    *pe = pq->entry[pq->front];



    if (pq->front == MAXQUEUE -1 )
    {
        pq->front = 0 ;
    }

    else
    {
        pq->front++;
    }


    pq->size-- ;


}




int QueueEmpty (Queue * pq)
{
    return !(pq->size);
}


int QueueFull (Queue * pq)
{
    return (pq->size == MAXQUEUE);
}


void traverseQueue (Queue * pq , void (*pf)(QueueEntry))
{

    int i , pos = pq->front ;

    for ( i = 0; i < pq->size; i++)
    {
        (*pf)(pq->entry[pos]);

        pos = (pos +1) % MAXQUEUE ;
    }
    

}

void ClearQueue (Queue * pq )
{
    pq->size=0;
    pq->front=0;
    pq->rear = -1;
}






#elif #if QUEUE_TYPE == LINKED


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

#endif







