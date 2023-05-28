#include<stdio.h>

int main(){
    int num1;
    int num2;
    printf("Please input a number ");
    scanf("%d",&num1);
    printf("Please input another number");
    scanf("%d",&num2);

    printf("%d + %d = %d\n%d - %d = %d \n%d x %d = %d \n%d / %d = %d",num1,num2,num1+num2,num1,num2,num1-num2,num1,num2,num1*num2,num1,num2,num1/num2);
    return 0;
}
