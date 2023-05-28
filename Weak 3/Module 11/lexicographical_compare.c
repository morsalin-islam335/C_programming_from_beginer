#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int count=1;
    int j=strlen(s)-1;

    for(int i=0;i<j;i++){
        if(s[i]==s[j]){
            count++;
        }
        else{
            count=0;
            break;
        }
        j--;

    }
    if(count!=0){
        printf("YES");
    }
    else{
        printf("NO");

    }
    return 0;
}
