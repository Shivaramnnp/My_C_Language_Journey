#include<stdio.h>

int main(){
    int marks = 0;
    printf("Enter your marks : ");
    scanf("%d",&marks);

    if(marks >= 91){
        printf(" Your marks are Oustanding!\n");
        printf("Your Grade is A1\n");
    }
    else if (marks >= 81)
    {
        printf("Your  are Excellent!\n");
        printf("Your Grade is A2\n");
    }
    else if (marks >= 71)
    {
        printf("Your are Very Good!\n");
        printf("Your Grade is B1\n");
    }
    else if (marks >= 61)
    {
        printf("Your are Good!\n");
        printf("Your Grade is B2\n");
    }
    else if (marks >= 51)
    {
        printf("Your are Satisfactory\n!");
        printf("Your Grade is C1\n");
    }
    else if (marks >= 41)
    {
        printf("Your are Acceptable!\n");
        printf("Your Grade is C2\n");
    }
    else if (marks >= 35)
    {
        printf("Your are Pass!\n");
        printf("Your Grade is E\n");
    }
    else if (marks <= 35 )
    {
        printf("Your are Fail & Needs improvement!\n");
        printf("Your Grade is F\n");
    }
    

    
    return 0;
}