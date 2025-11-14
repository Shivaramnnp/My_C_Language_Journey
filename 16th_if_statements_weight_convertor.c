#include<stdio.h>
int main(){

    int choice = 0;
    float kilograms = 0.0;
    float pounds = 0.0;

   printf("---weight conversion calculator----\n");
    printf("1. Kilograms to pounds\n");
    printf("2. Pounds to Kilograms\n");
     printf("Enter your choice (1 or 2) : ");
     scanf("%d",&choice);

     if(choice == 1){
        printf("Enter weight in  Kilograms : "); 
        scanf("%f",&kilograms);
        pounds = kilograms * 2.20462;
        printf("%f kilograms is equal to Pounds %.3f ",kilograms,pounds);
     }else if ( choice == 2)
     {
      printf("Enter weight in  pounds : ");
        scanf("%f",&pounds);
        kilograms = pounds / 2.20462;
        printf("%.3f Pounds is equal to kilograms %.3f ",pounds,kilograms);  

     } else{
        printf("invalid choice! Enter only(1 or 2) ");
     }
     

    return 0;
}