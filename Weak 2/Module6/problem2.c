#include<stdio.h>
int main()
{
    int n,num,even=0,odd=0,poss=0,neg=0;

    scanf("%d",&n);


    for(int i=1;i<=n;i++){


        scanf("%d",&num);

        if(num%2==0){
            even++;
        }
        else if(num%2!=0){
            odd++;
        }

        if(num>0){
            poss++;
        }
        else if(num<0){
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,poss,neg);

    return 0;
}
