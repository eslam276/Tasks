

#include <Queue.h>

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







