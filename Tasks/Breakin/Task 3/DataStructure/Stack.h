
/* stack array  interface  */




#ifndef  STACK_ARR_H_
#define  STACK_ARR_H_




#define ARRAY  1u
#define LINKED 2u






/***
              cfg for Queue   1-  ARRAY
                             2-  LINKED
****/


#define STACK_TYPE  ARRAY







#if STACK_TYPE == ARRAY







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




#elif STACK_TYPE == LINKED




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


#endif