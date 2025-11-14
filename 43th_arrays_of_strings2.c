#include <stdio.h>
#include<string.h>


int main(){
    int size = 0;
    printf("How many names do you want to Enter :");
    scanf("%d",&size);

    char names[size][20];
    getchar ();

    for(int i = 0; i < size; i++){
        printf("enter you name[%d] : ",i);
        fgets(names[i], sizeof(names[i]) ,stdin);
        names[i][strlen (names[i]) - 1] = '\0';
    }
    
   for(int i = 0; i < size; i++){
    printf("%s\n",names[i]);

   }


    return 0;
}