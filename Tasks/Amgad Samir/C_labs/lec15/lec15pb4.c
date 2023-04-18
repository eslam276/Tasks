#include <stdio.h>

typedef struct 
{

    char name[20];
    int id ;
    int grade ;

}student;

void func(student*ptr);
void print(student*ptr);

int main (void)
{

    student s[20];

    func(&s);
    print(&s);
    




    return 0 ;
}

void func(student*ptr)
{
 int i ;

    for(i=0 ; i<10 ; i++)
    {
        printf("Enter the name of the student number %d : ",i+1);
        // gets(s[i].name);
        scanf("%s",&(*(ptr+i)).name);
        printf("Enter the id of the student number %d : ",i+1);
        scanf("%d",&(*(ptr+i)).id);
        printf("Enter the grade of the student number %d : ",i+1);
        scanf("%d",&(*(ptr+i)).grade);

    }

}


void print(student*ptr)
{
    int i ;

    for(i=0 ; i<10 ; i++)
    {
        printf(" \nthe name of the student number %d : %s",i+1,(*(ptr+i)).name);
        printf(" \nthe id of the student number %d : %d",i+1,(*(ptr+i)).id);
        printf(" \nthe grade of the student number %d : %d",i+1,(*(ptr+i)).grade);

    }

}
