#include <stdio.h>
int main(){
    // integers
    printf("Examples for integers are ..\n");
    printf("\n");
    int age = 21;
    int days = 20;
    int years = 2025;
    
    printf("You are %d Years old \n",age);
    printf("You have %d complete this work\n",days);
    printf("This is %d\n",years);
     printf("\n");

    // float
    printf("Examples for float are ..\n");
    printf("\n");
    float gpa = 9.17;
    float price = 99.99;
    float temperature = 23.726;

    printf("your score is %.1f\n",gpa);
    printf("The price is %.2f/n",price);
    printf("The temperature is %.3f\n",temperature);
    printf("\n");
    // double
    printf("Examples for double are ..\n");
    printf("\n");
    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is %.15f\n",pi);
    printf("The value of e is %.15f\n",e);
    printf("\n");
    
    //char
    printf("Examples for characters..\n");

    char grade = 'A';
    char symbol = '?';
    char currency = '$';
    printf("\n");

    printf("Your grade is %c\n",grade);
    printf("Your fav symbol is %c\n",symbol);
    printf("Your fav currency is %c\n",currency);

    printf("\n");

    //strings
    printf("Examples for strings..\n");
    char name[] = "shiva";
    char email[] = "shivaramnnp@gmail.com";
    char rollno[] = "25UJ5A6611";
    printf("Your Name is %s\n",name);
    printf("Your Email id is %s\n",email);
    printf("Your RollNo is %s\n",rollno);

    printf("\n");
    
    return 0;

}