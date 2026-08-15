 #include <stdio.h>
 #include <stdlib.h>

 int main()

{
    int currentYear;
    int age;
    int yourbirthyear;

    printf("enter the current year: ");
    scanf("%d" , &currentYear );
    printf("enter your current age: ");
    scanf("%d", &age );

    yourbirthyear = currentYear - age ;

    printf("you were born in the year = %d \n" , yourbirthyear);

    return 0;


}
