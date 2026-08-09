#include<stdio.h>

int main()
{
    float   minutes , remainingminutes ;
    int hour ,  distance , speed ;

    printf("enter the total distance (in km) = ") ;
    scanf("%d", &distance);

    printf("enter the average speed (in km/h) = ");
    scanf("%d", &speed );

    hour = distance/speed;
    minutes = speed / 60.0 ;
    remainingminutes =  (distance % speed) / minutes ;

    printf("the total time taken from point a to b \n %d hours and %.2f minutes ", hour , remainingminutes);

    return 0;


}
