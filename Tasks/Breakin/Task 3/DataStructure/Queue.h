

#ifndef QUEUE_H_
#define QUEUE_H_


#define ARRAY  1u
#define LINKED 2u






/***
              cfg for Queue   1-  ARRAY
                             2-  LINKED
****/


#define QUEUE_TYPE  ARRAY







#if QUEUE_TYPE == ARRAY


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





#elif #if QUEUE_TYPE == LINKED



typedef int QueueEntry ;

typedef struct queuenode
{
    QueueEntry entry ;
    struct queuenode * next ;
} QueueNode;


typedef struct queue
{
   QueueNode * front;
   QueueNode * rear;
   int size ;



}Queue;



void InintQueue (Queue * );

int Append (QueueEntry , Queue *);
void Serve (QueueEntry * , Queue *);

int QueueEmpty (Queue *);
int QueueFull (Queue *);

void traverseQueue (Queue * , void (*pf)(QueueEntry));

void ClearQueue (Queue * );





#endif











#endif