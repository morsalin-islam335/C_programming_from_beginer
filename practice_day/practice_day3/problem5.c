#include<stdio.h>
int main()
{
    int d;

    scanf("%d",&d);
    int d1=d%10;
    int d2=(d/10)%10;

    if(d1%d2==0 || d2%d1==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;

}
