#include<stdio.h>
#include<math.h>

int main (){

float finalAmount = 0.0;
float Principal = 0.0;
float rateOfInterest = 0.0;
float time = 0;
float interestGain = 0.0;


//A=P×(1+r/100​)t
    /*Where:
A = Final amount (including interest)
P = Principal amount (the initial money)
r = Annual interest rate (in %)
t = Time (in years)*/

printf("----compound interest calculator------\n");
printf("Enter the Principal amount : ");
scanf("%f",&Principal);

printf("Enter the Rate of interest (in percentage) : ");
scanf("%f",&rateOfInterest);

printf("Enter the Time (in years : ");
scanf("%f",&time);

finalAmount = Principal * pow(1+rateOfInterest/100, time ); //formule

interestGain = finalAmount - Principal;

printf("The Final Amount is Rs%.2f\n",finalAmount);

printf("The Compound Interest is Rs%.2f\n",interestGain);

return 0;
}