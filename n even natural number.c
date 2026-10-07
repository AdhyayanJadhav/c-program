#include<stdio.h>
int main()
{
    int i , num ;
    printf("Enter the number you want: ");
    scanf("%d",&num);
    printf("\nFirst %d Evem numbers are: ",num);
    for (i=1;i<=num;i++)
    {
        printf("%d ",i*2);
    }printf("\n");

    return 0;
}
