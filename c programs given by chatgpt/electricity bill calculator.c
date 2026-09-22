#include<stdio.h>

int main()
{
    int units , fbill;
    printf("Enter your current electrcity units consumed : ");
    scanf("%d",&units);
    if (units<=0)
    {
      fbill=units*0;
      printf("Enter your units correctly \n");
    }
    else if (units > 0 && units <= 100)
{
    fbill = units * 5;
}
else if (units <= 200)
{
    fbill = (100 * 5) + ((units - 100) * 7);
}
else
{
    fbill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
}

printf("Your bill is : %d", fbill);

    return 0;
}
