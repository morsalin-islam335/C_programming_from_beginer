#include<stdio.h>

int main(){
    int num1;
    printf("Please input a number");
    scanf("%d",&num1);
    if (num1%2==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}
