#include<stdio.h>

int main(){

    // switch = An alternative to using many if-else statements
    //More efficient with fixed integer values

    int weekday = 0;

    printf("enter the number from (1-7) : ");
    scanf("%d",&weekday);

    switch(weekday) {
        case 1:
        printf("It is Monday");
        break;
        case 2:
        printf("It is Tuesday");
        break;
        case 3:
        printf("It is wednesday");
        break;
        case 4:
        printf("It is Thursday");
        break;
        case 5:
        printf("It is Friday");
        break;
        case 6:
        printf("It is Saturday");
        break;
        case 7:
        printf("It is Sunday");
        break;
        default :
    printf("Invalid vaild ! Enter only the number from (1-7) ");
    }

    return 0;

}