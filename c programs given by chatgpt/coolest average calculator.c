#include<stdio.h>
int main()
{
    float result=0 ,  Sum ;
    int gradesCount=0 , grade ;

    printf("Please enter your grades or '-1' to stop: ");
    scanf("%d",&grade);
     while (grade != -1)
    {
        Sum = Sum + grade;
        gradesCount++;
        printf("Please enter your grades or '-1' to stop: ");
        scanf("%d", &grade);
    }

    printf("You've entered %d grades! \n", gradesCount);
    if (gradesCount != 0)
        printf("And your AVERAGE GRADE is %.2f \n", Sum / gradesCount);

        return 0;

}
