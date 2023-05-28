#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];
    scanf("%s",s);
    int iscappital=0,issmall=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]>=65 && s[i]<=90){
            iscappital++;
        }
        // If I use else statement it will count as  iscappital.

        else if(s[i]>=97 && s[i]<=122){
            issmall++;
        }

    }
    printf("%d %d",iscappital,issmall);
    return 0;
}
