#include<stdio.h>
int main()
{
    int n,count,space;
    scanf("%d",&n);

    space=n-1;
    count=1;

    for(int i=1;i<(2*n);i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int j=1;j<=count;j++){
            printf("M");
        }
        if(i<n){
            count+=2;
            space--;
        }
        else{
            count-=2;
            space++;
        }
        printf("\n");
    }
    return 0;
}
