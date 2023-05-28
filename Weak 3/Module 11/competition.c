#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int count=1;
    int i=0,j=strlen(s)-1;
    while(i<j){
        if(s[i]==s[j]){
            count++;

        }
        else{
            count=0;
            break;

        }
        i++;
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

