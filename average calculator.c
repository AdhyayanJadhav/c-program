#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1 ,num2 , num3 ;
    double average ;

    printf ("type the first number you want =  ");
    scanf("%d", &num1 );

    printf ("type the second number you want = ");
    scanf("%d", &num2 );

    printf ("type the third number you want =  ");
    scanf("%d", &num3 );

    average = ((num1+(double)num2+num3) / 3) ;

    printf("The average of the three numbers = %.16lf \n ", average );


    return 0;



}
