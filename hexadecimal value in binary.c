#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a hexadecimal value: ");
    scanf("%c",&ch);
    switch(ch)
    {
    case '0':
        printf("binary: 0000");
        break;
    case '1':
        printf("binary: 0001");
        break;
    case '2':
        printf("binary: 0010");
        break;
    case '3':
        printf("binary: 0011");
        break;
    case '4':
        printf("binary: 0100");
        break;
    case '5':
        printf("binary: 0101");
        break;
    case '6':
        printf("binary: 0110");
        break;
    case '7':
        printf("binary: 0111");
        break;
    case '8':
        printf("binary: 1000");
        break;
    case '9':
        printf("binary: 1001");
        break;
    case 'A':
        printf("binary: 1010");
        break;
    case 'B':
        printf("binary: 1011");
        break;
    case 'C':
        printf("binary: 1100");
        break;
    case 'D':
        printf("binary: 1101");
        break;
    case 'E':
        printf("binary: 1110");
        break;
    case 'F':
        printf("binary: 1111");
        break;
    case 'a':
        printf("binary: 1010");
        break;
    case 'b':
        printf("binary: 1011");
        break;
    case 'c':
        printf("binary: 1100");
        break;
    case 'd':
        printf("binary: 1101");
        break;
    case 'e':
        printf("binary: 1110");
        break;
    case 'f':
        printf("binary: 1111");
        break;
    default:
        printf("Enter a valid hexadecimal number: ");
        break;

    }

    return 0;
}
