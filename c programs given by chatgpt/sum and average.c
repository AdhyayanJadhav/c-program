#include<stdio.h>

int main()
{
int a , b  ;
double sum , average ;

printf("enter the frst number you want = ");
scanf("%d", &a);

printf("enter the second number you want = ");
scanf("%d", &b);

sum = a + b ;
average = (a + b) / 2 ;

printf("the sum of %d and %d = %lf\n ", a,b,sum );
printf("the average of %d and %d = %lf\n " , a,b,average );

return 0;
}

