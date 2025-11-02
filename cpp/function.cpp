#include<stdio.h>

int get_sum(int x, int y){
    int sum = x+y;

    return sum;
}

int main (){

    int result = get_sum(10,70);
    printf("%d", result);

    return 0;
}