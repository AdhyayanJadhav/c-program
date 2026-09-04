#include<stdio.h>
int main()
{
     int day , month ,year;
     printf("Enter DAY: ");
     scanf("%d",&day);
     printf("Enter MONTH: ");
     scanf("%d",&month);
     printf("Enter YEAR: ");
     scanf("%d",&year);

     printf("YOUR DATE: ");
    if (day<10)
        printf(" 0");
    printf("%d /",day);
    if (month<10)
        printf(" 0");
    printf("%d /",month);
    printf("%d \n",year);

    printf("DATE IN HEXADECIMAL:");
    printf("%x /",day);
    printf("%x /",month);
    printf("%x ",year);

     return 0;
}
