#include<stdio.h>
#include<stdlib.h>

int main()
{
    float num1 , num2 , num3 ;
    printf("Enter a number : ");
    scanf("%f",&num1);
    printf("Enter a number : ");
    scanf("%f", &num2);
    printf("Enter a number : ");
    scanf("%f", &num3);

    if (num1>num2)
    if (num1>num3)
    if (num2>num3)
       printf("MAXIMUM : %.2f\nMINIMUM : %.2f", num1, num3);
    else printf("MAXIMUM : %.2f\nMINIMUM : %.2f", num1, num2);

    if (num2>num1)
    if (num2>num3)
    if (num1>num3)
       printf("MAXIMUM : %.2f\nMINIMUM : %.2f", num2 , num3);
    else printf("MAXIMUM : %.2f\nMINIMUM : %.2f",num2 , num1);

    if (num3>num1)
    if (num3>num2)
    if (num1>num2)
       printf("MAXIMUM : %.2f\nMINIMUM : %.2f", num3 ,num2);
    else printf("MAXIMUM : %.2f\nMINIMUM : %.2f", num3 , num1);

    if (num1==num2 && num2==num3)
        printf("all given numbers are same so there is no minimum or maximum number");

    return 0;
}
