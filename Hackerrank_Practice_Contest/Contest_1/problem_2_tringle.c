//program to check equilateral triangle.
#include<stdio.h>
int main()
{
    int n,m,o;
    scanf("%d %d %d",&n,&m,&o);
    if(n!=0&&n==m&&n==o)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
