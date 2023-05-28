#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);

    }

    int i=0,j=n-1,tmp;
    while(i<j){
        tmp=A[i];
        A[i]=A[j];
        A[j]=tmp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
}
