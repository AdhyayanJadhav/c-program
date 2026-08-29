#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  day , month , year , leapyear = 0;
    printf("Enter date (day/month/year): ");
    scanf("%d%d%d",&day,&month,&year);
    if (month==2)
        if (year % 4  == 0 && (year % 100 != 0 || year % 400 == 0))
        leapyear = 1;
    day +=1;

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day<=31)
                break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day<=30)
                break;
        case 2:
            if (day <= 29 && leapyear == 1)
                break;
            else if (day<=28)
                break;
        default:
             day = 1;
             month += 1;
             if (month > 12)
        {
            month = 1;
            year += 1;
        }
    }
    printf("the next awesome day is ");
    if (day<10)
        printf(" 0");
    printf("%d /",day);
    if (month<10)
        printf(" 0");
    printf("%d /",month);
    printf("%d ",year);

    return 0;
}
