#include<stdio.h>
int sum ; // GLOBAL SCOPE
int z ;

int add(int x ,int y){ // LOCAL VARIABLE
    sum = x + y; 
    return sum;
}

int main(){
    //variable scope = Refers to where a variable is recognized and accessible.
    //                  Variables can share the same name
    //                 they're in different scopes O

    z = add(2,3); 
    printf("sum = %d\n",z);
    return 0;
}