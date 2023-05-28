#include<stdio.h>
int main()

{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);

    int j=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]+arr[j]==x){
            printf("Find");
        }
        else{
            if(j<n-1){
                j++;
            }
            else{
                printf("Not find out");
            }
        }
    }
    return 0;
}
