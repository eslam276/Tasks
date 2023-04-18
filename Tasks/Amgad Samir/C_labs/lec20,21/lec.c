#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"

 



typedef struct node
{
	sint32 Info;
	struct node* link;
	
}Cir_t;






Cir_t*CraeteList(void);

Cir_t*InsertInEmptyList(Cir_t*Last,sint32 Data);

Cir_t*InsertAtEnd(Cir_t*Last,sint32 Data);

void DisplayList(Cir_t*Last);

void InsertAtBeginning(Cir_t*Last,sint32 Data);

Cir_t*InsertAfter(Cir_t*Last,sint32 Data,sint32 NewData);

void InsertBefore(Cir_t*Last,sint32 Data,sint32 NewData);

void Concatenate(Cir_t*Last,Cir_t*Last2);














int main ()
{


    Cir_t*Last ;

    Last = CraeteList();
    DisplayList(Last);






    return 0 ;
}











Cir_t*CraeteList(void)
{
	uint32 NodeNumber,i;
	sint32 Val;
	Cir_t*Last = NULL;
	
	printf("Please enter no of nodes: ");
	scanf("%d",&NodeNumber);
	
	printf("Please enter The  element number 1 : ");
	scanf("%d",&Val);
	Last= InsertInEmptyList(Last,Val);
	
	for(i=1;i<NodeNumber;i++)
	{
		printf("Please enter The  element number %d : ",i+1);
		scanf("%d",&Val);
		InsertAtEnd(Last,Val);
	}
	
	return Last;
}







Cir_t*InsertInEmptyList(Cir_t*Last,sint32 Data)
{
    Cir_t*temp = (Cir_t*)malloc(sizeof(Cir_t));

    Last = temp ;
    temp->Info = Data ; 
    Last->link = temp ;

    return Last ;

}








Cir_t*InsertAtEnd(Cir_t*Last,sint32 Data)
{
    Cir_t*temp = (Cir_t*)malloc(sizeof(Cir_t));

    temp->link = Last->link;
    temp->Info = Data ;
    Last->link = temp ;
    Last = temp ;

    return Last ;

}







void DisplayList(Cir_t*Last)
{
    if (Last==NULL)
    {
        printf("The list is empty");
    }

    else
    {
        Cir_t*ptr = Last->link ;
        do
        {
           printf("%d\t",ptr->Info);
           ptr = ptr->link ;
        } while (ptr!=Last->link);
        
    }
    
}


void InsertAtBeginning(Cir_t*Last,sint32 Data)
{

    if (Last==NULL)
    {
        printf("The list is empty");
    }


   else
   {
        Cir_t*temp = (Cir_t*)malloc(sizeof(Cir_t));

        temp->link = Last->link;
        temp->Info = Data ;
        Last->link = temp ;

   }

}


Cir_t*InsertAfter(Cir_t*Last,sint32 Data,sint32 NewData)
{

    if (Last==NULL)
    {
        printf("The list is empty");
    }


    else if (Last->Info==Data)
    {

        Last = InsertAtEnd(Last,NewData);

    }

    else
    {
        Cir_t*ptr=Last->link;
        do
        {

            if(ptr->Info==Data)
            {
                break;
            }
            else
            {
                ptr = ptr->link ;
            }
           
        } while (ptr!=Last->link);
        

        if (ptr==Last->link)
        {
            printf("We didn't this value ");

        }

        else
        {

            Cir_t*temp = (Cir_t*)malloc(sizeof(Cir_t));
            temp->Info= NewData;
            temp->link = ptr->link ;
            ptr->link=temp;

        }
        
    }

    return Last ;

}




void InsertBefore(Cir_t*Last,sint32 Data,sint32 NewData)
{

    if (Last==NULL)
    {
        printf("The list is empty");
    }

    

    else
    {
        Cir_t*ptr = Last ;


        do
        {
            if (ptr->link->Info==Data)
            {
                break ;
            }

            else
            {
                ptr=ptr->link;
            }
        
        } while (ptr!=Last);

        if (ptr==Last) 
        {
            printf("we didnit find this data");
        }
        else
        {

            Cir_t*temp = (Cir_t*)malloc(sizeof(Cir_t));
            temp->Info= NewData;
            temp->link = ptr->link ;
            ptr->link=temp;

        }
    }
    


    
    

    
    


}


void Concatenate(Cir_t*Last,Cir_t*Last2)
{
    if (Last==NULL || Last2==NULL)
    {

        printf("\n There is an empty list");
        
    }

    else
    {
        Cir_t*temp = Last2->link ;
        Last2->link = Last -> link ;
        Last->link = temp ;

    }



    
}




















































