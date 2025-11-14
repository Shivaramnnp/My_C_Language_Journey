#include<stdio.h>
#include<string.h>

int main(){

      // Simple shopping cart program
      
    char item[30] = "";
    float price = 0.0f;
    int quatity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would like to buy?:");
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1] = '\0';

    printf("What is the price for each?:");
    scanf("%f",&price);

    printf("How many would you like to buy?:");
    scanf("%d",&quatity);
    printf("You have bought %d %s/s\n",quatity,item);

    total = price * quatity ;
   printf("The total is :%c%.2f",currency,total);

    return 0;
}