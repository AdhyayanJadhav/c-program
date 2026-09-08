#include<stdio.h>
int main()
{
    char ch ;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("IT IS A UPPERCASE");
    else if (ch >= 'a' && ch <= 'z')
        printf("IT IS A LOWERCASE!");
    else if (ch >= '0' && ch <= '9')
        printf("IT IS A DIGIT");
    else printf("OTHER......");

    return 0;
}
