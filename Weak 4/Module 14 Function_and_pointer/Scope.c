#include<stdio.h>
int main()
{
    int x=100;
    printf("%p\n",&x);
    int* c=&x;
    printf("%p",c);
    return 0;
}
