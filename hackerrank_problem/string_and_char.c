//program to access string.
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c\n",&ch);
    char  s[100];
    char sen[100];
    gets(s);
    gets(sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;

}
