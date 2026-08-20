#include<stdio.h>
#include<stdlib.h>
int main()
{
    int grade;
    printf("enter your grade: ");
    scanf("%d",&grade);
    {
        if (grade>=80)
        printf("CONGRATULATIONS!! 'YOU PASSED' your parents are proud of you ");
    else
            if (grade<80 && grade>=50)
                printf("good try 'YOU PASSED' ,try harder next time ");


         else printf("OH... 'YOU FAILED' TRY NEXT TIME ");
    }


    return 0;
}
