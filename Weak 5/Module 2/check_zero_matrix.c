//program to check null matrix
#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==0)
            {
                count=1;
            }
            else{
                count=0;
                break;
            }
        }
    }
    if(count==1)
    {
        printf("zero  matrix");
    }
    else{
        printf("not zero matrix");
    }
    return 0;
}
