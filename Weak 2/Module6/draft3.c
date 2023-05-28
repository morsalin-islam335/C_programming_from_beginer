#include<stdio.h>
int main()
{
    int limit;
    printf("how many number do you want to arrange reverse order : ");
    scanf("%d",&limit);
    for (int i=1;i<=limit;i++){
        printf("give a number :");
        int num;
        scanf("%d",&num);
        for (int j=0;j<=num;j++){
            printf("%d ",num%10);
            num/=10;

            if(num==0){
                break;
            }
        }
        printf("\n");
    }
    printf("%d",0/5);
    return 0;
}
