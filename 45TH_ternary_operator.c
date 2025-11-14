#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;
    
    printf("Enter Any Number two : ");
    scanf("%d %d",&num1,&num2);

    int max = (num1 < num2) ? num2 : num1;
    printf("%d",max);

    // now lets know the number is even or odd
    printf(" is %s",(max % 2 == 0) ? "even" : "odd");
    return 0;


}