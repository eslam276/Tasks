#include <stdio.h>


typedef struct lec
{
    int hours;
    int minutes;
    int seconds;
}time;


time diff(time n1,time n2);



int main()
{


    time n1 , n2 , n3;

    printf("Enter the first time : ");
    printf("\nHours : ");
    scanf("%d",&n1.hours);
    printf("\nminutes : ");
    scanf("%d",&n1.minutes);
    printf("\nseconds : ");
    scanf("%d",&n1.seconds);




    printf("Enter the second time : ");
    printf("\nHours : ");
    scanf("%d",&n2.hours);
    printf("\nminutes : ");
    scanf("%d",&n2.minutes);
    printf("\nseconds : ");
    scanf("%d",&n2.seconds);




    n3 = diff(n1,n2);


    printf("the diffrence = %d : %d : %d  ",n3.hours,n3.minutes,n3.seconds);


    












    return 0 ;
}



time diff(time n1,time n2)
{
    time n3 ;

    n3.hours = n1.hours - n2.hours ;
    
    n3.minutes = n1.minutes - n2.minutes ;

    n3.seconds = n1.seconds - n2.seconds ;



    if (n3.hours < 0)
    {
        n3.hours *= -1 ;
    }

    if (n3.minutes < 0)
    {
        n3.minutes *= -1 ;
    }

    if (n3.seconds < 0)
    {
        n3.seconds *= -1 ;
    }




    return n3 ;
    



}

