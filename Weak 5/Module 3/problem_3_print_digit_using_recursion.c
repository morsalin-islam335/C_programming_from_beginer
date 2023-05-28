//program to print digit by using recursion.
void extract(int n)
{
    if(n==0)
    {
        return;
    }
    extract(n/10);
    printf("%d ",n%10);
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        extract(arr[i]);
        if(i!=n-1)
        {
            printf("\n");
        }
    }
}
