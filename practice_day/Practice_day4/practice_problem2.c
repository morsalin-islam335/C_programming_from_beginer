#include<stdio.h>
int main()
{
    int n,len,len2;
    scanf("%d",&n);
    char c[101];

    for(int i=0;i<n;i++){
        scanf("%s",&c);
        len=strlen(c);
        if(len>10){
            len2=len-2;

            printf("%c%d%c\n",c[0],len2,c[len-1]);

        }
        else{
            printf("%s\n",c);
        }
    }
}
