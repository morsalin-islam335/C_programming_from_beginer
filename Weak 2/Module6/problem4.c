#include<stdio.h>
#include<limits.h>
int main()
{
    int number;
    int n,max=INT_MIN,min=INT_MAX;
    scanf("%d",&number);
    for (int i=1;i<=number;i++){
        scanf("%d",&n);
        if(n>max){
            max=n;
        }
        if(n<min){
            min=n;
        }
    }
    printf("%d\n%d",min,max);
    return 0;
}
