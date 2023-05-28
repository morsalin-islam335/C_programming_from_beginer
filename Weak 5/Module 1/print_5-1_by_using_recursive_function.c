#include<stdio.h>
void recursive(int i)
{
    if(i<1)
    {
        return;
    }
    printf("%d\n",i);
    recursive(i-1);
}
int main()
{
    int n=5;
    recursive(n);
    return 0;
}
