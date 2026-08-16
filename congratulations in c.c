#include<stdio.h>
#include<stdlib.h>

int main()
{
    float percentage;

    printf("enter your percentage : ");
    scanf("%f",&percentage);
    if (percentage >= 38.5 )
        printf("\ncongratulations!! you passed ");
    else
        printf("\nyou failed try next time ");

    return 0;
}
