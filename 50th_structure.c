#include <stdio.h>
#include <string.h>

typedef struct 
{
char name[15];
char dob[15];
float gpa ;
}friends;

void printfrd(friends frd) ;

int main(){
     printf("NAMES\t\t DOB   \t\t  GPA\n\n");
    friends frd1 ={"N.SHIVARAM","23/11/2006",9.17};
    friends frd2 ={"A.SRUTHI","20/08/2005",9.18};
    friends frd3 = {} ;

strcpy(frd3.name ,"p.muthyam");
frd3.gpa = 8.7;
strcpy(frd3.dob, "00/00/0000");
    
   printfrd(frd1);
   printfrd(frd2);
   printfrd(frd3);

    
}
void printfrd(friends frd){
    printf("%s\t",frd.name);
    printf("%s\t",frd.dob);
    printf("%.2f\n",frd.gpa);
}
