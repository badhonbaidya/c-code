#include<stdio.h>

float add(float a, float b){
    return a+b;
}

float subtract(float a, float b )
{
    return a - b;
}
float maltiply(float a, float b )
{
    return a * b;
}
float divide(float a, float b )
{
    return a / b;
}

    int main(){
        float a,b;
        printf("enter the value of a and b:\n");
        scanf("%f%f\n",&a,&b);
        float add_result = add(a ,b);
        float subtract_result = add(a, b);
        float maltiply_result = add(a, b);
        float divide_result = add(a, b);
    printf("add:%f, subtract:%f, maltiply:%f, divide:%f", add_result, subtract_result, maltiply_result, divide_result);

        return 0;

}

 
