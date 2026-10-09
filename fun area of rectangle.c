#include<stdio.h>
float areaofrectangle(float width , float height)
{
      float area ;
      area=width*height;
      return area;
}
int main()
{
    float heightrec , widthrec , area=1;
    printf("Enter width of the triangle: ");
    scanf("%f",&widthrec);
    printf("Enter heightrec of the triangle: ");
    scanf("%f",&heightrec);
    area=areaofrectangle(widthrec,heightrec);
    printf("Area of rectangle is : %.2f \n",area);

    return 0;
}
