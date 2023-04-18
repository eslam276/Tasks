#ifndef DOUBLYLINKEDLIST_H_
#define DOUBLYLINKEDLIST_H_

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



#endif