 #include<stdio.h>
 #include<stdlib.h>

 int main()
 {
     double num1 ,num2  ;
     printf("enter the number you want =  " );
     scanf("%lf", &num1 );
     printf("enter the number you  want =  ");
     scanf("%lf", &num2);
     double result;
     result= (double)num1/num2; // assuming num2 !=0
     printf("result = %lf \n", result);
     return 0;





 }
