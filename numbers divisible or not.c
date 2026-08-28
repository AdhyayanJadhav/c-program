#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter first number: ");
    scanf("%d",&num1 );
    printf("enter second number: ");
    scanf("%d",&num2 );
    printf("enter third number: ");
    scanf("%d",&num3 );
    if (num1==0 || num2==0 || num3==0)
        printf("\nNOT DIVISIBLE\n");
    else if ( ( (num1%num2)  == 0 || (num2%num1)   == 0 ) && ( (num1%num3)   == 0 || (num3%num1)  == 0 ) && ((num3%num2)   == 0 || (num2%num3)== 0) )
        printf("\ndivisible numbers\n");
    else printf("\nNOT DIVISIBLE\n");

    return 0;
}
