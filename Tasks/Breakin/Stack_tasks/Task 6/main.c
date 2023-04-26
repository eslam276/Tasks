

#include <stdio.h>
#include "Linked_Stack.h"

int func(char * ptr );

void Display(int e )
{
    printf(" \n %c",e);
}


int main (void)
{
    
    int matching = func(" (rgb)  {byy} [gt34]");

    if (matching)
    {
       printf("... Matching ... %d",matching);
    }

    else
    {

        printf("... Not Matching ...%d",matching);

    }
    


    return 0 ;


}



int func(char * ptr )
{

    Stack s ;
    InitStack(&s);

    int err = 1 ;

    char element ;
    
    int i = 0;
    
    while(ptr[i]!='\0')
    {

        if (ptr[i]=='(' || ptr[i]=='{' || ptr[i]=='[')
        {
            Push(ptr[i],&s);
        }

        else if (ptr[i]==')' || ptr[i]=='}' || ptr[i]==']')
        {
            if (StackEmpty(&s))
            {
                err = 0 ;
            }

            else 
            {
                Pop(&element,&s);

                switch (element)
                {
                case '(':
                    if (ptr[i]!=')')
                    {
                        err = 0 ;
                    }
                    
                    break;
                case '{':
                    if (ptr[i]!='}')
                    {
                        err = 0 ;
                    }
                    break;
                case '[':
                    if (ptr[i]!=']')
                    {
                        err = 0 ;
                    }
                    break;
                
                default:
                    break;
                }
            }
             
        }


        TraverseStack(&s,&Display);



        
        

         
         i++;
    }


    printf("\n err = %d ",err);

    if (  ! StackEmpty(&s))
    {
        err= 0 ;
    }
           


    return err ;
}


























