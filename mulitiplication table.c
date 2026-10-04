#include<stdio.h>
int main()
{
    int num , i  , mul;
    printf("Enter number you want to print table: ");
    scanf("%d",&num);
    printf("Enter number till you want to multiply table: ");
    scanf("%d",&mul);
    if (mul>=100000)
    {
        printf("Are you serious right now bro!\n""dont play go get some work!!!\n");
    }
    else for(i=1;i<=mul;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }

    return 0;
}
