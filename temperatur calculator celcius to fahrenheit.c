#include<stdio.h>


int  main()
{
    double celcius;
    double temperaturinfahrenheit;

    printf("enter the tempertature in celcius = ");
    scanf("%lf", &celcius);

    temperaturinfahrenheit= celcius*1.8+32;

    printf("The tempeature in fahremheit = %lf \n ", temperaturinfahrenheit );

    return 0;




}
