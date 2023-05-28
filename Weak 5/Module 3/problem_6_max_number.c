//program to find out maximum value of an array
#include<stdio.h>
int max(int *arr,int i)
{
    if(i<0)
    {
        return 0;
    }
    int maximum=max(arr,i-1);
    int max2=maximum;
    if(arr[i]>max2)
    {
        max2=arr[i];
    }
    return max2;
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
    printf("%d",max(arr,n-1));
    return 0;
}
