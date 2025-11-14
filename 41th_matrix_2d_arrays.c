#include<stdio.h>

int main(){
    int rows = 0;
    int columns = 0;
    printf("enter rows : ");
    scanf("%d",&rows);

     printf("enter columns : ");
    scanf("%d",&columns);

    int matrix[rows][columns] ;
   
    for(int i = 0; i < rows; i++){
    for (int j = 0; j < columns; j++)
     {
       printf("enter element of [%d][%d]: ",i,j);
       scanf("%d",&matrix[i][j]);
     }   
    
     }
      printf("\nYour matrix is below!\n");
     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < columns; j++){
     printf("%3d ",matrix[i][j]);

        }
        printf("\n");
     }
     
 return 0;
}