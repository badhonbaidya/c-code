#include<stdio.h>

int main(){


    FILE *fp;
    fp = fopen(" test_file.txt", "r");


    int c;
    c = fgetc(fp);
    printf(" the char is : %c\n ", c);
    char buff[100];

    fscanf(fp, "%s", buff);
    printf("the buffer is :%s\n",buff);



    fclose(fp);





    return 0;
}