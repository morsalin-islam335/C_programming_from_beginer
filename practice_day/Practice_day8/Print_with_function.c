//program to print 1 to N by using function.
#include<stdio.h>
void print(int n)
{
    for(int i=1;i<=n-1;i++)
    {
        printf("%d ",i);
    }
    printf("%d",n);
}

int main(void)
{
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}
