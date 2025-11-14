#include <stdio.h>
#include <ctype.h>
typedef enum {
   MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
}day;
int main(){
     day today ;
     printf("ENTER A DAY NO(MONDAY = 0) :");
     scanf("%d",&today);
     today = toupper(today);

    if (today == SATURDAY || today == SUNDAY){
        printf("HOLIDAY\n");
        printf("YOU CAN STAY AT HOME!");
    }else{
        printf("WORKING DAY");
        printf("YOU MUST GO TO COLLEGE!");
    }
    return 0;
}