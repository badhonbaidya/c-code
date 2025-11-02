#include<stdio.h>

int main(){

    /*int name1;
    float name2;
    int name3;

    int sum;

    sum = name1+name3;

    printf("enter the print :");

    scanf("%d%f = %d",&name1, &name2,&name3 );

    printf("%.2d %.2f %.2d",name1,name2,name3);*/



    int name1,name2,name3;
    int sum;
    float avg;

    printf("enter the thee  print :");

    scanf("%d%d%d",&name1,&name2,&name3);
    sum = name1+name2+name3;
    
    avg = sum/3;
    printf("%d\n",sum);
    
    printf("%.2f",avg);

    return 0;
}