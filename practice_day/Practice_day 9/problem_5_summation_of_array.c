//program to calculate  sum of array by using recursion.
#include<stdio.h>
int sum(int *arr,int i)
{
    if(i==-1)
    {
        return 0;
    }
    int sum2=sum(arr,i-1);

    return sum2+arr[i];
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
    int summ=sum(arr,n-1);
    printf("%d",summ);
    return 0;

}
