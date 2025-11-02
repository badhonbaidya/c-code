#include<stdio.h>

int main(){

    int marks = 0;
    printf("enter the print :");
    scanf("%d",&marks);

    switch(marks/10){
        case 10:
        case 9:
        printf("a");
        break;

        case 8:
        printf("b");
        break;

        case 7:
            printf("c");
            break;

        case 6:
            printf("d");
            break;

        case 5:
            printf("e --");
            break;

            default :
            printf("faild");
        }



    return 0;
}