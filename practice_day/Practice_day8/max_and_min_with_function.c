//program to print max and min from array with function

#include<stdio.h>
int min(int *arr,int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int max(int *arr,int n)
{
    int max=*arr;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
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
    int minimum=min(arr,n);
    int maximum=max(arr,n);

    printf("%d %d",minimum,maximum);
    return 0;
}
