#include<stdio.h>
#include<stdlib.h>

int main()
{
    float num1 , num2 ;
    printf("Enter a number : ");
    scanf("%f", &num1);
    printf("Enter a number : ");
    scanf("%f", &num2);

    if (num1>num2)
       printf(" MAXIMUM number: %.2f\nMINIMUM number: %.2f ", num1 ,num2 );
    else printf(" MAXIMUM number: %.2f\nMINIMUM number: %.2f ", num2 , num1 );

    return 0;
}
