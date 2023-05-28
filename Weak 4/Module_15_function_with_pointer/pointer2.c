//dereferencing pointer.
#include<stdio.h>
int main()
{
    double x=30.60;
    double* ptr=&x;
    printf("%d",sizeof(ptr));
    printf("\n%0.2lf",*ptr);
    double* ptr2=ptr;
    x=80.30;
    printf("\n%0.2lf",*ptr2);
    printf("\n%0.1lf",*ptr);

    return 0;
}
