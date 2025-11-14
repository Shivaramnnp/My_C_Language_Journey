#include<stdio.h>
#include<stdbool.h>

int main (){
    bool running = true;
    char response = '\0';
while (running)
{
    printf("You are playing a game!\n");
    printf("Would you like to continue? (Y = yes or N = no) : ");
    scanf(" %c",&response);
    if (response == 'y' || response == 'Y' )
    {
        running = true;
    } else if (response == 'N' || response == 'n')
    {
       running = false;
    } else{
        running = true;
        printf("Invalid ENTRY!\n");
        
    }
    
    
}
printf("You are exit the game!");

    
    return 0;
}   
