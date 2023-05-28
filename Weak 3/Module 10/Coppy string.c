//program to detarmine palimondrome a string.

#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int len=strlen(s);

    int ispalindrome=0;

    int j=len-1;

    for(int i=0;i<j+1;i++){
        if(s[i]==s[j]){
            ispalindrome=1;
            j--;
        }
        else{
            break;
        }

    }

    if(ispalindrome==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
