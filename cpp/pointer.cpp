#include<stdio.h>


int main (){


    /*char x = 'y';
    char *p;
    p = &x;
    printf("%c\n",x);
    printf("%c", *p);*/


    int x,y,z ;

     x = 100;
     y = 20; 
     z = 50;


    int *p1, *p2, *p3;

    p1 = &x;
    p2 = &y;
    p3 = &z;

    if(*p1 > *p2 && *p1 > *p3){
        printf("the largect number is : %d",*p1);

    } else if (*p2 > *p1 && *p2 > *p3)
    {
        printf("the largect number is : %d", *p2);

    }else {
        printf("the largect number is : %d", *p3);
    }

    return 0;
}