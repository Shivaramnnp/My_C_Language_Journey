#include <stdio.h>
int main(){
    int num1 = 15;
    int num2 = 12;
    int sum, sub, mut, rem;
    float div;
    sum = num1 + num2;
    sub = num1 - num2;
    mut = num1 * num2;
    rem = num1 % num2;
    div = num1 / num2;

    printf("The sum is %d\n",sum);
    printf("The sub is %d\n",sub);
    printf("The mut is %d\n",mut);
    printf("The rem is %d\n",rem);
    printf("The div is %f\n",div);

    printf("%d\n",num1);
// augmented assignment operators
    int x = 12;
    x += 3; //uncomment and observe the result
    //x -= 3;
   //x *= 3;
   //x /= 3;
    //x %= 3;

   printf("%d",x);
    return 0;
}