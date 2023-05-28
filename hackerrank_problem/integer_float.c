#include<stdio.h>
int main()
{
    int   a,b;
    scanf("%d %d",&a,&b);
    float c,d;
    scanf("%f %f",&c,&d);
    printf("%d %d",a+b,a-b);
    printf("\n%0.1f %0.1f",c+d,c-d);
    return 0;
}

