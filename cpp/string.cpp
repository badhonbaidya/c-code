#include <stdio.h>
#include <string.h>

int main(){

   /* char a [] = "dhaka";
    char b[] = "dhaka";
    //strcpy (a,b);
    int x = strcmp (a,b);
    if(x == 0){
        printf("a and b equal.\n");
    }else{
        printf("a and b not equal.\n");
    }*/

    char a [20] = "bangladesh";
    char b[20] = "dhaka";

    strcat(a,b);
    printf("value ia a : %s\n",a);
    printf("value ia b : %s\n", b);

    return 0;
}
