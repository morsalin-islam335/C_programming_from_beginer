#include<stdio.h>
#include<string.h>

int main()
{
    char n[1001];

    scanf("%s",&n);
    int len=strlen(n);
    int ispalindrome=0;

    int j=len-1;
    for(int i=0;i<len;i++){
        if(n[i]==n[j]){
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
