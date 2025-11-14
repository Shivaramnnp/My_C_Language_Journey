#include<stdio.h>
#include<string.h>

int main(){

    int age =0; // 0 = null
    float gpa = 0.0f; // 0.0f = null
    char grade = '\0'; // null termintor 
    char name[30] = ""; // " " null

    // we will make them varables as null because in c there will be undifined behavier
    //This avoids undefined behavior and clearly represents “empty” values.
    printf("Enter your age:");
    scanf("%d", &age);

    printf("Enter your gpa:");
    scanf("%f", &gpa);

    printf("Enter your Grade:");
    scanf(" %c",&grade);

    getchar();
    printf("Enter your Full Name:");
    //scanf("%s",&name); // scanf cant read spaces so we use another function.
    fgets(name, sizeof(name),stdin);
    name[strlen(name) -1] = '\0';// for \n 


    
    printf("Full_Name: %s\n",&name);  
    printf("Age: %d\n",age);
    printf("GPA: %.2f\n", gpa);
    printf("Grade: %c\n",grade);
    

    

    return 0;
}