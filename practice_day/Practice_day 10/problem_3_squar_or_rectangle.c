#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&arr[i],&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ar[i])
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}
