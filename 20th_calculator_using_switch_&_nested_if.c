#include<stdio.h>
int main(){
    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("---CALCULATOR----\n");

    printf("Enter Number1 : ");
    scanf("%lf",&num1);

    printf("Enter operator only (+ - * /): ");
    scanf(" %c",&operator);

    printf("Enter Number2 : ");
    scanf("%lf",&num2);

    switch (operator){
        case '+': 
        result = num1 + num2;
        break;
        case '-': 
        result = num1 - num2;
        break;
        case '*': 
        result = num1 * num2;
        break;
        case '/': 
        if (num2 == 0){
            printf("zero is cant divide number1\n");
            printf(" result may also inf\n");
        }else{
            result = num1 / num2;

        }
        
        break;
        default : 
        printf("Invalid operator!");
    }
printf("The result is %.3lf\n",result);


    return 0;
}