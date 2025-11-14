#include<stdio.h>

void birthday(int *age);
int main(){
    /* pointer = A variable that stores the memory address of another variable.
     Benefit: They help avoid wasting memory by allowing you to pass the address 
     of a large data structure instead of copying the data */
    int age = 20;
    int *pAge = &age;

    birthday( &age);
    return 0;
}
void birthday(int *age){
printf("Address of age :%p\n",&age);
printf("Address of pAge:%p\n",age);
(*age)++;
printf("your are %d old",*age);
}