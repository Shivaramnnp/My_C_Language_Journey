#include <stdio.h>

void right_triangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) printf("*");
        printf("\n");
    }
}

void inverted_right_triangle(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++) printf("*");
        printf("\n");
    }
}

void full_pyramid(int n){
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) printf(" ");
        for(int j=1;j<=2*i-1;j++) printf("*");
        printf("\n");
    }
}

void inverted_full_pyramid(int n){
    for(int i=n;i>=1;i--){
        for(int s=1;s<=n-i;s++) printf(" ");
        for(int j=1;j<=2*i-1;j++) printf("*");
        printf("\n");
    }
}

void floyds_triangle(int n){
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ", num++);
        }
        printf("\n");
    }
}

void hollow_pyramid(int n){
    if(n<=0) return;
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) printf(" ");
        for(int j=1;j<=2*i-1;j++){
            if(i==n || j==1 || j==2*i-1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

int main(){
    int n, choice;
    printf("Enter number of rows: ");
    if(scanf("%d", &n)!=1 || n<=0){
        printf("Please enter a positive integer for rows.\n");
        return 1;
    }

    printf("\nChoose pattern:\n");
    printf("1. Right triangle\n");
    printf("2. Inverted right triangle\n");
    printf("3. Full pyramid\n");
    printf("4. Inverted full pyramid\n");
    printf("5. Floyd's triangle\n");
    printf("6. Hollow pyramid\n");
    printf("Enter choice (1-6): ");
    if(scanf("%d", &choice)!=1){
        printf("Invalid input.\n");
        return 1;
    }

    printf("\n");
    switch(choice){
        case 1: right_triangle(n); break;
        case 2: inverted_right_triangle(n); break;
        case 3: full_pyramid(n); break;
        case 4: inverted_full_pyramid(n); break;
        case 5: floyds_triangle(n); break;
        case 6: hollow_pyramid(n); break;
        default: printf("Choice must be between 1 and 6.\n");
    }

    return 0;
}
