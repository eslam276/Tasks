

#include "Queue.h"
#include "Stack.h"



void InitStack (Stack * ps)
{
    InintQueue(ps);
}



void Push (StackEntry e , Stack * ps )
{
    Append(e,ps);
}



void Pop  (StackEntry * e , Stack * ps)
{


    if (ps->size > 1 )
    {


        QueueNode * ptrF = ps->front ;

        while (ps->front->next != ps->rear)
        {
            ps->front = ps->front->next ;
        }

        ps->rear = ps->front ;

        ps->front = ps->front->next ;

        Serve(e,ps);


        ps->front = ptrF ;


    }

    else if (ps->size == 1)
    {
         Serve(e,ps);
    }
    
    
     







     

}




int StackEmpty (Stack * ps)
{
    return QueueEmpty (ps);
}


int StackFull  (Stack * ps)
{
   return QueueFull(ps);
}

void StackTop   (StackEntry * e , Stack * ps)
{
    *e = ps->rear->entry;
}

int  StackSize  (Stack * ps)
{
    return QueueSize(ps);
}


void ClearStack (Stack * ps)
{
    ClearQueue(ps);
}

void TraverseStack (Stack * ps ,  void (*pf)(StackEntry) )
{
    traverseQueue(ps,pf);
}

