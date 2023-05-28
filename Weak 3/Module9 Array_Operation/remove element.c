
#include<stdio.h>
int main()
{
    int n,index;
    scanf("%d",&n);

    int A[n];

    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);

    }


    scanf("%d",&index);

    for(int i=index;i<n-1;i++){
        A[i]=A[i+1];

    }
    for(int i=0;i<n-1;i++){
        printf("%d ",A[i]);
    }
    return 0;

}
