//program to introduce basic pointer

#include<stdio.h>
int main()
{
    int x=100;
    printf("%p\n",&x);
    int *p=&x;//declare pointer variable. Pointer variable store another variable address;
    //print address
    printf("%p",p);

    //dereference method
    printf("\n%d",*p);

    //changing variable value
    *p=300;
    printf("\n%d",x);
    return 0;
}
