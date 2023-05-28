#include<stdio.h>
int main()
{
    int i;
    for (i=1;i<=20;i++){
        if (i==15){
            break;
        }
        printf("%d\n",i);
    }
}
