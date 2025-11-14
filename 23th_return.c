#include <stdio.h>

// return = returns a value back to where you call a functions

int square(int num){ // function for square 
return num * num;
}

int cube(int num){
    return num * num * num; // this for cube
}

int main(){
    int num = 0;
    printf("Enter  a Number : ");
    scanf("%d",&num);

    
    int x = square(num);
    printf("square of %d is %d\n",num ,x);
    
    int s = cube(num);
    printf("cube of %d is %d\n",num ,s);

    return 0;
}