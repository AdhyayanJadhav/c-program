#include <stdio.h>

int main()
{
    int employee_id;
    float basic, hra, da, tax, take_home;

    printf("Enter Employee ID: ");
    scanf("%d", &employee_id);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = 0.10 * basic;
    da = 0.30 * basic;
    tax = 0.05 * basic;

    take_home = basic + hra + da - tax;

    printf("\nEmployee ID: %d", employee_id);
    printf("\nBasic Salary: %.2f", basic);
    printf("\nHouse Rent Allowance: %.2f", hra);
    printf("\nDearness Allowance: %.2f", da);
    printf("\nProfessional Tax: %.2f", tax);
    printf("\nTake Home Salary: %.2f", take_home);

    return 0;
}
