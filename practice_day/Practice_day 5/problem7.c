#include<stdio.h>
#include<string.h>

int main()
{
    /*int n;
    scanf("%d",&n);
    */

    char s[1001];
    scanf("%s",&s);

    int len=strlen(s);
    int count[26]={0};

    for(int i=0;i<len;i++){
        int value=s[i]-97;

        count[value]++;

    }
    for(int i=0;i<26;i++){
        printf("%c %d\n",i+97,count[i]);

    }
    return 0;
}
