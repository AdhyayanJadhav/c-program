#include<stdio.h>

int main()
{
   float al , an ,  n ;
   double sn ;

   printf("enter the initial element of the arithmatic sequence = ");
   scanf("%f", &al);

   printf("enter the nth element of the arithmatic sequence =  ");
   scanf("%f", &an);

   printf("enter the total terms = ");
   scanf("%f",&n);

   sn = (al+an)* n / 2.0 ;

   printf("the sum of the sequence is = %f\n", sn );

   return 0;




}
