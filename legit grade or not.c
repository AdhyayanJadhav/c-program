#include<stdio.h>
int main()
{
    int grade;
    do
    {
        printf("Enter a grade: ");
        scanf("%d",&grade);
    }while(grade < 0 || grade > 100);
    printf("You have entered a legit grade %d\n",grade);
    return 0;
}
