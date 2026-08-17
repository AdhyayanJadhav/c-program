#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number ;
    printf("enter a number : ");
    scanf("%d",&number);
    if  ((number % 2 ) == 0 )
        printf("%d is a EVEN number ", number);
    else
        printf("%d is a ODD number ", number);

    // if ((number % 2 ) != 0 )
    //    printf("%d is a ODD number ", number );
    // else
    //    printf("%d is a EVEN number ", number );

    return 0;
}
