#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

int x = 30;
int a = 2;
int z = -12;
float y = 5.11;
int square_root = 0;
int round_of = 0;
int power = 0;
int Ceil = 0;
int Floor = 0;
int absolute_value = 0;
float Log = 0;
float sin_f = 0;
float cos_f = 0;
float tan_f = 0;

square_root =sqrt(x); // square root
printf("square root of %d is %d\n",x,square_root); 

power = pow(x, 2); // x is base and 2 is power
printf("%d power %d is %d\n",x,a,power);


round_of = round(y);
printf("Round of %.2f is %d\n",y,round_of); // here round means takes near value after point.


Ceil = ceil(y);
printf("Ceil %.2f is %d\n",y,Ceil); // here ceil means takes up value after point your can observe in output.

Floor = floor(y);
printf("Floor of %.2f is %d\n",y,Floor); // here round means takes down value after point.

absolute_value = abs(z);   // we added #include<stdlib.h>
printf("THe absolute value of %d is %d\n", z,absolute_value);

Log = log(x);
printf("Log %d is %.3f\n",x,Log);

sin_f = sin(x);
printf("Sine of %d is %f\n",x,sin_f);

cos_f =cos(x);
printf("Cosine of %d is %f\n",x,cos_f);

tan_f = tan(x);
printf("Tangent of %d is %f\n",x,tan_f);


    return 0;
}