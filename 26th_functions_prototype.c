#include<stdio.h>

/* function prototype = Provide the compiler w/ information about a function's:
                        name, return type,and parameters before its actual definition.
                        Enables type checking and allows functions to be used before they're defined.
                        Improves readability, organization, and helps prevent errors. */



void userinput(char name[], int *age); // function prototypes
void hello(char name[ ], int age);     // function prototypes
int agecheck(int age);      // function prototypes

//main function 
int main(){
 char name[50];
int age  = 0;


userinput( name, &age);

hello(name, age);

    if(agecheck( age)){
        printf("Your can take your own decision\n");
    }else {
        printf("Your must listen to parents\n");
    }
    return 0;

}
//function 1
void hello(char name[ ], int age){
    printf("Hello %s\n",name);   
    printf("Your are %d years old\n",age);

}
//function 2
int agecheck(int age){
    return age >= 18;
}
//function 3
void userinput(char name[], int *age){
    printf("enter your name : ");
    scanf("%s",name);
    printf("enter your age : ");
    scanf("%d",age);


}