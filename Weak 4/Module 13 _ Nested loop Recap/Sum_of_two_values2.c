#include<stdio.h>
int main()
{
    int n,x;
    int flag=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);

    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[i]+arr[j]==x){
                flag=1;
            }

        }
    }
    if(flag==1){
        printf("Yes");
    }
    return 0;
}
