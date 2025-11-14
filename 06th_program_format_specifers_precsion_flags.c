#include <stdio.h>
int main(){
    float price = 199.99;
    float pi = 3.14159265359;
    float bill = 11.999;
    float price1 = -1.9;
// precision
    printf("%.2f\n",price); // here precision is how many digit do you want after point
    printf("%.15f\n",pi); //. after required decimal give no of value.
    printf("%.3f\n",bill);
    printf("\n");
    printf("\n");

// width + precsion
    printf("%7.2f\n",price); // here 7 is width
    printf("%7.15f\n",pi); // observe in output
    printf("%7.3f\n",bill);
    printf("%7.1f\n",price1);

    printf("\n");
    printf("\n");
// flags + width + precision
    printf("%+7.2f\n",price); 
    printf("%+7.15f\n",pi); 
    printf("%+7.3f\n",bill);
    printf("%+7.1f\n",price1);

}