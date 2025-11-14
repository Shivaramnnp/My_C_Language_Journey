#include<stdio.h>
#include<string.h>

// function = A reusable section of code that can be invoked "called".
//                 Arguments can be sent to a function so that it can use.

 void singBirthday(char name[]) {
    printf("Happy birthday to you\n");
    printf("Happy birthday to you\n");
    printf("Happy birthday dear %s\n", name);
    printf("Happy birthday to you\n");
    printf("\n");
}
int main(){
    char name[50] = "";

    printf("Enter your name : ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name) -1] = '\0';

    singBirthday(name) ;
    singBirthday(name) ;
    singBirthday(name) ;
    return 0;
}