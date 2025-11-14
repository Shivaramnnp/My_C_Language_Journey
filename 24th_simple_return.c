#include<stdio.h>

// return = returns a value back to where you call a functions
int getmax(int x, int y){
    if(x>=y){
        return x;
    } else{
        return y;
    }
}
int main (){
    int x = getmax(4,3);
    printf("max = %d",x);
    return 0;
}