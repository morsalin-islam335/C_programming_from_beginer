//program to search number from array.
#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i =0;i<test;i++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        int m;
        scanf("%d",&m);
        for(int j=0;j<n;j++)
        {
            if(j==n-1&&arr[j]!=m)
            {
                printf("Case %d: Not Found",i+1);
                break;
            }

            if(arr[j]!=m)
            {
                continue;
            }
            else if(arr[j]==m)
            {
                printf("Case %d: %d\n",i+1,j+1);
                break;
            }

        }
    }
    return 0;
}
