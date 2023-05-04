

#ifndef QUEUE_H_
#define QUEUE_H_



#define MAXQUEUE 100


typedef int QueueEntry ;

typedef struct queue
{
   int front;
   int rear;
   int size ;

   QueueEntry entry[MAXQUEUE] ;


}Queue;



void InintQueue (Queue * );

void Append (QueueEntry , Queue *);
void Serve (QueueEntry * , Queue *);

int QueueEmpty (Queue *);
int QueueFull (Queue *);

void traverseQueue (Queue * , void (*pf)(QueueEntry));

void ClearQueue (Queue * );
















#endif