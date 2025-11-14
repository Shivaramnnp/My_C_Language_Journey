#include <stdio.h>
#include <ctype.h>

int main(){
    char question[][150] = {{"Which Greek god is known as the god of love?"},
                            {"What color is most commonly associated with love and passion?"},
                            {"In which month is Valentine’s Day celebrated?"},
                            {"What is the symbol of love used worldwide?"},
                            {"Which flower is most often linked with romantic love?"},
                            {"Who wrote the famous love tragedy Romeo and Juliet?"},
                            {"What chemical is known as the “love hormone”?"},
                            {"In psychology, what type of love involves deep emotional connection and intimacy but no passion?"},
                            {"Who is known as the Roman god of love?"},
                            {"What does the term “unconditional love” mean?"}};

    char options[][150]= {{"a) Zeus\nb) Ares\nc) Eros\nd) Apollo"},
                         {"a) Blue\nb) Red\nc) Green\nd) White"},
                        {"a) January\nb) February\nc) March\nd) April"},
                        {"a) Star\nb) Heart\nc) Circle\nd) Diamond"},
                        {"a) Sunflower\nb) Daisy\nc) Rose\nd) Lily"},
                        {"a) Charles Dickens\nb) William Shakespeare\nc) Jane Austen\nd) Oscar Wilde"},
                        {"a) Dopamine\nb) Serotonin\nc) Oxytocin\nd) Adrenaline"},
                        {"a) Companionate love\nb) Romantic love\nc) Fatuous love\nd) Consummate love"},
                        {"a) Cupid\nb) Mars\nc) Neptune\nd) Jupiter"},
                        {"a) Love based on benefits\nb) Love without conditions or expectations\nc) Love that changes over time\nd) Love limited by age"}};

    char answer[] = {'C','B','B','B','C','B','C','A','A','B'};
    char guess = '\0';
   int size = sizeof(options)/sizeof(options[0]);
   int score = 0;
   printf("*** WELCOME TO QUIZ GAME ***\n");

   for(int i = 0; i < size; i++){
    printf("\n%d.%s\n",i+1,question[i]);
    printf("\n%s\n",options[i]);
    printf("Enter Your Option : ");
    scanf(" %c",&guess);

    guess = toupper(guess);
    if(guess == answer[i]){
        printf("CORRECT!\n");
        score++;
    }else{
        printf("WRONG!\n");
    }
   }
printf("\nYour score is %d out of %d points.\n",score,size);

return 0;
}
