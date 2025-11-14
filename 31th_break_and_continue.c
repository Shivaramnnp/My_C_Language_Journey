#include<stdio.h>
int main(){
    for ( int i = 0; i <= 20; i++) // it start at zero
    {
        if (i == 4) // it skips 4
        {
            continue;  

        } else if (i == 16)
        {
            break; // and finally breaks at 16
        }
         printf("%d\n",i);
        
    }
    
    return 0;
}