
#include "Linked_Stack.h"

#include <stdlib.h>





void ReverseStack(Stack * s )
{

    

    StackNode * future = s->top ;

    if (future->next!=NULL)
    {
        StackNode * current = future ;
        StackNode * past ;



        future = future ->next ;
        current->next = NULL ;
        past = current ;
        current = future ;

        while (future->next != NULL)
        {
            future = future->next ;
            current->next = past ;

            past = current ;
            current = future ;
        }

        s->top = future ;
        future->next = past ;
        




    }


       
    




}



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

void CopyStack (Stack * old , Stack * new)
{

    ClearStack(new);

    StackNode *ptr = old->top ;

    while (ptr != NULL)
    {
       
        Push(ptr->entry,new);
        ptr = ptr->next;
    }

    free(ptr);

    ReverseStack(new);


}



