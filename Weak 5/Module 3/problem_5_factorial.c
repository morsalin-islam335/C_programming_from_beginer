//program to solve factorial of a number.
#include<stdio.h>
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int fact=factorial(n-1);
    return fact*n;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}
