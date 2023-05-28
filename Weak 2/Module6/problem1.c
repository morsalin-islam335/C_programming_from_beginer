#include<stdio.h>
int main()
{
    int n,num,var,even=0,odd=0,poss=0,neg=0;
    printf("How many number do you want to count :");
    scanf("%d",&n);
    printf("\n");

    for(int i=1;i<=n;i++){

        printf("give a number :");
        scanf("%d",&num);
        printf("\n");
        if(num%2==0){
            even++;
        }
        if(num%2!=0){
            odd++;
        }
        if(num>0){
            poss++;
        }
        if(num<0){
            neg++;
        }
    }
    printf("even number %d\nodd number %d\npossative number %d \nNegative number %d",even,odd,poss,neg);

    return 0;
}
