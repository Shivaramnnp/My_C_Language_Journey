#include<stdio.h>
#include<string.h>
/*while loop = Continue some code WHILE the condition remains true
               Condition must be true for us to enter while loop */

int main(){
    char name[50] = "";

    printf("Enter your Name : ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';

    while (strlen(name) == 0)
    {
        printf("Name cant be Empty! Enter your Name : ");
        fgets(name,sizeof(name),stdin);
        name[strlen(name)-1] = '\0';

    }
    printf("Hello %s",name);
    
    
    return 0;
}