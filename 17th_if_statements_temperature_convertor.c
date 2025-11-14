#include<stdio.h>
#include<ctype.h>
int main(){
    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    

    printf("----Temperature convertor------\n");
    printf(" C.celsius to fahrenheit\n");
    printf(" F.fahrenheit to celsius\n");
    printf("Enter your choice : ");
    scanf("%c",&choice);
    
    if (choice == 'C'){
     printf("You selected celsius to fahrenheit\n");
     printf("Enter celsius :");
     scanf("%f",&celsius);
     fahrenheit = (celsius * 9/5 ) + 32;
     printf("%.1f Celsius is equal to %.1f fahrenheit",celsius,fahrenheit);
    }else if ( choice == 'F')
    {
    printf("You selected fahrenheit to celsius\n");
    printf("Enter fahrenheit :");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit - 32) * 5/9;
    printf("%.1f fahrenheit is equal to %.1f celsius",fahrenheit,celsius);

    }else{
    printf("Invalid choice ! Enter only (C or F)");}

      return 0;
    }

  
