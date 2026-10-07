#include<stdio.h>
int main()
{
    int i,j,k;
    int blankspaces;
    int currentvalue=1;
    int n;
    printf("Enter n numbers of rows you want the pyramid: ");
    scanf("%d",&n);
    blankspaces=n-1;
    for(i=1;i<=n;i++)
    {
        for(k=blankspaces;k>=1;k--)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("%d ",currentvalue);
            currentvalue+=1;
        }
        printf("\n");
        blankspaces--;
    }


    return 0;
}
