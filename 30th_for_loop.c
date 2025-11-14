#include<stdio.h>
#include<unistd.h>


int main(){


    /*For loop = Repeat some code a limited # of times 
                 for (Initialization; Condition; update)*/
                 
    for(int i = 5; i >= 0; i--){
        sleep(1);
        printf("%d\n",i);
        fflush(stdout);

    }
    printf("\n");
    printf("HAPPY BIRTHDAY SRUTHI! ");
    return 0;
}