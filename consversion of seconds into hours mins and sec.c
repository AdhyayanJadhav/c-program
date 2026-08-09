#include<stdio.h>

int main()
{
    int seconds , hours , minutes , remainingseconds ;

    printf("enter total seconds (that you want to convert) = ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds - hours * 3600) / 60 ;
    remainingseconds = (seconds - hours * 3600) % 60;

    printf(" total = %d hours %d minutes %d seconds ", hours,minutes,remainingseconds);

    return 0;




}
