#include<stdio.h>
#include<stdlib.h>
int main()
{
    char grade ;
    printf("enter your grades (A-D) : ");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'A':
        printf("your grades are betweeen 90 - 100 ");
        break;
    case 'B':
        printf("your grades are between 80 - 90 ");
        break;
    case 'C':
        printf("your grades are between 70 - 80 ");
        break;
    case 'D':
        printf("your grades are between 60-70");
        break;
    default:
        printf("ERROR... check your grades again");
        break;
    }
    return 0;
}
