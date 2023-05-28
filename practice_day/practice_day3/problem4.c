#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1-num2>0){
        printf("%d",num1-num2);
    }
    else{
        printf("0");
    }
}
