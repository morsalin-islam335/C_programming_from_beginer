//program to calculate absolute difference of matrix
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int sum1=0,sum2=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                continue;
            }
            else{
                sum1+=mat[i][j];
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j!= n-1)
            {
                continue;
            }
            else{
                sum2+=mat[i][j];
            }
        }
    }
    if(sum1-sum2<0)
    {
        printf("%d",(sum1-sum2)*(-1));
    }
    else{
        printf("%d",sum1-sum2);
    }
    return 0;
}
