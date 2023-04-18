#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "SingleLinkedList.h"


typedef struct node
{
	sint32 Info;
	struct node* Link;
}Node_t;


void DisplayList(Node_t* Start);
uint16 CountNodes(Node_t* Start);
sint8 Search(Node_t* Start,sint32 SearchVal);
Node_t* InsertAtBeginning(Node_t* Start, sint32 Data);
void InsertAtEnd(Node_t* Start, sint32 Data);
Node_t* CreateList(void);
void InsertAfterANode(Node_t* Start, sint32 Data, sint32 NewData);
Node_t* InsertBeforeANode(Node_t* Start, sint32 Data, sint32 NewData);
Node_t* InsertAtPos(Node_t* Start, uint32 Pos, sint32 NewData);
Node_t* DeleteNode(Node_t* Start, sint32 Data);
Node_t* ReverseList(Node_t* Start);

uint8 IsEmpty(Node_t*top);
uint16 GetSize(Node_t*top);
void DisplayStack(Node_t*top);
sint32 Peek(Node_t*top);
Node_t* Push(Node_t* top, sint32 Data);
sint32 Pop(Node_t*top,int*ptr);








int main ()
{


    Node_t*top = NULL ;

    int Data ;

    int*ptr = & Data ;









    return 0 ;
}















void DisplayList(Node_t* Start)
{
	if(Start==NULL)
	{
		printf("List is empty\n");
	}
	
	else
	{
		Node_t* ptr = Start;
		printf("\nThe list is \n");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->Info);
			ptr= ptr->Link;
		}
		printf("\n");
	}
}

uint16 CountNodes(Node_t* Start)
{
	uint16 NodeCounter=0;
	
	if(Start==NULL)
	{
		printf("List is empty\n");
	}
	
	else
	{
		Node_t* ptr = Start;
		
		while(ptr!=NULL)
		{
			ptr=ptr->Link;
			NodeCounter++;
		}

	}
	return NodeCounter;
}

sint8 Search(Node_t* Start,sint32 SearchVal)
{
	sint8 Position = 1;
	
	if(Start==NULL)
	{
		printf("List is empty\n");
		Position = -1;
	}
	
	else
	{
		Node_t* ptr = Start;
		
		while((ptr!= NULL) && ((ptr->Info) != SearchVal))
		{
				ptr= ptr->Link;
				Position++;
		}
		if(ptr==NULL)
		{
			Position = -1;
		}
		else
		{
			/*Do nothing*/
		}
	}
	return Position;
}

Node_t* InsertAtBeginning(Node_t* Start, sint32 Data)
{
	Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
	
	Temp->Info= Data;
	
	Temp->Link = Start;			/*Make the new node point to the first node before insertion*/
	
	Start = Temp;				/*Update the reference to the list*/
	
	return Start;
}

void InsertAtEnd(Node_t* Start, sint32 Data)
{
	Node_t* ptr = Start;
	Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
	Temp->Info = Data;
	
	while(ptr->Link!=NULL)
	{
		ptr= ptr->Link;
	}
	Temp->Link = ptr->Link;
	ptr->Link = Temp;
	
}

Node_t* CreateList(void)
{
	uint32 NodeNumber,i;
	sint32 Val;
	Node_t* Start = NULL;
	
	printf("Please enter no of nodes: ");
	scanf("%d",&NodeNumber);
	
	printf("Please enter 1st element: ");
	scanf("%d",&Val);
	Start= InsertAtBeginning(Start,Val);
	
	for(i=1;i<NodeNumber;i++)
	{
		printf("Enter next data element: ");
		scanf("%d",&Val);
		InsertAtEnd(Start,Val);
	}
	
	return Start;
}

void InsertAfterANode(Node_t* Start, sint32 Data, sint32 NewData)
{
	if(Start==NULL)
	{
		printf("\nEmpty list\n");
	}
	else
	{
		Node_t* ptr = Start;
		while(ptr!= NULL)
		{
			if((ptr->Info) == Data)
			{
				break;
			}
			else
			{
				ptr= ptr->Link;
			}
		}
		if(ptr==NULL)
		{
			printf("\n%d not found in the list\n",Data);
		}
		else
		{
			Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
			Temp->Info = NewData;
			Temp->Link= ptr->Link;
			ptr->Link= Temp;
		}
	}
}

Node_t* InsertBeforeANode(Node_t* Start, sint32 Data, sint32 NewData)
{
	if(Start==NULL)
	{
		printf("\nEmpty list\n");
	}
	else if(Start->Info == Data)
	{
		Start= InsertAtBeginning(Start,NewData);
	}
	else
	{
		Node_t* ptr = Start;
		while(ptr->Link!= NULL)
		{
			if((ptr->Link->Info) == Data)
			{
				break;
			}
			else
			{
				ptr= ptr->Link;
			}
		}
		if(ptr->Link==NULL)
		{
			printf("\n%d not found in the list\n",Data);
		}
		else
		{
			Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
			Temp->Info = NewData;
			Temp->Link= ptr->Link;
			ptr->Link= Temp;
		}
	}
	
	return Start;
}

Node_t* InsertAtPos(Node_t* Start, uint32 Pos, sint32 NewData)
{
	if(Start==NULL)
	{
		printf("\nEmpty list\n");
	}
	else if(Pos == 1)
	{
		Start= InsertAtBeginning(Start,NewData);
	}
	
	else
	{
		Node_t* ptr = Start;
		uint32 i;
		for(i=1;i<((Pos-1))&&(ptr!=NULL);i++)
		{
			ptr= ptr->Link;
		}
		if(ptr==NULL)
		{
			printf("\nInvalid Position \n");
		}
		else
		{
			Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
			Temp->Info = NewData;
			Temp->Link= ptr->Link;
			ptr->Link= Temp;
		}
	}
	return Start;
}

Node_t* DeleteNode(Node_t* Start, sint32 Data)
{
	Node_t* Temp = NULL;
	Node_t* ptr= NULL;
	if(Start==NULL)
	{
		printf("List is empty");
	}
	/*Deletion of first node or deletion of only node*/
	else if(Start->Info==Data)
	{
		Temp= Start;
		Start= Start->Link;
		free(Temp);
		printf("\nNode deleted\n");
	}
	
	/*Deletion of last node or deletion in between nodes*/
	else
	{
		ptr = Start;
		while(ptr->Link != NULL)
		{
			if(ptr->Link->Info==Data)
			{
				break;
			}
			else
			{
				ptr= ptr->Link;
			}
		}
		if(ptr->Link==NULL)
		{
			printf("Node not found\n");
		}
		else
		{
			Temp = ptr->Link;
			ptr->Link= Temp->Link;
			free(Temp);
			printf("\nNode deleted\n");
		}
	}
	return Start;
}

Node_t* ReverseList(Node_t* Start)
{
	if(Start==NULL)
	{
		printf("List is empty");
	}
	else
	{
		Node_t* ptr=NULL;
		Node_t* Next=NULL;
		Node_t* Prv=NULL;
		ptr= Start;
		while(ptr!=NULL)
		{
			Next= ptr->Link;
			ptr->Link= Prv;
			Prv= ptr;
			ptr= Next;
		}
		Start= Prv;
	}
	return Start;
}



uint8 IsEmpty(Node_t*top)
{
    if (top==NULL)
    {
        return 1 ;
    }
    
    else
    {
        return 0 ;
    }
}

uint16 GetSize(Node_t*top)
{
    int x = CountNodes(top);

    return x ;
}


void DisplayStack(Node_t*top)
{
    DisplayList(top);
}


sint32 Peek(Node_t*top)
{
    uint8 x = IsEmpty(top);
    if (x)
    {
        printf("The stack is empty ");

        return 0 ;
    }

    else
    {

        return top->Info ;

    }
    
}


Node_t* Push(Node_t* top, sint32 Data)
{
    top = InsertAtBeginning(top , Data) ;

    return top ;
}


sint32 Pop(Node_t*top,int*ptr)
{

    uint8 x = IsEmpty(top);
    sint32 Data ;
    if (x)
    {
        printf("The stack is empty ");

        
    }

    else
    {

        *ptr =  top->Info ;
        top = DeleteNode(top,top->Info);


    }

    return top ;

}








