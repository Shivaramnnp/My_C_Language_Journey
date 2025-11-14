#include <stdio.h>
#include <stdbool.h>

typedef struct{    char name[15];
    int rollno ;
    int age ;
    bool feePayment ;
} student;

int main(){
    printf("NAMES\t\tROLLNO  AGE      FEE\n\n");
    student student[] = {
    // this below data is for example only
    {"A.Sruthi", 12 , 21 , true}, 
    {"N.Shivaram", 15 , 20 , true},
    {"P.Muthyam", 40 , 21 , false},
    {"A.Anusha",45,21, false}};
    
int no = sizeof(student) / sizeof(student[0]);
for(int i = 0; i < no; i++){


    printf("%s\t",student[i].name);
    printf("%d\t",student[i].rollno);
    printf("%d\t",student[i].age);
    printf("%s\n",(student[i].feePayment) ? "PAID" : "NOT PAID");

}

    return 0;
}