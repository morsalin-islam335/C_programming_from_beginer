#include<stdio.h>
int main()
{
    char n[1001];

    scanf("%s",&n);
    int len=strlen(n);
    bool ispalindrome;

    int j=n-1;
    for(int i=0;i<j;i++){
        if(n[i]==n[j]){
            ispalindrome=1;
            j--;
        }
        else{
            ispalindrome=0;
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
