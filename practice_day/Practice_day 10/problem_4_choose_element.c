//program to maximum summation of an array
#include<stdio.h>
#include<limits.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //Now we need to sorting this array
    int j=n-1;
    for(int i=0;i<j;i++)
    {
        if(arr[j]>arr[i])
        {
            int tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
        j--;
    }
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}

