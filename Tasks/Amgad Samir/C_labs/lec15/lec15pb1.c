#include <stdio.h>

typedef struct
{
    char name[20];
    int roll;
    int math ;
    int english ;
    int scince ;
}student;

int main() {
    
    student s1 ;
    
    printf("Enter the name of the student : ");
    gets(s1.name);
    printf("Enter the roll of the student : ");
    scanf("%d",&s1.roll);
    printf("Enter the math degree of the student : ");
    scanf("%d",&s1.math);
    printf("Enter the english degree of the student : ");
    scanf("%d",&s1.english);
    printf("Enter the scince degree of the student : ");
    scanf("%d",&s1.scince);
    

    
     printf("\n\n\nthe name of the student : %s ",s1.name);
     printf("\nthe roll of the student : %d ",s1.roll);
     printf("\nthe math degree of the student : %d ",s1.math);
     printf("\nthe english degree of the student : %d ",s1.english);
     printf("\nthe scince degree of the student : %d ",s1.scince);
     

    return 0;

}
