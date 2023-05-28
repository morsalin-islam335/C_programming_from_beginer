//program to print even index reverse way by using recursion
#include<stdio.h>
void recursion(int *arr,int i)
{
    if(i==-1)
    {
        return;
    }
    if(i%2==0)
    {
        printf("%d ",arr[i]);
    }
    recursion(arr,i-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    recursion(array,n-1);
    return 0;
}
