#include<stdio.h>
#include<stdlib.h>
int main()
{
    int money ,grade ;
    printf("enter MONEY you have :  ");
    scanf("%d",&money);
    printf("enter GRADE you got  :  ");
    scanf("%d",&grade);
    if (money<50 && grade>=90)
        printf("MONEY SHOULD BE GIVEN");
    else if (money<50 || grade>90)
        printf("MONEY SHOULD BE GIVEN");
    else
        printf("WORK HARD FOR THAT");

    return 0;
}
