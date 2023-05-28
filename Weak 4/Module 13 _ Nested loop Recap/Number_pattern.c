//program to create a number patten.

#include<stdio.h>
int main()
{

    //1 to n pattern.
    int n;
    scanf("%d",&n);
    int count=1;

    for(int i=0;i<n;i++){
        for(int j=1;j<=count;j++){
            printf("%d ",j);
        }
        count++;
        printf("\n");
    }
    printf("\n");

    //n to 1 pattern.

    int count2=n;
    for(int i=0;i<n;i++){
        for(int j=count2;j>0;j--){
            printf("%d ",j);

        }
        count2--;
        printf("\n");
    }
    return 0;
}
