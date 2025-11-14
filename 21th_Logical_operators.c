#include<stdio.h>
int main(){
    // logical operators = Used to combine or modify boolean expressions.

   // && = AND
   // || = OR
   //  ! = NOT
   // Loan Approval System using &&, ||, and !

    int age, salary, creditScore;
    int hasPreviousLoanDefault;

    // Input section
    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your Monthly Salary: ");
    scanf("%d", &salary);

    printf("Enter your Credit Score (0–900): ");
    scanf("%d", &creditScore);

    printf("Have you defaulted on any previous loan? (1 = Yes, 0 = No): ");
    scanf("%d", &hasPreviousLoanDefault);

    // Logical conditions
    int isAgeValid = (age >= 21 && age <= 60);            // uses AND (&&)
    int isFinanciallyStable = (salary >= 25000 || creditScore >= 750); // uses OR (||)
    int hasCleanHistory = !hasPreviousLoanDefault;         // uses NOT (!)

    // Final loan eligibility check
    if (isAgeValid && isFinanciallyStable && hasCleanHistory) {
        printf("\n✅ Loan Approved: You meet all eligibility criteria.\n");
    }
    else {
        printf("\n❌ Loan Rejected: You did not meet one or more conditions.\n");
    }



    return 0;

}