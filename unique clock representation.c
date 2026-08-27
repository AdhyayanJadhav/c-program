#include<stdio.h>
#include<stdlib.h>
int main()
{
    int seconds , hour , minute , Rseconds;
    printf("Enter seconds you want: ");
    scanf("%d",&seconds);
    hour=seconds/3600;
    minute=(seconds-hour*3600)/60;
    Rseconds=(seconds-hour*3600)%60;

    if (hour < 10)
        printf("0");
    printf("%d : ", hour);
    if (minute < 10)
        printf("0");
    printf("%d : ", minute);
    if (Rseconds < 10)
        printf("0");
    printf("%d\n", Rseconds);

    return 0;
}
