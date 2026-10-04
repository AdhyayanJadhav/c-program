 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
    double height,width,length;
    double area,perimeter;
    printf("enter the height :  ");
    scanf("%lf", &height );
    printf("enter the width  : " );
    scanf("%lf", &width  ) ;
    printf("enter the length : ");
    scanf("%f",&length);

    area = height*width ;
    perimeter = 2*(length+width) ;

    printf("area of the rectangle = %.2lf \n", area);
    printf("Perimeter of the rectangle = %.2lf\n", perimeter);

    return 0;

 }





