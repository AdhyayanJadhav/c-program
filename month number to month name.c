#include<stdio.h>
#include<stdlib.h>
int main()
{
    int month ;
    printf("enter number of month you want: ");
    scanf("%d",&month);
    if (month==1)
        printf("JANUARY");
    else if (month==2)
        printf("FEBRUARY");
    else if (month==3)
        printf("MARCH");
    else if (month==4)
        printf("APRIL");
    else if (month==5)
        printf("MAY");
    else if (month==6)
        printf("JUNE");
    else if (month==7)
        printf("JULY");
    else if (month==8)
        printf("AUGUST");
    else if (month==9)
        printf("SEPTEMBER");
    else if (month==10)
        printf("OCTOBER");
    else if (month==11)
        printf("NOVEMBER");
    else if (month==12)
        printf("DECEMBER");
    else if (month<1 || month>12)
        printf("ENTER THE NUMBER OF MONTH CORRECTELY");
    return 0;
}
