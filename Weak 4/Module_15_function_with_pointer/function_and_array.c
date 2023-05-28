#include<stdio.h>
void fun(int *arr,int n)
{
    *arr=10;
    printf("%d\n",*arr);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main()
{
    int  arr[5]={10,20,30,40,50};
    printf("\n%p",arr);
    printf("%d\n",sizeof(arr)/sizeof(int));
    fun(arr,sizeof(arr)/sizeof(int));
    return 0;
}
