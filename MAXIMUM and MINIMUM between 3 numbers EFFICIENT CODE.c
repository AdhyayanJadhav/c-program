#include<stdio.h>
#include<stdlib.h>

int main()
{
    float num1 , num2 , num3 ;
    float min , max ;
    printf("Enter a number : ");
    scanf("%f",&num1);
    printf("Enter a number : ");
    scanf("%f", &num2);
    printf("Enter a number : ");
    scanf("%f", &num3);

    max=num1;
    min=num2;
    if (num1<num2)
      {
       max=num2;
       min=num1;
      }
    if (max<num3)
        max=num3;
    if (num3<min)
        min=num3;

     printf("MAXIMUM between 3 numbers is: %.2f\nMINIMUM between 3 numbers is: %.2f", max , min );

    return 0;
}
