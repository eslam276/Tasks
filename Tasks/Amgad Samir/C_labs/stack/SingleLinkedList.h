#ifndef SINGLELINKEDLIST_H_
#define SINGLELINKEDLIST_H_

typedef struct node
{
	sint32 Info;
	struct node* Link;
}SingleNode_t;


void DisplayList(SingleNode_t* Start);
uint8 CountNodes(SingleNode_t* Start);
sint8 Search(SingleNode_t* Start,sint32 SearchVal);
SingleNode_t* InsertAtBeginning(SingleNode_t* Start, sint32 Data);
void InsertAtEnd(SingleNode_t* Start, sint32 Data);
SingleNode_t* CreateList(void);
void InsertAfterANode(SingleNode_t* Start, sint32 Data, sint32 NewData);
SingleNode_t* InsertBeforeANode(SingleNode_t* Start, sint32 Data, sint32 NewData);
SingleNode_t* InsertAtPos(SingleNode_t* Start, uint32 Pos, sint32 NewData);
SingleNode_t* DeleteNode(SingleNode_t* Start, sint32 Data);
SingleNode_t* ReverseList(SingleNode_t* Start);


#endif