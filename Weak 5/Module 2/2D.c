//program to input and output 2D array.
#include<stdio.h>
int main()
{
    //declaring 2D array.
    int two_D[3][2];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&two_D[i][j]);
        }

    }

    //printing 2D array.
    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",two_D[i][j]);
        }
        printf("\n");
    }
    return 0;
}
