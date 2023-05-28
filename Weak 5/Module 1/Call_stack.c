//program to know about call stack.
#include<stdio.h>
void hello(void)
{
    printf("hello\n");
    world();
}
void world(void)
{
    printf("world\n");
}
int main()
{
    hello();
    printf("program finish");
    //this program first call main function than call hello function.
    //In hello function it call world function.
    //after calling hello function it will come back main function than print  program finish.
    return 0;
}
