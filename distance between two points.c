#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2, y1,y2 , a , b ;
    float distance ;

    printf("enter the x1 point : ");
    scanf("%f",&x1);

    printf("enter the y1 point : ");
    scanf("%f",&y1);

    printf("enter the x2 point : ");
    scanf("%f",&x2);

    printf("enter the y2 point : ");
    scanf("%f",&y2);

    a = (x1-x2);
    b = (y1-y2);
    distance = sqrt ((a*a)+ (b*b));

    printf("the distance between (%.2f,%.2f) and (%.2f,%.2f)  = %.2f\n", x1,y1,x2,y2,distance );

    return 0;

}
