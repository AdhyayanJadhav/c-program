#include<stdio.h>
int main()
{
    int num , i , sum=0 ;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Numbers divisile by 3 and 5 are: ");
    for(i=1;i<=num;i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
    }printf("\nSum of all the numbers= %d\n",sum);

    return 0;
}
