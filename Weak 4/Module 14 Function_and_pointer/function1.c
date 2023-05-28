#include<stdio.h>
//return + parameter.
int sum(x,y)
{
    int sum=x+y;
    return sum;
}

//return + No parameter.
int sum2(void){
    int x,y;
    scanf("%d %d",&x,&y);
    return x+y;
}
//No return + parameter.

void sum3(x,y)
{
    printf("sum is %d",x+y);
}
//No return + No parameter.
void sum4(void){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("\n%d",x+y);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("sum is %d",sum(a,b));

    printf("\nsum is %d",sum2());
    printf("\nfunction3\n");
    sum3(a,b);
    sum4();

    return 0;
}
