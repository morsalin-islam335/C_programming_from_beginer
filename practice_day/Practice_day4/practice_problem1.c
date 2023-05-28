#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }

    int max=INT_MIN,min=INT_MAX,mx,mn;

    for(int i=0;i<n;i++){
        if(A[i]>max){
            max=A[i];
            mx=i;
        }
        if(A[i]<min){
            min=A[i];
            mn=i;
        }
    }

    int tmp=A[mx];
    A[mx]=A[mn];
    A[mn]=tmp;

    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }



    return 0;
}
