#include<stdio.h>
int len(char *a,int i)
{
    if(a[i]=='\0')return 0;
    int l=len(a,i+1);
    return 1+l;

}
int main()
{
    char s[6]="hello";
    printf("%d",len(s,0));
    return 0;
}
