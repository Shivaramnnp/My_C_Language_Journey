#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice ();
int getUserChoice ();
void checkWinner (int computerChoice , int UserChoice);

int main ( ){


    printf("\nWELCOME TO A GAME!\n");
    printf("ROCK! PAPER! SISSORS!\n\n");

    int computerChoice = getComputerChoice ();
    int UserChoice = getUserChoice ();


    switch (UserChoice)
    {
    case 1 : 
    printf("You choose ROCK!\n");
     break;
     case 2:
    printf("You choose PAPER!\n");
     break;
     case 3:
    printf("You choose SISSORS!\n");
     break;
    }
    switch (computerChoice)
    {
    case 1 : 
    printf("Computer choose ROCK!\n");
     break;
     case 2:
    printf("Computer choose PAPER!\n");
     break;
     case 3:
    printf("Computer choose SISSORS!\n");
     break;
    }
  checkWinner (computerChoice , UserChoice);

    return 0;
}
int getComputerChoice (){
   
    srand (time(0));
    return (rand() % 3)+1;
}
int getUserChoice (){
    int choice ;
 do
 {
    printf("Choose an option\n");
    printf("1. ROCK \n");
    printf("2. PAPER\n");
    printf("3. SISSORS \n");
    printf("choose any option : ");
    scanf("%d",&choice);
 } while ( choice <1 || choice > 3);
    return choice;
}


void checkWinner (int computerChoice , int UserChoice){
    if(UserChoice == computerChoice){
        printf("Its a TIE!\n");
    } else if ((UserChoice == 1 && computerChoice == 3)||
               (UserChoice == 2 && computerChoice == 1)||
               (UserChoice == 3 && computerChoice == 2))
    {
      printf("You WIN!\n");
    } else{
      printf("You LOSE!\n");
    }
    

}