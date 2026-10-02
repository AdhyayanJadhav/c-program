#include<stdio.h>
int main()
{
     int i ;
     int quick_sum=1000000;
     float total_ammount=0.01;
     for (i=1;i<=30;i++)
     {
         printf("ON Day %d  Ammount will be : %.2f\n",i,total_ammount);
         total_ammount=total_ammount*2;

     } printf("total ammount after 30 days will be  %d",total_ammount);

    return 0;
}
