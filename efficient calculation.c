#include<stdio.h>
int main()
{
   float x,x2,x4,x6,x8;
   printf("enter x : ");
   scanf("%f",&x);

   x2=x*x;
   x4=x2*x2;
   x6=x4*x2;
   x8=x4*x4;

   printf("x^2 = %.2f\nx^4 = %.2f\nx^6 = %.2f\nx^8 = %.2f\n " , x2,x4,x6,x8 );


   return 0;
}

