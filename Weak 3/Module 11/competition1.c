//program to detarmine palimondrome a string.

#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%s",s);


    int ispalindrome=1;

    int j=strlen(s)-1;

    for(int i=0;i<j;i++){
        if(s[i]==s[j]){
            ispalindrome++;
        }
        else{
            ispalindrome=0;
            break;
        }
        j--;

    }

    if(ispalindrome!=0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}

