//program about pointer
#include<stdio.h>
int main()
{
    int x=100;
    int*ptr=&x;

    printf("%p\n",&x);
    printf("%p",ptr);
    printf("\n%p",&ptr);

    printf("\n%d",*ptr);
    x=300;
    printf("\n%d",*ptr);
    printf("\nPointer er size :%d",sizeof(ptr));
    return 0;
}
