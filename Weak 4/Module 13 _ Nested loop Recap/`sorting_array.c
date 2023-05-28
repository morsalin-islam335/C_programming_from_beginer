// program to sorting array
#include<stdio.h>
int main()
{
    int n,tmp;
    scanf("%d",&n);
    int flag=0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

     for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[j]<arr[i]){
                arr[j]=tmp;
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }

     }
     for(int i=0;i<n;i++){
        printf("%d",arr[i])
     }
     return 0;
}
