



#ifndef Queue_H_
#define Queue_H_



#include "Global.h"

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

int QueueSize(Queue * );











#endif