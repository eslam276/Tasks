#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "DoublyLinkedList.h"

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