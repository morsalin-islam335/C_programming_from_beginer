#include<stdio.h>
void demo(int x)
{
    x=300;
    printf("function x value is:%d \nfunction x address is:%p",x,&x);
}
int main()
{
    int x=500;
    printf("main  x value is %d:\nmain x address is:%p\n",x,&x);
    demo(x);
    return 0;

}
