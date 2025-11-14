#include <stdio.h>
#include<string.h>

int main(){

    char fruits[][10]={"banana","grapes","pineapple"};

    fruits[0][0] = 'B'; //swiping b into B 

    for(int i = 0;i<3;i++){
        printf("%s\n",fruits[i]);
    }
    return 0;
}
