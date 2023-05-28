#include<stdio.h>
int marks_summation(int *marks,int sz,char gender)
{
    int sum=0;
    if(gender=='b')
    {
        for(int i=0;i<sz;i++)
        {
            if(i%2==0)
            {
                sum+=marks[i];
            }
        }
    }
    else if(gender=='g')
    {
        for(int i=0;i<sz;i++)
        {
            if(i%2!=0)
            {
                sum+=marks[i];
            }
        }
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int marks[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }

    char gen;
    scanf("\n%c",&gen);
    printf("%d",marks_summation(marks,n,gen));
    return 0;
}
