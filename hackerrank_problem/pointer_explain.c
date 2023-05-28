#include<stdio.h>
void update(int *a,int*b)
{
    int tmp1=*a+*b;
    int tmp2=*a-*b;
    if(tmp2<0)
    {
        tmp2=tmp2*(-1);
    }
    *a=tmp1;
    *b=tmp2;
    printf("%d\n%d",*a,*b);

}
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    update(&a,&b);
    return 0;
}
