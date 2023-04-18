#include <stdio.h>


int arr[100];

int top = -1 ;


int IsFull(int arr[]);
int IsEmpty(int arr[]);
void Push(int arr[],int Data);
int Pop(int arr[]);

int Peek(int arr[]);

int size(void);

void Display(int arr[]);


int main()
{



    






    return 0 ;
}




int IsFull(int arr[])
{
    if (top==99)
    {
        return 1 ;
    }

    else
    {
        return 0 ;
    }
    
}


int IsEmpty(int arr[])
{
    if (top==-1)
    {
        return 1 ;
    }

    else
    {
        return 0 ;
    }
    
}


void Push(int arr[],int Data)
{
    int x = IsFull(arr);
    if (x)
    {
       printf("The stack is full");
    }
    else
    {

        top++;
        arr[top]=Data;
    }
}

int Pop(int arr[])
{
    int x = IsEmpty(arr);
    int Data ;
    if (x)
    {
       printf("The stack is empty");
       Data =  0 ;
    }
    else
    {

        
        Data = arr[top];
        top--;
    }


    return Data ; 
}


int Peek(int arr[])
{

    int x = IsEmpty(arr);
    int Data ;
    if (x)
    {
       printf("The stack is empty");
       Data =  0 ;
    }
    else
    {

        
        Data = arr[top];
        top--;
    }


    return Data ; 

}


int size(void)
{
    return top+1 ;
}

void Display(int arr[])
{
    int i ;
    for ( i = top; i >= top; i--)
    {
       printf(" %d ",arr[i]);
    }
    
}

