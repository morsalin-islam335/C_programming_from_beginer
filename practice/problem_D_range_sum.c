//program to sum of range 
#include<stdio.h>
int main()
{
    int test_case;
    scanf("%d",&test_case);
    for(int i=0;i<test_case;i++)
    {
        int start,end;
        scanf("%d %d",&start,&end);
        int sum=0;
        for(int j=start;j<=end;j++)
        {
            sum+=j;

        }
        printf("%d\n",sum);
    }
    return 0;
}