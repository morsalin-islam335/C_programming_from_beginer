//program to  print hash ans star
#include<stdio.h>
int main()
{
    int  n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==n/2||j==n/2)
            {
                arr[i][j]='#';
            }
            else
            {
                arr[i][j]='*';
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
