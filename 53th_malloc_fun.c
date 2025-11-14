#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
    //// malloc() = A function in C that dynamically allocates
    //              a specified number of bytes in Memory.

    int num =0;
    printf("Enter the number of grades: ");
    scanf("%d",&num);

    char *grades = malloc(num * sizeof(char));

    if(grades == NULL){
        printf("Memory allocation Failed!");
        return 1;
    }

    for(int i = 0; i < num; i++){
        printf("Enter Grade #%d :",i+1);
        scanf(" %c",&grades[i]);
      grades[i] = (char) toupper((unsigned char) grades[i]);  
    }
    

    for( int i = 0; i < num; i++){
        printf("%c ", grades[i]);
    }


    free(grades); // renturning "rented" space back to the os
    grades = NULL; // avoids dangling pointer

    return 0;
}