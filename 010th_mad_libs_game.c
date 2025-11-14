#include<stdio.h>
#include<string.h>
int main(){
    // mad lib game 
    char noun[30] = "";
    char verb[30] = "";
    char adjective1[30] = "";
    char adjective2[30] = "";
    char adjective3[30] = "";

    printf("Enter an Adjective (descriping): ");
    fgets(adjective1,sizeof(adjective1),stdin);
    adjective1[strlen(adjective1) -1]= '\0';

    printf("Enter a Noun(person or animal) :");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun) -1] ='\0';

    printf("Enter an Adjective (descriping): ");
    fgets(adjective2,sizeof(adjective2),stdin);
    adjective2[strlen(adjective2) -1] = '\0';


    printf("Enter an verb (work): ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb) -1] = '\0';

    printf("Enter an Adjective (descriping): ");
    fgets(adjective3,sizeof(adjective3),stdin);
    adjective3[strlen(adjective3) -1]= '\0';

   
    printf("\nIt was a %s morning when I first saw %s in the college corridor.\n", adjective2, noun);
    printf("%s had a %s smile that could melt any heart.\n", noun, adjective1);
    printf("Every time I saw %s, my heart would skip a beat.\n", noun);
    printf("One day, we sat near the %s garden and %s for hours.\n", adjective3, verb);
    printf("The sun was setting, painting the sky with %s colors.\n", adjective2);
    printf("We talked about life, dreams, and everything in between.\n");
    printf("%s laughed softly, and that sound became my favorite melody.\n", noun);
    printf("I realized that love wasn’t about perfection—it was about moments.\n");
    printf("That %s day changed my life forever.\n", adjective1);
    printf("Even today, I remember %s and that %s smile under the %s sky.\n", noun, adjective1, adjective3);





    return 0;
}