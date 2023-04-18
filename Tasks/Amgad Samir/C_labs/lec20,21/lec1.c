#include <stdio.h>
#include <stdlib.h>
#include"STD_TYPES.h"



typedef struct node
{
	sint32 Info;
	struct node* Next;
	struct node* Prev;
}DoublyNode_t;


void DisplayList(DoublyNode_t* Start);


DoublyNode_t* InsertInEmptyList(DoublyNode_t* Start, sint32 Data);

DoublyNode_t* InsertAtBeginning(DoublyNode_t* Start, sint32 Data);

void InsertAtEnd(DoublyNode_t* Start, sint32 Data);

DoublyNode_t* CreateList(void);

void InsertAfter(DoublyNode_t* Start, sint32 Data ,  sint32 NewData);

DoublyNode_t* InsertBefore(DoublyNode_t* Start, sint32 Data ,  sint32 NewData);

DoublyNode_t* DeleteNode(DoublyNode_t* Start, sint32 Data);

DoublyNode_t*Reverse(DoublyNode_t*Start);


















int main ()
{

    DoublyNode_t* Start = NULL ; 

    Start = CreateList();
    // DisplayList(Start);

    Start = Reverse(Start);

    
    DisplayList(Start);










    return 0 ;
}



DoublyNode_t* InsertInEmptyList(DoublyNode_t* Start, sint32 Data)
{
	DoublyNode_t* Temp = (DoublyNode_t*)malloc(sizeof(DoublyNode_t));
	
	Temp->Next=NULL;
	Temp->Prev= NULL;
	Temp->Info= Data;
	
	Start= Temp;
	
	return Start;
}

DoublyNode_t* InsertAtBeginning(DoublyNode_t* Start, sint32 Data)
{
	if(Start==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		DoublyNode_t* Temp = (DoublyNode_t*)malloc(sizeof(DoublyNode_t));
		Temp->Info = Data;
		Temp->Next = Start;
		Temp->Prev= NULL;
		Start->Prev= Temp;
		Start= Temp;
	}
	
	return Start;
}

void InsertAtEnd(DoublyNode_t* Start, sint32 Data)
{
	if(Start==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		DoublyNode_t* Temp = (DoublyNode_t*)malloc(sizeof(DoublyNode_t));
		DoublyNode_t* ptr = Start;
		while(ptr->Next!=NULL)
		{
			ptr=ptr->Next;
		}
		Temp->Info = Data;
		Temp->Next = NULL;
		Temp->Prev= ptr;
		ptr->Next = Temp;
	}
}

DoublyNode_t* CreateList(void)
{
	uint32 NodeNumber,i;
	sint32 Val;
	DoublyNode_t* Start = NULL;
	
	printf("Please enter no of nodes: ");
	scanf("%d",&NodeNumber);
	
	printf("Please enter 1st element: ");
	scanf("%d",&Val);
	Start= InsertInEmptyList(Start,Val);
	
	for(i=1;i<NodeNumber;i++)
	{
		printf("Enter next data element: ");
		scanf("%d",&Val);
		InsertAtEnd(Start,Val);
	}
	
	return Start;
}

void DisplayList(DoublyNode_t* Start)
{
	if(Start==NULL)
	{
		printf("List is empty\n");
	}
	
	else
	{
		DoublyNode_t* ptr = Start;
		printf("\nThe list is \n");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->Info);
			ptr= ptr->Next;
		}
		printf("\n");
	}
}

void InsertAfter(DoublyNode_t* Start, sint32 Data ,  sint32 NewData)
{

    if(Start==NULL)
	{
		printf("List is empty\n");
	}

    else
    {
        DoublyNode_t*ptr = Start ;
        DoublyNode_t*temp = (DoublyNode_t*)malloc(sizeof(DoublyNode_t));

        while (ptr!=NULL)
        {
            if(ptr->Info==Data)
            {
                break;
            }

            else
            {
                ptr = ptr->Next ;
            }
        }

        if(ptr==NULL)
        {
            printf("\nThe value isn't found");
        }
        else
        {
            
            temp->Prev = ptr ;
            temp->Next = ptr->Next;
            temp->Info = NewData ;
            if(ptr->Next!=NULL)
            {
                ptr->Next->Prev = temp ;
            }
            ptr->Next  = temp ;
        }
        

    }

}



DoublyNode_t* InsertBefore(DoublyNode_t* Start, sint32 Data ,  sint32 NewData)
{

    if(Start==NULL)
	{
		printf("List is empty\n");
	}

    else
    {
        DoublyNode_t*ptr = Start ;
        DoublyNode_t*temp = (DoublyNode_t*)malloc(sizeof(DoublyNode_t));

        while (ptr!=NULL)
        {
            if(ptr->Info==Data)
            {
                break;
            }

            else
            {
                ptr = ptr->Next ;
            }
        }

        if(ptr==NULL)
        {
            printf("\nThe value isn't found");
        }
        else
        {
            
            temp->Prev = ptr->Prev ;
            temp->Next = ptr;
            temp->Info = NewData ;
            if(ptr->Prev!=NULL)
            {
                ptr->Prev->Next = temp ;
            }
            else
            {
                Start = temp ;
            }
            ptr->Prev  = temp ;
        }
        

    }

    return Start ;

}

DoublyNode_t* DeleteNode(DoublyNode_t* Start, sint32 Data)
{

    if(Start==NULL)
	{
		printf("List is empty\n");
	}

    else
    {
        DoublyNode_t*ptr = Start ;

        while (ptr!=NULL)
        {
            if(ptr->Info==Data)
            {
                break;
            }

            else
            {
                ptr = ptr->Next ;
            }
        }

        if(ptr==NULL)
        {
            printf("\nThe value isn't found");
        }
        else if( (ptr->Next==NULL) && (ptr->Prev==NULL) )
        {
            Start = NULL ;
            free(ptr);
        }
        else if(ptr->Next==NULL)
        {

            
            ptr->Prev->Next = NULL ;
            free(ptr); 
            
        }
        else if(ptr->Prev==NULL)
        {

            
            ptr->Next->Prev = NULL ;
            Start = ptr->Next ;
            free(ptr); 
            
        }

        else
        {
            ptr->Next->Prev = ptr->Prev ;
            ptr->Prev->Next = ptr->Next ;
            free(ptr);

        }

    }

    return Start ;

}


DoublyNode_t*Reverse(DoublyNode_t*Start)
{

    DoublyNode_t*ptr = Start;
    DoublyNode_t*temp = NULL;


    

    if(Start==NULL)
	{
		printf("List is empty\n");
	}

    else
    {
       

        while (ptr !=NULL)
        {
            
            temp = ptr->Next ;
            ptr->Next = ptr->Prev ;
            ptr->Prev= temp ;

            Start = ptr ;

            ptr = temp ;

        }

        
        

    }
    return Start ;
}





