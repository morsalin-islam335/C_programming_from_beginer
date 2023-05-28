//program to print 1-5 by using recursive function.
//recursive function is like loop.
#include<stdio.h>
void recursive(int i)
{
    if(i==6)return;//to control recursive function we use return keyword.
    printf("\n%d",i);
    recursive(i+1);
}
int main()
{
    int i=1;
    recursive(i);
    return 0;
}
