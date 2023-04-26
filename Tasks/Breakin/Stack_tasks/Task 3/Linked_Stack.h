

#ifndef LINKED_STACK_H_
#define LINKED_STACK_H_





/* enter the type of the elements */

typedef  int  StackEntry  ;





typedef struct stack_node
{
    
    StackEntry entry ;
    struct stack_node * next ;


}StackNode;

typedef struct stack
{
    StackNode * top ;

    int size ;
}Stack;





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