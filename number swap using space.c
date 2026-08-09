#include<stdio.h>

int main()
{
     int a , b , temp;

     printf("enter a number = ");
     scanf("%d",&a);

     printf("enter a number = ");
     scanf("%d",&b);

     temp=a;
     a=b;
     b=temp;

     printf("the number will be after interchange = %d\n", a );
     printf("the number will be after interchange = %d\n", b );


     return 0;


}

