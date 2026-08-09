#include<stdio.h>

int main()

{
    double num1 , num2;

    printf("num1 = ");
    scanf("%lf", &num1);

    printf("num2 = ");
    scanf("%lf", &num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("when interchanged num1 will be = %lf \n ", num1 );
    printf("when interchanged num2 will be = %lf \n  ", num2 );

    return 0;




}


