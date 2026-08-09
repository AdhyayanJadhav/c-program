#include<stdio.h>


int main()
{
    double fahrenheit;
    double temperatureincelcius;

    printf("Enter the temperature you want in fahrenheit = ");
    scanf("%lf",&fahrenheit);

    temperatureincelcius=(fahrenheit-32)/1.8;

    printf("The temperature in celcius = %lf", temperatureincelcius);

    return 0;


}
