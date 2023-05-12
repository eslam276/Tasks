



#include "Stack.h"
#include <stdlib.h>


#if STACK_TYPE == ARRAY


void InitStack (Stack * ps )
{

    ps->top = 0 ;

}



void Push (StackEntry e , Stack * ps)
{
    ps->arr[ps->top] = e ;
    ps->top++ ;
    
}



void Pop  (StackEntry * pe , Stack * ps )
{
    ps->top-- ;
    *pe = ps->arr[ps->top];

}


int StackEmpty (Stack * ps)
{

    if (ps->top == 0)
    {
       return 1;
    }

    else
    {
        return 0 ;
    }
    

}


int StackFull  (Stack * ps)
{

    if (ps->top == MAXSTACK)
    {
       return 1;
    }

    else
    {
        return 0 ;
    }

}



void StackTop (StackEntry * pe , Stack * ps)
{

    *pe = ps->arr[ps->top-1];

}




int  StackSize  (Stack * ps )
{
    return ps->top;
}


void ClearStack (Stack * ps )
{
    ps->top = 0 ;
}



void TraverseStack (Stack * ps  ,  void (*pf)(StackEntry) )
{

    int i ;

    for ( i = ps->top ; i > 0; i--)
    {
        (*pf)(ps->arr[i-1]);
    }
    

}





#elif STACK_TYPE == LINKED




void InitStack (Stack * s )
{
    s->top = NULL ;
    s->size=0;
}



void Push (StackEntry e  , Stack * s )
{
    StackNode * ptr = (StackNode*)malloc(sizeof(StackNode));

    ptr->entry = e ;
    ptr->next = s->top ;
    s->top = ptr ;

    s->size++;

    
}


void Pop  (StackEntry * e , Stack * s)
{

    if (s->top != NULL)
    {
        *e = s->top->entry;
        StackNode * ptr = s->top ;
        s->top = s->top->next;
        s->size--;

        free(ptr);
    }

    else
    {

    }
    

}


int StackEmpty (Stack * s )
{
    if (s->top == NULL)
    {
       return 1 ;
    }

    else
    {
        return 0 ;
    }
    
}


int StackFull  (Stack * s)
{
    return 0 ;
}


void StackTop   (StackEntry * e , Stack * s)
{
    *e = s->top->entry;
}

int  StackSize  (Stack * s)
{
    return s->size ; 
}

void TraverseStack (Stack *s ,  void (*pf)(StackEntry) )
{

    StackNode *ptr = s->top ;

    while (ptr != NULL)
    {
        (*pf)(ptr->entry);

        ptr = ptr->next;
    }

    
}




void ClearStack (Stack * s )
{
    StackEntry * ptr = s->top ;
    
    while (s->top != NULL)
    {
        s->top = s->top->next;

        free(ptr);
        ptr = s->top;


    }

    s->size =0 ;
    

}



#endif
