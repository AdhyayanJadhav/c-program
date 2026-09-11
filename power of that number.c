#include<stdio.h>
int main()
{
    int  i=0 , pow , num , result=1 ;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter the power(raised to): ");
    scanf("%d",&pow);
    while(i<pow)
    {
        result=result*num;
        i++;
    }
    printf("%d ^ %d = %d\n",num,pow,result);

    return 0;
}
