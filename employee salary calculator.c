#include<stdio.h>

int main()
{
     float salary ;
     int totalhours ;

     printf("enter your salary(per hour) = ");
     scanf("%f", &salary);

     printf("enter your total hours = ");
     scanf("%d", &totalhours);

     printf("your salary = %.2f\n", salary*totalhours);

     return 0;

}
