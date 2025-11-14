#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
   
    srand(time(0));

    int min = 11;
    int max = 20;

    int randomnum1 = (rand() %( max-min+1))+min;
    int randomnum2 = (rand() %( max-min+1))+min;
    int randomnum3 = (rand() %( max-min+1))+min;
    int randomnum4 = (rand() %( max-min+1))+min;
    int randomnum5 = (rand() %( max-min+1))+min;

    printf("Your 5 Random No_S : %d %d %d %d %d",randomnum1,randomnum2,randomnum3,randomnum4,randomnum5);

    return 0;
}