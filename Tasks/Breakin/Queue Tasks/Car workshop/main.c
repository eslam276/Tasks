
#include "Car.h"

#include "Stack.h"
#include "Queue.h"

#include <stdio.h>







Stack st ;
Queue qu ;

Customer current ;


int main (void)
{

                // gcc -o lec main.c Car.c Stack.c Queue.c



    

    InitStack(&st);
    InintQueue(&qu);
    




    int check = 10;

    while (check)
    {
        

        /*
        1. Add a New Customer.
        2. Serve a Customer.
        3. How many Customers are waiting?
        4. Display Customers Information.
        5. Display Customers information in a “most-recent” Order.
        6. Exit
        */

       printf("\n\n1. Add a New Customer.");
       printf("\n2. Serve a Customer.");
       printf("\n3. How many Customers are waiting?");
       printf("\n4. Display Customers Information.");
       printf("\n5. Display Customers information in a “most-recent” Order.");
       printf("\n6. Exit\n");

       printf("\nEnetr the number you want :  ");
       scanf("%d",&check);



       switch (check)
       {


                case 1:
                        New();
                break;


                case 2:

                        if (qu.size > 0 )
                        {
                            ServeCustomer(&qu);
                            Display(current);
                        }
                        else
                        {
                            printf("\n The List is Empty \n");
                        }
                        
                        
                break;


                case 3:
                        Size(&qu);
                break;


                case 4:

                        if (qu.size > 0 )
                        {
                            DisplayCustomers(&qu);
                        }
                        else
                        {
                            printf("\n The List is Empty \n");
                        }

                        
                break;


                case 5:

                        if (qu.size > 0 )
                        {
                             DispalyRecent(&qu);
                        }
                        else
                        {
                            printf("\n The List is Empty \n");
                        }
                       
                break;


                case 6:
                        check = 0 ;
                break;

            
                default:
                        printf("\n Please Enter a valid number ");
                break;


       }



       
    }
    



    return 0 ;
}