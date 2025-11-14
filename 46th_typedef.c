 //typedef = reserved keyword that gives an existing datatype a "nickname"
    //Helps simplify complex types and improves code readability

    // typedef existing_type new_name;
#include <stdio.h>
#include <ctype.h>

typedef char fristNames[20];
typedef char lastNames[20];

int main(){
    int i = 0;
    
    printf("How many names do you want to enter :");
    scanf("%d",&i);
    fristNames name1[i];
    lastNames name2[i];

    for(int j = 0; j < i; j++ ){
        printf("Enter person %d FristName :",j+1);
        scanf(" %19s",name1[j]);
        printf("Enter person %d SecondName :",j+1);
        scanf(" %19s",name2[j]);

       for (int k = 0; name1[j][k] != '\0'; k++) {
            name1[j][k] = toupper((unsigned char)name1[j][k]);
        }
        for (int k = 0; name2[j][k] != '\0'; k++) {
            name2[j][k] = toupper((unsigned char)name2[j][k]);
        }

    }
 printf("\n--- Person List ---\n");
    for(int k = 0; k < i; k++){
  
        printf("Your person %d Name is %s %s\n",k+1,name1[k],name2[k]);

    }
printf("Enter to EXIT");
    return 0;
}
