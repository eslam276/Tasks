
/* Stack based on  Array implmentation */


#include "STACK_ARR.h"




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

void copy (Stack * old , Stack * new)
{
    int i ;
    for ( i = 0; i < old->top; i++)
    {
        Push(old->arr[i],new);
    }
    
}


