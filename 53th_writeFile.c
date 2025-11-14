#include <stdio.h>

int main(){
    FILE *shiva = fopen("//Users//shivarampatel//Desktop//shiva.TXT" ,"w");
    char sruthi[]= {"Sruthi WILL YOU MARRY 💍 ME!\nI LOVE YOU ❤️ MORE THEN YOUR 🧑‍🧑‍🧒 PARENTS"};
    if(shiva == NULL){
        printf("ERROR WHEN CREATING FILE!");
        return 1;
    }
    fprintf(shiva,"%s",sruthi);
    printf("THE FILE WAS WRITTEN SUCCESSFULLY!");
    fclose(shiva);
    return 0;
}