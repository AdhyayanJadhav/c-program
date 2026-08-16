#include<stdio.h>
#include<stdlib.h>

int main()
{
    float  num1 , num2 ;

    printf("enter first number : ");
    scanf("%f",&num1);

    printf("enter second number : ");
    scanf("%f",&num2);

    if (num1 > num2)
        printf("%.2f is maximum number between %.2f and %.2f  ", num1,num1,num2);
    else
        printf("%.2f is maixmum number between %.2f and %.2f  ", num2,num1,num2);


    return 0;
}
