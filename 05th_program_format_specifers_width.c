#include <stdio.h>
int main(){


// width
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = -100;

    printf("%3d\n",num1); // here 3 is the width of integer
    printf("%3d\n",num2);
    printf("%3d\n",num3);
    
    printf("\n");
    // flags
    printf("%+d\n",num1); // it is best for counting
    printf("%+d\n",num2);
    printf("%+d\n",num4);

    printf("\n");
    printf("%03d\n",num1); // here empty spacing with 0
    printf("%03d\n",num2);
    printf("%03d\n",num3);

    return 0;
}