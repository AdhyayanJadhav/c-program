#include<stdio.h>
int main()
{
    int i=0 , astrick=0 ;
    printf("Enter the number of astrics you want to print: ");
    scanf("%d",&astrick);
    if (astrick>10000)
        printf("Enter a short number ");
    else while(i<astrick)
    {
        printf("*");
        i++;
    }
    printf("\n");

    return 0;
}
