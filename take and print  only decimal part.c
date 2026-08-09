#include<stdio.h>

int main()
{
    float data ;
    printf("enter the floating point type : ");
    scanf("%f", &data);

    printf("the integer = %d \n", (int)data);
    printf("the decimal after the floating point : %f", data-(int)data);


    return 0;
}
