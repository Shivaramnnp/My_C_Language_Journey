#include<stdio.h>
void checkBalance (float balance);
float deposit ();
float withdraw(float balance);

int main(){
    int choice;
    float balance;

    printf("WELCOME TO SS BANK!\n");
    
    do
    { printf("\nSelect an Option!\n");
    printf("\n1.Check Balance\n");
    printf("2.Deposit\n");
    printf("3.Withdraw\n");
    printf("4.Exit\n");
    printf("\nSelect Your Choice :");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
    checkBalance ( balance);
       
        break;
    case 2:

       balance += deposit ();
        break;
    case 3:
       balance -= withdraw( balance);
        break;

    case 4:
        printf("\nThank you for using SS Bank!\n");
        break;

    default:
        printf("\nInvalid option! select from 1 - 4.\n");
        break;
    }
       
    } while (choice != 4);

    return 0;
}

void checkBalance (float balance){

    printf("\nYour Current Balance is ₹%.2f\n",balance);
    
}
float deposit (){
    float amount = 0.0f;
    printf("\nEnter an Amount to Deposit :₹");
    scanf("%f",&amount);

    if (amount < 0)
    {
       printf("\nInvalid Amount!\n");
       return 0.0f;
    }else{
        printf("\nYou have succssfully Deposited %.2f\n",amount);
        return amount;
    }
    

}
float withdraw(float balance){
   float amount = 0.0f;

   printf("\nEnter an Amount to Withdraw :₹");
   scanf("%f",&amount);

   if(amount < 0){
    printf("\nInvalid Amount!\n");
    return 0.0f;
   }else if(amount > balance){
    printf("\nInsuffient Funds! Your Current Balance is ₹%.2f\n",balance);
    return 0.0f;
   }else{
    printf("\nYou have succssfully Withdrew %.2f\n",amount);
        return amount;
   }

}