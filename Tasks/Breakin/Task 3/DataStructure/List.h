

#ifndef LIST_H_
#define LIST_H_


#include "STD_TYPES.h"



#define ARRAY  1u
#define LINKED 2u






/***
              cfg for List   1-  ARRAY
                             2-  LINKED
****/


#define LIST_TYPE  ARRAY





#if LIST_TYPE == ARRAY



#define MAXLIST 100


typedef  int ListEntry ;


typedef struct list
{
    
    ListEntry entry[MAXLIST];

    int size ;

}List;



void InitList ( List * );

int ListEmpty (List * );

int ListFull (List * );

int ListSize (List * );

void DestroyList (List * );

void InsertList (int , ListEntry , List * );
void DeleteList (int , ListEntry *  , List * );

void TraverseList (List * , void (*Display)(ListEntry));


void RetrieveList (int , ListEntry *  , List * );
void ReplaceList (int , ListEntry   , List * );


#elif  LIST_TYPE == LINKED




typedef struct node
{
	sint32 Info;
	struct node* Link;
}SingleNode_t;

typedef SingleNode_t Node_t ;



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




















#endif