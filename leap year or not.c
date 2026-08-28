#include<stdio.h>
int main()
{
    int year ;
    printf("Enter a year: ");
    scanf("%d",&year);
    if ((year == 0))
        printf("Enter the year correctly");
    else if (year % 400 == 0)
        printf("%d year is a leap year\n", year);
    else if (year % 100 == 0)
        printf("%d year is NOT a leap year\n", year);
    else if (year % 4 == 0)
        printf("%d year is a leap year\n", year);
    else
        printf("%d year is NOT a leap year", year);
    return 0;
}

