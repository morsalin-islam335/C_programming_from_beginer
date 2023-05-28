#include<stdio.h>
int main()
{
    int num;
    printf("input a number :");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        printf("%d",num%10);
        num/=10;
        if (num==0){
            break;
        }
    }
    return 0;
}
