#include<stdio.h>
void point(int *p)
{
    printf("\n%p",p);
    //printing value of x with dereferencing.
    printf("%d\n",*p);
    //dereferencing with pointer.
    *p=600;
}
int main()
{
    int x=300;
    printf("%p",&x);
    printf("\n%d",x);
    int *c=&x;
    point(c);
    //now value of x will be change
    printf("%d",x);
}
