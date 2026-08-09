#include <stdio.h>
#include <stdlib.h>

int main() {

    // double height;
    // double width;
    // printf("Enter height  - ");
    // scanf("%lf", &height);
    // printf("Enter width - ");
    // scanf("%lf", &width);
    // // scanf("Enter your number in Science - %d", &grade2);


    // printf("Rectangle's perimeter is : %.1lf \n", (2 * (height + width)));
    double a = 5.6;
    double b = 2.7;
    double temp;

    printf("Before swap: a = %lf, b = %lf\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap: a = %lf, b = %lf\n", a, b);
    return 0;
}
