#include<stdio.h>

int main(){

    int name1,name2;
    float result = 0;
    char ch;

    printf("enter the name1 :");
    scanf("%d",&name1);

    printf("enter the name2 :");
    scanf("%d", &name2);
    printf("chose number (+,-,*,/,%)");
    scanf(" %c",&ch);

    switch(ch){

    case '+':
        result = name1 + name2;
        break;

    case '-':
        result = name1 - name2;
        break;

    case '*':
        result = name1 * name2;
        break;

    case '/':
        result =(float)name1/ (float)name2 ;
        break;

    case '%':
        result = name1 % name2;
        break;

        default:
        printf("invalid operation\n");
    }

    printf("result : %d %c %d = %.2f\n",name1,ch,name2,result);

    return 0;
}