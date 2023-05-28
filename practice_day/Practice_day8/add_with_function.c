#include<stdio.h>
//return + parameter
int add(num1,num2)
{
    return num1+num2;
}
//return+no parameter
int addition(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    return x+y;
}
//No return + parameter

void ad(num1,num2)
{
    printf("\n%d",num1+num2);
}
//No return + No parameter

void a(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("\n%d",x+y);
}

int main()
{
    int x=10,y=5;
    printf("%d\n",add(x,y));//calling add function
    printf("%d\n",addition());//calling addition function
    ad(x,y);
    a();
    return 0;


}
