#include <stdio.h>

int sumOfMarks(int marks[], int size); // function declaration

int main() {
    int size;

    printf("Enter the size of Array: ");
    scanf("%d", &size);

    int marks[size]; 
    
    for (int i = 0; i < size; i++) {
        printf("Enter marks %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nYour marks are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", marks[i]);
    }

    int total = sumOfMarks(marks, size);
    printf("\nTotal Marks = %d\n", total);

    return 0;
}

int sumOfMarks(int marks[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += marks[i];
    }
    return sum;
}
