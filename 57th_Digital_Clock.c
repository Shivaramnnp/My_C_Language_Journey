#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main(){
    time_t rawtime =0;
    struct tm *ptime = NULL;
    bool isRunning = true;


    printf("--->DIGITAL CLOCK<---\n");

    while(isRunning){
        time(&rawtime);
        ptime = localtime(&rawtime);
        printf("\r%d:%d:%d ",ptime->tm_hour,ptime->tm_min,ptime->tm_sec);
     
        sleep(1);
        fflush(stdout);
    }
    
return 0;
}