#include<stdio.h>
#include<stdlib.h>
int main()
{
    float num1,num2;
    char sign;
    printf("enter first number: ");
    scanf("%f", &num1);
    printf("enter a mathematical opperation: ");
    scanf(" %c",&sign);
    printf("enter second number: ");
    scanf("%f",&num2);

    switch(sign)
        {
            case '+':
                printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
                break;
            case '-':
                printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
                break;
            case '*':
                printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
                break;
            case '/':
                {if (num2 == 0)
                    printf("ERROR... cannot be divided by zero");
                else
                    printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
                }
                break;
            case '%':
                 if (num2 == 0)
                    printf("You cannot divide by 0! \n");
                else
                    printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 % num2);
                break;
            default:
                printf("ERROR... check your opperation again !!!");
                break;
        }
    return 0;
}
