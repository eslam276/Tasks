
#include <stdio.h>

#include "Car.h"
#include "Stack.h"
#include "Queue.h"



 extern Stack st ;
 extern Queue qu ;
 extern Customer current ;




void New()
{
   Customer s ;

  


    printf("\n\nEnter The name of the customer : ");
    scanf("\n");
    gets(s.name);

    printf("\nEnter The ID of the customer : ");
    scanf("%d",&s.ID);

    printf("\nEnter The Model Year of the car : ");
    scanf("%d",&s.ModelYear);

     

    Append(s,&qu);


}


void Display(Customer s )
{

     printf("\n\n the name        :     %s",s.name);
     printf("\n the ID          :     %d",s.ID);
     printf("\n the Model year  :     %d",s.ModelYear);

}


Customer ServeCustomer(Queue * pq)
{
    Serve(&current,pq);

    return current ;
}


void Size(Queue * pq)
{
    printf("\nThe number of the waiting customers = %d ",QueueSize(pq));
}


void DisplayCustomers(Queue *pq)
{
     printf("\nCustomers  : \n\n");
    traverseQueue(pq,&Display);
}



void DispalyRecent(Queue * pq)
{

    
    ClearStack(&st);

    QueueNode * ptr = pq->front ;

    while (ptr != NULL)
    {
        
        current = ptr->entry ;
        Push(current,&st);

        ptr = ptr->next ;
    }


    printf("\nCustomers In Most Recent Order : \n\n");

    
    TraverseStack(&st,&Display);

    // printf("Stack  size = %d ",StackSize(&st));

}





