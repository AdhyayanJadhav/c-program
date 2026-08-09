#include<stdio.h>

int main()
{
    int num ;
    int reversednum ;
    int units , tens , hundreds ;

    printf("enter a 3 digit number : ");
    scanf("%d", &num);

    //you can use either this or
    units    = num % 10 ;
    tens     = (num / 10) % 10 ;
    hundreds = num / 100 ;

    // this
    reversednum = units ;
    reversednum = reversednum * 10 + tens ;
    reversednum = reversednum * 10 + hundreds ;

    printf("The reverse of three digits %d is %d%d%d \n", num ,units,tens,hundreds );
    //or
    printf("The reverse of three digits %d is %d ",num , reversednum );

    return 0;
}
