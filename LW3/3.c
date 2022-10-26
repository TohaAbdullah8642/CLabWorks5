/*Practice Name: Calculating about overtime which is pay of 10 employee where it paid as 120.00 Taka per hour,
as every hour are worked above 36 hours in a week,
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main(){
int num,hour;
float payment;

for(num=1;num<=10;num++){
    printf("\nPlease Enter the Working Hour of the Employee No. %d > ",num);
    scanf("%d",&hour);
    payment=(hour-36)*120;
    if(hour>36){
        printf("\nThe Employee of number %d overpay is = %.2f BDT\n",num,payment);
    }else{
        printf("\nYou have to work for more than 36 hours to get over time pay\n");
        }
    }
return 0;

}
