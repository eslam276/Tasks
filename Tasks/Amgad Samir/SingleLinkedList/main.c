#include <stdio.h>
#include "STD_TYPES.h"
#include "SingleLinkedList.h"


int main()
{
	sint32 ValueToInsert,DeleteVal;
	uint32 NodeVal,position;
	Node_t* Start= NULL;
	Start= CreateList();
	
	DisplayList(Start);
	
	printf("After reversing the list\n");
	Start= ReverseList(Start);
	DisplayList(Start);
}
