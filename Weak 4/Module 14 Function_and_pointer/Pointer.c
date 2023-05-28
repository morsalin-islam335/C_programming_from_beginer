//program to know  pointer.
#include<stdio.h>
int main()
{
    int x=100;
    printf("%p\n",&x);
    int* c=&x;
    printf("%p",c);
    //dereference
    printf("\n %d",*c);
    *c=500;
    printf("\n%d",x);
    printf("\n%d",*c);
    return 0;
}
