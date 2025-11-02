#include <stdio.h>

int main(){

    int marks;
    printf("enter the print :");
    scanf("%d", &marks);
    if(marks>85 && marks<100){
        printf("your great a");
    }
    else if(marks>60 && marks<85){
        printf("your great b+");
    }
    else if (marks > 40 && marks < 60)
    {
        printf("your great b");
    }
    else if (marks > 30 && marks < 40)
    {
        printf("your great f");
    }
    else{
        printf("sorry");
    }

    return 0;

}