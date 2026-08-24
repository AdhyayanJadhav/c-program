#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int num ;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num<0)
        printf("The Absolute Value of %d is |%d| ",num,(-1)*num);
    else printf("The Absolute value of %d is |%d|",num,num);

    return 0;
}
