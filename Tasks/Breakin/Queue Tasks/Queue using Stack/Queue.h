
#ifndef QUEUE_H_
#define QUEUE_H_



#include "Linked_Stack.h"


typedef StackEntry QueueEntry ;

typedef Stack Queue ;




void InintQueue (Queue * );

void Append (QueueEntry , Queue *);
void Serve (QueueEntry * , Queue *);

int QueueEmpty (Queue *);
int QueueFull (Queue *);

void traverseQueue (Queue * , void (*pf)(QueueEntry));

void ClearQueue (Queue * );






















#endif