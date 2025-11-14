#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int max = 100;
    int min = 0;
    int answer = (rand() % max - min + 1) + min;
   
    printf("***_NUMBER_GUESS_GAME_***\n");
    printf("\n");
     printf("A NUmber has created between (1 - 100)\n");
    do
    {
        printf("Guess a Number between %d - %d : ",min , max);
        scanf("%d",&guess);
        tries++;
        if (guess < answer)
        {
            printf("TO LOW!\n");
        } else if (guess > answer)
        {
            printf("TO HIGH!\n");
        }else {
            printf("CORRECT!");
        }
        
        
    } while (answer != guess);

    printf("\nThe answer is %d\n", answer);
    printf("It took you %d tries to Guess \n",tries);
    
    return 0;
}