#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){
    int newNum = 0;
    int  num = 0;
   int choice = 0;
   float sum = 0;
   int i = 0;
    printf("Enter the Number of product your bought ? :");
    scanf("%d",&num);

    float *prices = malloc(num * sizeof(float));

    if(prices == NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    for(i = 0; i < num; i++){
        printf("Enter the price of product%d: ",i+1);
        scanf("%f",&prices[i]);
    }
    for(i = 0; i < num; i++){
    sum += prices[i];
    }
 printf("THE TOTAL PRICE IS ₹%.2f",sum);

    do{
    printf("\nDo you want add more?\n");
    printf("Select the options\n");
    printf("1.yes\n");
    printf("2.No\n");
    scanf("%d",&choice);
    if(choice == 1)
    {
       
    printf("Enter the number of product do you have add : "); 
    scanf("%d",&newNum);
    float *temp = realloc(prices, newNum+num * sizeof(float));
    if (temp == NULL)
    {
        printf("Memory allocation failed!");
    }
    else
    {
        prices = temp;
        temp = NULL;

        for( i = num; i < num+newNum; i++){
        printf("Enter the price of product %d :",i+1);
        scanf("%f",&prices[i]);
    }
for( i = 0; i < num+newNum; i++){
        sum += prices[i];
   
    }
    printf("THE TOTAL PRICE IS ₹%.2f",sum);
    } 
}

}while (choice == 1);
if(choice == 2){
printf("ENTER TO EXIT!");
free(prices);
prices = NULL;
return 0;
}}