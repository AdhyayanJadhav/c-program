#include<stdio.h>
#include<stdlib.h>
int main()
{
    float x1,y1;
    int quadrant ;
    printf("Enter x1: ");
    scanf("%f",&x1);
    printf("Enter y1: ");
    scanf("%f",&y1);
    if (x1>0 && y1>0)
        quadrant=1;
    else if (x1<0 && y1>0)
        quadrant=2;
    else if (x1<0 && y1<0)
        quadrant=3;
    else if (x1>0 && y1<0)
        quadrant=4;
    else if (x1==0 && y1==0)
        quadrant=0;
    else if (x1==0 && y1>0)
        quadrant=5;
    else if (x1>0 && y1==0)
        quadrant=6;
    else if (x1==0 && y1<0)
        quadrant=7;
    else if (x1<0 && y1==0)
        quadrant=8;

    switch(quadrant)
    {
         case 1:
            printf("point (%.2f,%.2f) is in quadrant 1 ",x1,y1);
             break;
         case 2:
            printf("point (%.2f,%.2f) is in quadrant 2 ",x1,y1);
             break;
         case 3:
            printf("point (%.2f,%.2f) is in quadrant 3 ",x1,y1);
            break;
         case 4:
            printf("point (%.2f,%.2f) is in quadrant 4 ",x1,y1);
            break;
         case 0:
            printf("point (%.2f,%.2f) is in on origin ",x1,y1);
             break;
         case 5:
            printf("point (%.2f,%.2f) is on y axis",x1,y1);
             break;
         case 6:
            printf("point (%.2f,%.2f) is on x axis ",x1,y1);
            break;
         case 7:
            printf("point (%.2f,%.2f) is on y axis ",x1,y1);
            break;
         case 8:
            printf("point (%.2f,%.2f) is on x axis ",x1,y1);
            break;
    }

    return 0;
}
