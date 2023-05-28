#include<stdio.h>
int summation(int *arr,int i)
{
    if(i==-1)
    {
        return 0;
    }
    int sum=summation(arr,i-1);
    return sum+arr[i];
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("%d",summation(arr,n-1));
    return 0;
}
