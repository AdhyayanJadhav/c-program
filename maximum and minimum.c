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
       printf("%.2f is maximum number and %.2f is the minimum number ", num1 ,num2 );
    else printf("%.2f is maximum number and %.2f is the minimum number ", num2 , num1 );

    return 0;
}
