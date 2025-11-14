#include<stdio.h>
//array = A fixed-size collection of elements of the same data type
//        (Similar to a variable, but it holds more than 1 value).

int main (){
    int numbers[] = {10, 20, 30, 40, 50, 60};
    char grade[] = {'A', 'B' , 'C', 'D', 'F'};
    char name[] = "shiva ram";
  
    int size1 = sizeof(name) / sizeof(name[0]);
    int size2 = sizeof(grade) / sizeof(grade[0]);
    int size3 = sizeof(numbers) / sizeof(numbers[0]);
   

   // printf("size is %d\n",sizeof(numbers)); // to know size of numbers.
   // printf("size is %d\n",sizeof(numbers[0]));  //to know size of numbers[0].

    for( int i = 0; i < size1 ;i++){
  
    printf("%c",name[i]);
    }

    printf("\n");

    for( int i = 0; i < size3 ;i++){
    printf("%d ",numbers[i]);
     
    }

    printf("\n");

    for( int i = 0; i < size2 ;i++){
    printf("%c ",grade[i]);
   
    }
    
    return 0;
}
