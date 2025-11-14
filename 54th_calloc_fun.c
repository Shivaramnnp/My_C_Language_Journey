#include <stdio.h>
#include <stdlib.h>

int main(){
   /* calloc = Contiguous Allocation.
               Allocates memory dynamically and sets all allocated bytes to 0.
                malloc() is faster, but calloc() leads to less bugs
               calloc(#,size)  */
     int sum = 0;
    int avg =0;
    int num = 0;
    printf("Enter number of Subjects you have? : ");
    scanf("%d",&num);

    int *marks = calloc(num ,sizeof(int));
    if(marks == NULL){
        printf(" Memory allocation failed!");
        return 1;
    }
    for(int i = 0;i < num; i ++){
        printf("Enter subject #%d Marks: ",i+1);
        scanf("%d",&marks[i]);

    }

    for(int i = 0;i < num; i ++){
        printf("%d ",marks[i]);
    }
     for(int i = 0; i < num; i++){
        sum += marks[i];
    }
    avg = sum/num;
    printf("\nTotal Marks is %d",sum);
    printf("\nTHE Average Marks is %d",avg);
    free(marks);
    marks = NULL;
    return 0;
}
