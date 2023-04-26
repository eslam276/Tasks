
/* stack array  interface  */




#ifndef  STACK_ARR_H_
#define  STACK_ARR_H_






/*  enter the size of the stack  */

#define MAXSTACK   100


/* enter the type of the elements */

typedef  int  StackEntry  ;





typedef struct stack
{
    
    StackEntry arr[MAXSTACK];
    int top ;


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


void copy (Stack * old , Stack * new);




#endif