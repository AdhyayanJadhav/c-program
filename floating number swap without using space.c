#include<stdio.h>

int main()
{
    double a =  9.456 ;
    double b = 44.396 ;
    double temp;
    printf("a = %lf \n ", a);
    printf("b = %lf \n ", b);
    temp=a;
    a=b;
    b=temp;
    printf("after interchanging the value will be \n ");
    printf("a = %lf \n ", a);
    printf("b = %lf \n ", b);

    return 0 ;
}

