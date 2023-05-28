#include<stdio.h>
void sort(int *arr)
{
    for(int i=0;i<3-1;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
}

int main(void)
{
    int arr[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }

    int ar[3];
    for(int i=0;i<3;i++)
    {
        ar[i]=arr[i];
    }

    sort(arr);
    for(int i=0;i<3;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;

}
