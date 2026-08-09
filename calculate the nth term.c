#include<stdio.h>

int main()
{
    float al , d , an ;
    int n ;

    printf("enter the initial term = ");
    scanf("%f", &al);
    printf("enter the difference between the numbers = ");
    scanf("%f", &d);
    printf("enter the nth term you want to find = ");
    scanf("%d",&n);

    an = al+(n-1)*d;
    printf("the nth term of the arithmatic sequence is = %f\n", an );

    return 0;

}


