#include<stdio.h>
int main()
{
    int i=1;
    int sum=0;
    int n;

    printf("Please input a number  :");
    scanf("%d",&n);

    for (;i<=n;i++){
        sum+=i;
    }
    printf("sum is %d",sum);
}
