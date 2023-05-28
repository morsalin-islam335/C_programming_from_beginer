#include<stdio.h>
int main(){
    int i;
    for (i=1;i<=32;i++){
        if (i%2==0){
            printf("%d is even\n",i);
        }
        else if(i%2!=0){
            printf("%d is odd\n",i);
        }
    }
    return 0;
}
