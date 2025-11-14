#include <stdio.h>
#include <stdbool.h>
int main(){
    int entry ;
    printf("enter 0 or 1 : ");

    scanf("%d",&entry);
bool is_online = entry;
if(is_online){
    printf("Your are ONLINE");
}
else{
    printf("Your are OFFLINE");
}
return 0;
//summary

// variable = A reusable container for a value.
//Behaves as if it were the value it contains.
// int = whole numbers (4 bytes in modern systems)
// float = single-precision decimal number (4 bytes)
// double = double-precision decimal number (8 bytes)
// char = single character (1 byte)
// charl] = array of characters (size varies)
// bool = true or false (1 byte, requires < stdbool.h>)
}

