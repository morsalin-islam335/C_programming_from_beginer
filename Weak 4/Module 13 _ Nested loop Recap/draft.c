#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int count=(2*n)-1,s=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<count;j++){
            printf("*");
        }
        printf("\n");

        for(int j=0;j<s;j++){
            printf(" ");
        }
        count-=2;
        s++;
    }
    return 0;
}
