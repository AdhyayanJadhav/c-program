#include <stdio.h>
#include <math.h>

int main()
{
    float r, h, l, area;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Enter height: ");
    scanf("%f", &h);

    l = sqrt((r * r) + (h * h));

    area = 3.14 * r * (r + l);

    printf("Total surface area of cone = %.2f\n", area);

    return 0;
}
