#include <stdio.h>

int main(){
    FILE *shiva = fopen("//Users//shivarampatel//Desktop//shiva.txt" ,"r");
    char buffer[1024] = {};
    if(shiva == NULL){
        printf("could not open File!");
        return 0;
    }
    while(fgets(buffer, sizeof(buffer),shiva) != NULL){

    printf("%s",buffer);}
    fclose(shiva);
    return 0;
}
