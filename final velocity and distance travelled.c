
#include <stdio.h>

int main()
{
    float u, a, t, v, s;

    printf("Enter initial velocity: ");
    scanf("%f", &u);

    printf("Enter acceleration: ");
    scanf("%f", &a);

    printf("Enter time: ");
    scanf("%f", &t);

    v = u + (a * t);
    s = (u * t) + (0.5 * a * t * t);

    printf("Final velocity = %.2f\n", v);
    printf("Distance travelled = %.2f\n", s);

    return 0;
}
