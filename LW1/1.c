/*Practice Name:  Take 10 Integer from keyboard by using the loop and print to their average values
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main(){
int in,num,sum=0;
float ave;

    for(in=1;in<=0;in++){
    printf("Please Enter the integer = ");
    scanf("%d",&num);
    sum=sum+num;
}
        ave=(float)sum/10;
        printf("The average of the integers is > %.2f",ave);

return 0;
}
