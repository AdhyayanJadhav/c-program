#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1 ;
    printf("Enter a number: ");
    scanf("%d",&num1);
    if (99>=num1 && num1>=10)
       printf("DOUBLE DIGIT NUMBER");
    else if (999>=num1 && num1>=100)
       printf("TRIPPLE DIGIT NUMBER ");

    else printf("NEITHER DOUBLE NOR TRIPPLE DIGIT");

    return 0;
}
