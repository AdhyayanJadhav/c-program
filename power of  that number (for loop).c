#include<stdio.h>
int main()
{
    int pow , num , i , result=1 ;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter power: ");
    scanf("%d",&pow);
    for (i=1;i<=pow;i++)
    {
        result=result*num;
    }
    printf("%d ^ %d = %d \n",num,pow,result);
    return 0;
}
