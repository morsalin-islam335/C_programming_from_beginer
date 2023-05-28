#include<stdio.h>
int main()
{
    char s[100];
    gets(s);
    char s2[14]="Hello, World!";
    printf("%s\n%s",s2,s);
    return 0;
}
