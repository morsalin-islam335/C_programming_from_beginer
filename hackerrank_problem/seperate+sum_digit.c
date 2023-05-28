#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int remainder;
    int sum=0;
    for(int i=1;i<=5;i++)
    {
        remainder=n%10;
        sum+=remainder;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}
