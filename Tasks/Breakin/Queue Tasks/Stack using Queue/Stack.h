

#ifndef STACK_H_

#define STACK_H_


#include "Queue.h"


typedef Queue Stack ;

typedef QueueEntry StackEntry ;



void InitStack (Stack * );

void Push (StackEntry , Stack * );
void Pop  (StackEntry * , Stack * );

int StackEmpty (Stack * );
int StackFull  (Stack * );


void StackTop   (StackEntry * , Stack * );
int  StackSize  (Stack * );

void ClearStack (Stack * );


void TraverseStack (Stack * ,  void (*)(StackEntry) );


#endif