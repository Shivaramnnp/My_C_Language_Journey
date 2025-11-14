#include <stdio.h>
#include <unistd.h>
int i ;

typedef enum { PENDING = 3 , SUCCESS = 1 , FAILURE = 2
}Status;

void succesfulconnection(Status status);
void failureconnection(Status status);
void pendingconnection(Status status);
void retrystatus(Status status);
void waitconnent(Status status);
void connect(Status status);
int forr(int i);

int main (){
    Status status ;
    do 
{
    printf("Enter \n1.For Successful Connection!\n2.For Failure Connection!\n3.For Pending Connection\n");
    printf("4.Exit\n");
    printf("select your choice :");
    scanf("%d",&status);

    if(status == SUCCESS){ 
   succesfulconnection(status);
    } else if (status == FAILURE)
    {
        failureconnection( status);
    }else if (status == PENDING){
        pendingconnection( status);
    }
     else if (status >= 5){
        printf("INVALID SELECTION!\n");
    }
else {
    printf("Enter to Exit!\n");
}}while(status >=5);
    
    return 0;

}

void succesfulconnection(Status status){
    waitconnent( status);
    printf("\tCONNECTED SUCCESSFULLY!\n");

}
void failureconnection(Status status){
    waitconnent( status);
    printf("\tCONNECTION FAILURE!\n");
    retrystatus(status);
}
void pendingconnection(Status status){
    waitconnent( status);
    printf("\tPENDING!");
    forr(i);
     printf("\tCONNECTING...");
    connect(status);
    printf("\tBUT ITS FAIL!");
    forr( i); 
    retrystatus(status);

    }

void retrystatus(Status status){
    int j;
    do{
    printf("ENTER\n1.RETRY\n");
    printf("0.EXIT\n");
    printf("select your choice : ");
    scanf("%d",&j);
    if(j == 1){
    connect(status);
    printf("\tCONNECTED SUCCESSFULLY!\n");
    }
    else if(j >= 2){
        printf("INVALID SELECTION!\n");
    }
    else{
        printf("\nENTER TO EXIT!");
    }
    }while( j >= 2);

}
void waitconnent(Status status){
    printf("\t WAIT!");
   connect(status);

}
void connect(Status status){
    forr(i);
    printf("\tCONNECTING...");
    forr(i);

}
int forr(int i){
    for(int i = 3; i >= 0; i--){
        sleep(1);
        printf("\n");
    }
    return i;

}