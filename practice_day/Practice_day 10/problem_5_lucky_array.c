//program to determine lucky array if minimum frequency of array is odd than this is lucky.
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
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==min)
        {
            count++;
        }
    }
    if(count%2!=0 b  )
    {
        printf("Lucky");
    }
    else{
        printf("Unlucky");
    }
    return 0;
}
