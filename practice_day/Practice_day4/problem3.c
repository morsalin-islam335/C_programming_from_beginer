#include<stdio.h>
#include<string.h>

int main()
{
    char n[100001];
    scanf("%s",n);
    int len=strlen(n);
    for(int i=0;i<len;i++){
        if(n[i]==','){
            n[i]=' ';
        }
        else if(n[i]>=65 && n[i]<=90){
            n[i]+=32;
        }
        else if(n[i]>=97 &&n[i]<=122){
            n[i]-=32;
        }
    }
    printf("%s",n);

    return 0;

}
